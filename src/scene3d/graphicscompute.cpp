#include "graphicscompute.h"

// #include "Contours/Kriging.h"
#include <algorithm>
#include <QApplication>


// extern QHash<QString,GroundOverlay> overlayHash_;

// QList<BoatPoint> BoatWayPointList_0;
// QList<BoatPoint> BoatWayPointList; //灵活存储火星偏移（高德）或正常坐标；绘制时从这里取点
extern double nowMaxDepth;








qreal Bing::clip(qreal n, qreal min, qreal max)
{
    n = qMax(n, min);
    n = qMin(n, max);
    return n;
}


qreal Bing::clipLon(qreal lon)
{
    return clip(lon, -180.0, 180);
}


qreal Bing::clipLat(qreal lat)
{
    return clip(lat, -85.05112878, 85.05112878);
}


uint Bing::mapSize(int level)
{
    uint w = MAP_TIlE_SIZE;
    return (w << level);
}

/**
 * @brief        计算指定纬度、级别的地面分辨率（不同纬度分辨率不同）
 * @param lat    纬度
 * @param level  地图级别 1-23（bing地图没有0级别，最低级别为1，由4块瓦片组成）
 * @return       地面分辨率 单位（米/像素）
 */
qreal Bing::groundResolution(qreal lat, int level)
{
    lat = clipLat(lat);
    return qCos(lat * M_PI / 180) * 2 * M_PI * g_EarthRadius / mapSize(level);
}

/**
 * @brief           计算地图比例尺，地面分辨率和地图比例尺也随纬度而变化
 * @param lat       纬度
 * @param level     地图级别 1-23（bing地图没有0级别，最低级别为1，由4块瓦片组成）
 * @param screenDpi 屏幕分辨率，单位为点/英寸  通常为 96 dpi
 * @return          地图比例尺 1:N（地图上1厘米表示实际N厘米）
 */
qreal Bing::mapScale(qreal lat, int level, int screenDpi)
{
    return groundResolution(lat, level) * screenDpi / 0.0254;   // 1英寸等于0.0254米
}


//将一个点从纬度/经度WGS-84墨卡托坐标(以度为单位)转换为指定细节级别的像素XY坐标。
QPoint Bing::latLongToPixelXY(qreal lon, qreal lat, int level)
{
    lon = clipLon(lon);
    lat = clipLat(lat);

    qreal x = (lon + 180) / 360;
    qreal sinLat = qSin(lat * M_PI / 180);
    qreal y = 0.5 - qLn((1 + sinLat) / (1 - sinLat)) / (4 * M_PI);

    uint size = mapSize(level);
    qreal pixelX = x * size + 0.5;
    pixelX = clip(pixelX, 0, size - 1);
    qreal pixelY = y * size + 0.5;
    pixelY = clip(pixelY, 0, size - 1);

    return QPoint(pixelX, pixelY);
}


//将像素从指定细节级别的像素XY坐标转换为经纬度WGS-84坐标(以度为单位)
void Bing::pixelXYToLatLong(QPoint pos, int level, qreal& lon, qreal& lat)
{
    uint size = mapSize(level);
    qreal x = (clip(pos.x(), 0, size - 1) / size) - 0.5;
    qreal y = 0.5 - (clip(pos.y(), 0, size - 1) / size);
    lon = x * 360;
    lat = 90 - (360 * qAtan(qExp(-y*2*M_PI)) / M_PI);
}
void Bing::pixelXYToLatLong(QPointF pos, int level, qreal& lon, qreal& lat)
{
    uint size = mapSize(level);
    qreal x = (clip(pos.x(), 0, size - 1) / size) - 0.5;
    qreal y = 0.5 - (clip(pos.y(), 0, size - 1) / size);
    lon = x * 360;
    lat = 90 - (360 * qAtan(qExp(-y*2*M_PI)) / M_PI);
}


QPoint Bing::pixelXYToTileXY(QPoint pos)
{
    int x = pos.x() / MAP_TIlE_SIZE;
    int y = pos.y() / MAP_TIlE_SIZE;
    return QPoint(x, y);
}


QPoint Bing::tileXYToPixelXY(QPoint tile)
{
    int x = tile.x() * MAP_TIlE_SIZE;
    int y = tile.y() * MAP_TIlE_SIZE;
    return QPoint(x, y);
}
QPointF Bing::tileXYToPixelXY(QPointF tile)
{
    int x = tile.x() * MAP_TIlE_SIZE;
    int y = tile.y() * MAP_TIlE_SIZE;
    return QPointF(x, y);
}



QPoint Bing::latLongToTileXY(qreal lon, qreal lat, int level)
{
    return pixelXYToTileXY(latLongToPixelXY(lon, lat, level));
}


QPointF Bing::tileXYToLatLong(QPoint tile, int level)
{
    qreal lon = 0;
    qreal lat = 0;
    QPoint pos = tileXYToPixelXY(tile);
    pixelXYToLatLong(pos, level, lon, lat);
    return QPointF(lon, lat);
}
QPointF Bing::tileXYToLatLong(QPointF tile, int level)
{
    qreal lon = 0;
    qreal lat = 0;
    QPointF pos = tileXYToPixelXY(tile);
    pixelXYToLatLong(pos, level, lon, lat);
    return QPointF(lon, lat);
}







/*------------------------------------------------------GraphicsItemGroup---------------------------------------------------*/
GraphItemGroup::GraphItemGroup(QGraphicsItem* parent) : QGraphicsItemGroup(parent)
{
    colorBarpixmap = new QPixmap(":/navi/colorbar.png");
    colorBarImage = colorBarpixmap->toImage();
}

GraphItemGroup::~GraphItemGroup() {}


//添加绘制瓦片图
void GraphItemGroup::addImage(const ImageInfo& info)
{
    quint64 key = (info.x << 24) + info.y;
    QPointF pos = Bing::tileXYToPixelXY(QPoint(info.x, info.y));
    if (m_itemsImg.contains(key))
    {
        QGraphicsPixmapItem* item = m_itemsImg[key];
        item->setPos(pos);
        item->setPixmap(info.img);
        item->show();
    }
    else
    {
        // 绘制瓦片图
        QGraphicsPixmapItem* item = new QGraphicsPixmapItem(info.img);
        item->setZValue(-1);
        item->setPos(pos);
        this->addToGroup(item);
        m_itemsImg[key] = item;

//         绘制边框
       // auto* itemR = new QGraphicsRectItem(0, 0, 255, 255);
       // itemR->setPos(pos);
       // itemR->setPen(QPen(Qt::red));
       // this->addToGroup(itemR);
       // m_itemsR[key] = itemR;

       // 绘制瓦片编号
       // QString str = QString("%1,%2").arg(amapOffset.x()).arg(amapOffset.y());
       // QFont font("宋体", 14);
       // auto itemText = new QGraphicsSimpleTextItem(str);
       // itemText->setFont(font);
       // itemText->setPos(pos);
       // itemText->setPen(QPen(Qt::red));
       // this->addToGroup(itemText);
       // m_itemsText[key] = itemText;
    }

}


void GraphItemGroup::showHistoryScreen(bool isShow,const QVector<HistoryScreenRec>& historyScreenVec,int level)
{
    if(isShow) {
       for(HistoryGraphicsItem* item : historyScreenVec_) {
          if (item) {
             this->removeFromGroup(item->rect);
             delete item->rect; item->rect = nullptr;
             this->removeFromGroup(item->text);
             delete item->text;  item->text = nullptr;
          }
       }
       historyScreenVec_.clear();
       int count = historyScreenVec.count();
       for (int i = 0; i < count; i++) {
          HistoryScreenRec rec = historyScreenVec.at(i);
          QPoint leftTop = Bing::latLongToPixelXY(rec.leftTopCoor.longitude,rec.leftTopCoor.latitude,level);
          QPoint rightBottom = Bing::latLongToPixelXY(rec.rightBottom.longitude,rec.rightBottom.latitude,level);

          QColor color = QColor(255, 0, 0, 100);
          QGraphicsRectItem* rectItem = new QGraphicsRectItem(QRectF(leftTop,rightBottom));
          rectItem->setPen(QPen(color, 5));
          rectItem->setBrush(Qt::NoBrush);
          rectItem->setZValue(3);
          this->addToGroup(rectItem);

          if(!rec.label.isEmpty()) {
             QStringList parts = rec.label.split('#',Qt::SkipEmptyParts);
             QString SerialNo = "SerialNo:" + QString::number(i+1) + "/" + QString::number(count);
             QString htmlText = QString("<div style='background-color: rgba(255,255,255,150); padding: 8px;'>"
                                        "<div style='background-color: rgba(255,255,255,150); padding: 4px;'>%1</div>"
                                        "<div style='background-color: rgba(255,255,255,150); padding: 4px;'>%2</div>"
                                        "<div style='background-color: rgba(255,255,255,150); padding: 4px;'>%3</div>"
                                        "<div style='background-color: rgba(255,255,255,150); padding: 4px;'>%4</div>"
                                        "</div>")
                .arg(parts[0].toHtmlEscaped()).arg(parts[1].toHtmlEscaped()).arg(parts[2].toHtmlEscaped()).arg(SerialNo.toHtmlEscaped());
            QGraphicsTextItem* labelItem = new QGraphicsTextItem;
            labelItem->setHtml(htmlText);

            QFont font;
            font.setBold(true);
            font.setPixelSize(12);
            labelItem->setFont(font);
            labelItem->setDefaultTextColor(Qt::red);

            QPointF topLeft = rectItem->rect().topLeft();
            QPointF sceneTopLeft = rectItem->mapToScene(topLeft);
            labelItem->setPos(sceneTopLeft + QPointF(5, 5));
            labelItem->setZValue(3);

            this->addToGroup(labelItem);

            HistoryGraphicsItem* historyGraph = new HistoryGraphicsItem();
            historyGraph->rect = rectItem;
            historyGraph->text = labelItem;
            historyScreenVec_.append(historyGraph);
          }
       }

    }
    else {
       for(auto &item : historyScreenVec_) {
           item->rect->setVisible(false);
           item->text->setVisible(false);
       }
    }

}


// void GraphItemGroup::addContourFill(const KmlFillStruct& kmlFillStruct,int level)
// {
//     // qDebug() << "fillItemVec_.size() " << fillItemVec_.size();
//     QPolygon outerPolygon;
//     QVector<QPolygon> interPolygonVec;

//     // 构造外轮廓
//     for(typGpsCooDegree gpsPos : kmlFillStruct.outerBoundaryMercatorPos) {
//        QPoint pos = Bing::latLongToPixelXY(gpsPos.longitude,gpsPos.latitude,level);
//        outerPolygon << pos;
//     }

//     // 构造内孔洞
//     for(QVector<typGpsCooDegree> interBoundary : kmlFillStruct.interBoundaryMercatorPos) {
//         QPolygon interPolygon;
//         for(typGpsCooDegree gpsPos : interBoundary) {
//            QPoint pos;
//            pos = Bing::latLongToPixelXY(gpsPos.longitude,gpsPos.latitude,level);
//            interPolygon << pos;
//         }
//         interPolygonVec.append(interPolygon);
//     }

//     // 创建填充路径
//     QPainterPath fillPath;
//     fillPath.addPolygon(outerPolygon);

//     for (const QPolygon& hole : interPolygonVec) {
//        QPolygon inverseHole;
//        for (int i = (hole.size() - 1); i >= 0; --i) {
//           inverseHole << hole.at(i);
//        }
//        fillPath.addPolygon(inverseHole);
//     }

//     QColor fillColor = QColor(kmlFillStruct.style.color);
//     QGraphicsPathItem* fillItem = new QGraphicsPathItem(fillPath);
//     fillItem->setBrush(QBrush(fillColor));
//     fillItem->setPen(Qt::NoPen);

//     this->addToGroup(fillItem);
//     fillItemVec_.append(fillItem);
// }


// void GraphItemGroup::addTrackLine(const QVector<typGpsCooDegree>& trackPoints,KmlStyleStruct style,int level,QString key)
// {
//     if(trackPoints.size() < 2) {
//        return;
//     }

//     QPainterPath path;
//     // 将第一个点作为起点
//     typGpsCooDegree firstGps = trackPoints.at(0);
//     QPoint startPixel = Bing::latLongToPixelXY(firstGps.longitude,firstGps.latitude,level);
//     path.moveTo(startPixel);

//     // 将轨迹点依次连接成线
//     for(int i = 1; i < trackPoints.size(); ++i)
//     {
//        typGpsCooDegree gps = trackPoints.at(i);
//        QPoint nextPixel = Bing::latLongToPixelXY(gps.longitude,gps.latitude,level);
//        path.lineTo(nextPixel);
//     }

//     auto* trackLine = new QGraphicsPathItem(path);

//     QPen pen;
//     pen.setWidth(style.width);
//     pen.setColor(style.color);
//     trackLine->setOpacity(style.opacity);
//     trackLine->setPen(pen);
//     this->addToGroup(trackLine);

//     if (kmlItemHash_.contains(key)) {
//        kmlItemHash_[key].append(trackLine);
//     } else {
//        QVector<QGraphicsPathItem*> vec;
//        vec.append(trackLine);
//        kmlItemHash_.insert(key, vec);
//     }

// }


// void GraphItemGroup::addKmzImage(int level)
// {
//     for(auto it = overlayHash_.begin(); it != overlayHash_.end(); ++it) {
//        GroundOverlay overlay = it.value();

//        QPixmap outlineImage;
//        outlineImage.load(overlay.imagePath);
//        double northLat = overlay.north;
//        double southLat = overlay.south;
//        double westLon = overlay.west;
//        double eastLon = overlay.east;

//        QPoint topLeft = Bing::latLongToPixelXY(westLon, northLat, level);
//        QPoint bottomRight = Bing::latLongToPixelXY(eastLon, southLat, level);

//        QRectF imageRect(topLeft, bottomRight);

//        QGraphicsPixmapItem *imageItem_ = new QGraphicsPixmapItem(outlineImage);
//        imageItem_->setPos(imageRect.topLeft());

//        double scaleX = imageRect.width() / outlineImage.width();
//        double scaleY = imageRect.height() / outlineImage.height();
//        imageItem_->setScale(std::min(scaleX, scaleY));  // 适配较小比例以保持完整显示
//        this->addToGroup(imageItem_);
//        imageItemHash_.insert(it.key(),imageItem_);
//     }

// }


// void GraphItemGroup::addBoatTrackLine(int level)
// {
//     int boatPtSize = BoatWayPointList.size();
//     if (boatPtSize < 2) {
//         return;
//     }
//     if(!boatTrackPathVec_.isEmpty()) {
//         return;
//     }

//     QVector<QPoint> points;
//     QVector<QColor> colors;
//     points.reserve(boatPtSize);
//     colors.reserve(boatPtSize);

//     for (int i = 0; i < boatPtSize; ++i) {
//         const BoatPoint& boatPt = BoatWayPointList.at(i);
//         QPoint p = Bing::latLongToPixelXY(boatPt.longitude, boatPt.latitude, level);
//         points.append(p);
//         QColor color;
//         uint colorDep = boatPt.depth*89.0f/nowMaxDepth;
//         if(colorDep < 90) {
//             color.setRgb(colorBarImage.pixel(3,colorDep));
//         } else {
//             color.setRgb(colorBarImage.pixel(3,89));
//         }
//         colors.append(color);
//     }

//     auto* pathItem = new ColoredPathItem(points, colors);
//     pathItem->setZValue(10);
//     this->addToGroup(pathItem);
//     boatTrackPathVec_.append(pathItem);
// }

// void GraphItemGroup::updateBoatTrackColors()
// {
//     for (int i = 0; i < boatTrackPathVec_.size(); ++i) {
//         auto* pathItem = boatTrackPathVec_[i];
//         QVector<QColor> newColors;
//         newColors.reserve(BoatWayPointList.size());

//         for (const BoatPoint& pt : BoatWayPointList) {
//             QColor color;
//             uint colorDep = pt.depth*89.0f/nowMaxDepth;
//             if(colorDep < 90) {
//                 color.setRgb(colorBarImage.pixel(3,colorDep));
//             } else {
//                 color.setRgb(colorBarImage.pixel(3,89));
//             }
//             newColors.append(color);
//         }

//         pathItem->updateColors(newColors);
//     }
// }


// void GraphItemGroup::clearBoatTrackRealTime()
// {
//     for(auto &item : boatTrackLineVec_) {
//         if(item) {
//             this->removeFromGroup(item);
//             delete item;
//             item = nullptr;
//         }
//     }
//     realTimeIdx_ = 0;
//     boatTrackLineVec_.clear();
// }

// void GraphItemGroup::showBoatTrackLine(bool isShow)
// {
//     for(auto &item : boatTrackPathVec_) {
//        if (item) {
//           if(isShow){
//              item->show();
//           } else {
//              item->hide();
//           }
//        }
//     }

// }

// void GraphItemGroup::clearBoatTrackLine()
// {
//    for(auto &item : boatTrackPathVec_) {
//       if (item) {
//          this->removeFromGroup(item);
//          delete item;
//          item = nullptr;
//       }
//    }
//    boatTrackPathVec_.clear();
// }


// void GraphItemGroup::addBoatContours_global(int level)
// {
//     if((!polyVec_.isEmpty()) || (!contourValueTextVec_.isEmpty())) {
//        return;
//     }
//     polyVec_.clear();
//     contourValueTextVec_.clear();

//     auto colorVec = ContourSingleton::getInstance().getContourColorVec();
//     bool isMetres = ContourSingleton::getInstance().getGlobalUnits();
//     QVector<ContourLine> contours = ContourSingleton::getInstance().contours();
//     int contourCnt = contours.size();
//     for(int i = 0; i < contourCnt; i++)
//     {
//        ContourLine contourLine = contours[i];
//        double contourValue = contourLine.value;  // 添加等值线值的文本
//        QColor fillColor = colorVec[i].color;

//        for (auto& polygon : contourLine.polygons) {
//            for(auto& pt : polygon) {
//               pt = Bing::latLongToPixelXY(pt.x(),pt.y(),level);
//            }

//            auto polygonItem = new QGraphicsPolygonItem(polygon);
//            polygonItem->setBrush(QBrush(fillColor));
//            polygonItem->setPen(QPen(fillColor, 2));
//            this->addToGroup(polygonItem);
//            polyVec_.append(polygonItem);

//            int index = qrand() % (polygon.size()-1);
//            QPointF pos = polygon[index];
//            if(i == (contourCnt - 1)) {
//               double sumX = 0, sumY = 0;
//               for (auto& pt : polygon) {
//                  sumX += pt.x();
//                  sumY += pt.y();
//               }
//               pos = QPointF(sumX / polygon.size(), sumY / polygon.size());
//            }

//            double distanceFeet = contourValue * 3.28084;
//            QString depthStr = isMetres ? QString::number(contourValue,'f',1) : QString::number(distanceFeet,'f',1);
//            QString integerPart = depthStr.section('.', 0, 0);
//            QString decimalPart = depthStr.section('.', 1, 1);
//            int baseFontSize = (level > 8) ? (level - 8) : level;
//            int bigFontSize = baseFontSize + 2;
//            QString displayTextHtml = QString("<span style='font-size:%1pt; font-weight:bold; color:black;'>%2</span>"
//                 "<span style='font-size:%3pt; font-weight:bold; color:black;'>.%4</span>"
//            ).arg(bigFontSize).arg(integerPart).arg(baseFontSize).arg(decimalPart);

//            auto contourValueText = new QGraphicsTextItem(depthStr);
//            contourValueText->setHtml(displayTextHtml);
//            contourValueText->setZValue(10);

//            contourValueText->setDefaultTextColor(Qt::black);
//            contourValueText->setCacheMode(QGraphicsItem::DeviceCoordinateCache);
//            contourValueText->setFlag(QGraphicsItem::ItemIgnoresTransformations, false);

//            QRectF textRect = contourValueText->boundingRect();
//            contourValueText->setTextWidth(textRect.width());
//            QPointF offset(-textRect.width()/2.0, -textRect.height()/2.0);
//            contourValueText->setPos(pos+offset);

//            QFont font;
//            font.setBold(true);
//            font.setStyleStrategy(QFont::PreferAntialias);
//            contourValueText->setFont(font);
//            this->addToGroup(contourValueText);
//            contourValueTextVec_.append(contourValueText);
//         }
//     }

// }


// void GraphItemGroup::addBoatContours_partial(int level, QPolygonF shorePolygon)
// {
//     if((!polyVec_.isEmpty()) || (!polyFillVec_.isEmpty()) || (!contourValueTextVec_.isEmpty())) {
//        return;
//     }
//     polyVec_.clear();
//     polyFillVec_.clear();
//     contourValueTextVec_.clear();

//     QVector<ContourLine> contours = ContourSingleton::getInstance().contours();
//     int contourCnt = contours.size();
//     auto colorVec = ContourSingleton::getInstance().getContourColorVec();
//     bool isMetres = ContourSingleton::getInstance().getGlobalUnits();

//     // 存储非闭合等值线用于后续填充
//     QVector<QVector<QPainterPath>> openContourPaths(contourCnt);

//     for(int i = 0; i < contourCnt; i++)
//     {
//        ContourLine contourLine = contours[i];
//        QColor fillColor = colorVec[i].color;

//        // 2. 处理非闭合等值线------------------------
//        QVector<QPainterPath>& currentOpenPaths = openContourPaths[i]; //引用的方式对openContourPaths赋值
//        for (auto& path : contourLine.pathLines)
//        {
//           QPainterPath convertedPath;
//           for(int i = 0; i < path.elementCount(); i++) {
//               QPainterPath::Element e = path.elementAt(i);
//               QPointF pixel = Bing::latLongToPixelXY(e.x,e.y,level);
//               if(i == 0) {
//                   convertedPath.moveTo(pixel);
//               } else {
//                   convertedPath.lineTo(pixel);
//               }
//           }

//           currentOpenPaths.append(convertedPath);  // 保存，用于非闭合等值线填充
//       }
//    }


//     // 3.填充非闭合等值线-----------------------------
//     for (int i = 0; i < contourCnt - 1; i++)
//     {
//         QVector<QPainterPath>& outerPaths = openContourPaths[i];
//         QVector<QPainterPath>& innerPaths = openContourPaths[i+1];
//         QColor fillColor = colorVec[i].color;
//         int contourVal = contours[i].value;

//         for (auto& outerPath : outerPaths)
//         {
//             if (outerPath.elementCount() < 5) {
//                 continue;
//             }

//             // 找到最近的内层线
//             int bestIndex = -1;
//             bool reverseInner = false;
//             qreal minDist = std::numeric_limits<qreal>::max();

//             QPointF outerEnd(outerPath.elementAt(outerPath.elementCount() - 1).x, outerPath.elementAt(outerPath.elementCount() - 1).y);
//             QPointF outerStart(outerPath.elementAt(0).x,outerPath.elementAt(0).y);

//             for (int k = 0; k < innerPaths.size(); ++k)
//             {
//                 if (innerPaths[k].elementCount() < 5) {
//                     continue;
//                 }

//                 QPointF innerStart(innerPaths[k].elementAt(0).x,innerPaths[k].elementAt(0).y);
//                 QPointF innerEnd(innerPaths[k].elementAt(innerPaths[k].elementCount() - 1).x,
//                                  innerPaths[k].elementAt(innerPaths[k].elementCount() - 1).y);

//                 // 两种配对方式：外层结尾-内层开头，或外层结尾-内层结尾
//                 qreal dist1 = QLineF(outerEnd, innerStart).length();
//                 qreal dist2 = QLineF(outerEnd, innerEnd).length();

//                 if (dist1 < minDist) { minDist = dist1; bestIndex = k; reverseInner = false; }
//                 if (dist2 < minDist) { minDist = dist2; bestIndex = k; reverseInner = true; }
//             }

//             if (bestIndex == -1) {
//                 continue;
//             }

//             // 取匹配的内层路径
//             QPainterPath innerPath = innerPaths[bestIndex];
//             if (reverseInner) {
//                 QPainterPath reversed;
//                 for (int p = innerPath.elementCount() - 1; p >= 0; --p)
//                 {
//                     auto e = innerPath.elementAt(p);
//                     if (p == innerPath.elementCount() - 1) {
//                        reversed.moveTo(e.x, e.y);
//                     }
//                     else {
//                        reversed.lineTo(e.x, e.y);
//                     }
//                 }
//                 innerPath = reversed;
//             }

//             // 构建闭合路径
//             QPainterPath fillPath;
//             fillPath.addPath(outerPath);

//             // 外层结尾 → 内层起点
//             QPointF innerStart(innerPath.elementAt(0).x,innerPath.elementAt(0).y);
//             fillPath.lineTo(innerStart);

//             // 添加内层路径
//             for (int p = 0; p < innerPath.elementCount(); ++p)
//             {
//                 auto e = innerPath.elementAt(p);
//                 if (p == 0) {
//                    fillPath.lineTo(e.x, e.y);
//                 } else {
//                     fillPath.lineTo(e.x, e.y);
//                 }
//             }

//             fillPath.lineTo(outerStart);   // 回到外层起点

//             auto fillItem = new QGraphicsPathItem(fillPath);
//             fillItem->setBrush(QBrush(fillColor));
//             fillItem->setPen(Qt::NoPen);
//             fillItem->setZValue(8);
//             this->addToGroup(fillItem);
//             polyFillVec_.append(fillItem);

//             double depth = contourVal / 100.0;
//             double distanceFeet = depth * 3.28084;
//             QString depthStr = isMetres ? QString::number(depth,'f',1): QString::number(distanceFeet,'f',1);
//             QString integerPart = depthStr.section('.', 0, 0);
//             QString decimalPart = depthStr.section('.', 1, 1);
//             int baseFontSize = (level > 8) ? (level - 8) : level;
//             int bigFontSize = baseFontSize + 2;
//             QString displayTextHtml = QString("<span style='font-size:%1pt; font-weight:bold; color:black;'>%2</span>"
//                                     "<span style='font-size:%3pt; font-weight:bold; color:black;'>.%4</span>"
//                                 ).arg(bigFontSize).arg(integerPart).arg(baseFontSize).arg(decimalPart);

//             auto contourValueText = new QGraphicsTextItem(depthStr);
//             contourValueText->setHtml(displayTextHtml);
//             contourValueText->setZValue(10);
//             contourValueText->setDefaultTextColor(Qt::black);
//             contourValueText->setCacheMode(QGraphicsItem::DeviceCoordinateCache);
//             contourValueText->setFlag(QGraphicsItem::ItemIgnoresTransformations, false);

//             // 取外路径中点作为标注位置
//             QPointF labelPos = outerPath.pointAtPercent(0.5);
//             QRectF textRect = contourValueText->boundingRect();
//             QPointF offset(-textRect.width()/2.0, -textRect.height()/2.0);
//             contourValueText->setPos(labelPos + offset);

//             QFont font;
//             font.setBold(true);
//             font.setStyleStrategy(QFont::PreferAntialias);
//             contourValueText->setFont(font);

//             this->addToGroup(contourValueText);
//             contourValueTextVec_.append(contourValueText);
//         }
//     }

// }


void GraphItemGroup::clearBoatContours()
{
    for (auto& item : polyVec_) {
      if (item) {
         this->removeFromGroup(item);
         delete item; item = nullptr;
      }
   }
   polyVec_.clear();


   for (auto& item : polyFillVec_) {
       if(item) {
           this->removeFromGroup(item);
           delete item; item = nullptr;
       }
   }
   polyFillVec_.clear();


   for(auto& item : contourValueTextVec_) {
      if(item) {
         this->removeFromGroup(item);
         delete item; item = nullptr;
      }
   }
   contourValueTextVec_.clear();

}


void GraphItemGroup::setDrawIsobaths(bool isIsobaths)
{
    for (auto& item : fillItemVec_) {
       if (item) {
          item->setVisible(isIsobaths);
       }
    }
}

void GraphItemGroup::setDrawImage(QString imageName,bool isImage)
{
    if (imageItemHash_.contains(imageName)) {
       QGraphicsPixmapItem* item = imageItemHash_[imageName];
       if(item){
          item->setVisible(isImage);
       }
     }
}

void GraphItemGroup::setKmlContourVisible(QString key,bool isContour)
{
   if (kmlItemHash_.contains(key)) {
      QVector<QGraphicsPathItem*> items = kmlItemHash_[key];
      for (QGraphicsPathItem *item : items) {
         if (item) {
            item->setVisible(isContour);
         }
      }
   }
}


bool GraphItemGroup::judgeImageItemExit()
{
    if(imageItemHash_.isEmpty()) {
        return false;
    }
    return true;
}

bool GraphItemGroup::judgeFillItemVecExit()
{
    if(fillItemVec_.isEmpty()) {
        return false;
    }
    return true;
}

bool GraphItemGroup::judgeKmlItemVecExist(QString key)
{
    if (kmlItemHash_.contains(key)) {
       return true;
    }
    return false;
}


void GraphItemGroup::clearAllContourItem()
{
    for(auto& item : imageItemHash_) {
       if(item) {
           this->removeFromGroup(item);
           delete item; item = nullptr;
       }
    }
    imageItemHash_.clear();

    for (auto& item : fillItemVec_) {
      if (item) {
         this->removeFromGroup(item);
         delete item; item = nullptr;
      }
   }
   fillItemVec_.clear();

   for (auto it = kmlItemHash_.begin(); it != kmlItemHash_.end(); ++it) {
       QVector<QGraphicsPathItem*>& itemVector = it.value();
       for (auto* item : itemVector) {
          if (item) {
             this->removeFromGroup(item);
             delete item;
             item = nullptr;
          }
        }
        itemVector.clear();
    }
    kmlItemHash_.clear();
}











/*-----------------------------------------------CustomRectItem-----------------------------------------------*/
void CustomRectItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QGraphicsRectItem::paint(painter, option, widget);

    painter->setRenderHint(QPainter::Antialiasing);

    QColor smallRectColor(255,0,0);
    smallRectColor = smallRectColor.lighter(150);
    painter->setBrush(smallRectColor);
    painter->setPen(Qt::NoPen);

    QRectF rect = this->rect();
    qreal offset = cornerSize_/2;

    painter->drawRect(rect.topLeft().x()-offset, rect.topLeft().y()-offset, cornerSize_, cornerSize_);
    painter->drawRect(rect.topRight().x()-offset, rect.topRight().y()-offset, cornerSize_, cornerSize_);
    painter->drawRect(rect.bottomLeft().x()-offset, rect.bottomLeft().y()-offset, cornerSize_, cornerSize_);
    painter->drawRect(rect.bottomRight().x()-offset, rect.bottomRight().y()-offset, cornerSize_, cornerSize_);

}

void CustomRectItem::setRect(const QRectF &rect)
{
    prepareGeometryChange();
    QGraphicsRectItem::setRect(rect);
}

QRectF CustomRectItem::boundingRect() const
{
    QRectF rect = QGraphicsRectItem::rect();
    qreal margin = 10;
    return rect.adjusted(-margin, -margin, margin, margin);
}
