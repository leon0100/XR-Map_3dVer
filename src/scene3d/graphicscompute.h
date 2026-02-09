#ifndef GRAPHICSCOMPUTE_H
#define GRAPHICSCOMPUTE_H

#include <QPolygonF>
#include <QPainterPath>
#include <QGraphicsRectItem>
#include <QPainterPath>
#include <QPen>
#include <QPainter>
#include <math.h>
#include <QtMath>






#define  GOOGlE_MAP_COM           "http://mt2.google.com/vt/lyrs=y&hl=en&x=%1&y=%2&z=%3"
#define  GOOGlE_MAP_CN            "http://mt2.google.com/vt/lyrs=y&hl=zh-CN&x=%1&y=%2&z=%3"

#define  AMAP_MAP_CN              "http://wprd04.is.autonavi.com/appmaptile?style=6&x=%1&y=%2&z=%3"
#define  AMAP_MAP_CN_PLACENAME    "http://wprd04.is.autonavi.com/appmaptile?style=8&x=%1&y=%2&z=%3"
#define  OPENSTREET_MAP_CN        "https://a.tile.openstreetmap.org/%1/%2/%3.png"
#define  GEOVISEARTH_MAP_CN        "https://tiles1.geovisearth.com/base/v1/img/%1/%2/%3?format=webp&tmsIds=w&token=%4"
#define  API_KEY_GEOVIS  "09515d5bc175c18a6a097754db864b9310673643bb305d4e2a95fc8cab2ae8c4"


enum class ResizeMode { None, Move, Top, Bottom, Left, Right, TopLeft, TopRight, BottomLeft, BottomRight };

#define _180_PI (57.2957795131f)
#define _PI_180 (0.01745329252f)
#define RE 6371004
#define g_EarthRadius 6378137   // 赤道半径
#define POINT_REPEATITIVE 361.0f


#ifndef PI
#define PI (3.1415926535898)
#endif


#define  MAP_TIlE_SIZE   (256)




namespace Bing {
qreal clip(qreal n, qreal min, qreal max);
qreal clipLon(qreal lon);   // 裁剪经度范围
qreal clipLat(qreal lat);   // 裁剪纬度范围

uint mapSize(int level);                        // 根据地图级别计算世界地图总宽高(以像素为单位)
qreal groundResolution(qreal lat, int level);   // 计算地面分辨率
qreal mapScale(qreal lat, int level, int screenDpi);   // 计算比例尺

QPoint latLongToPixelXY(qreal lon, qreal lat, int level);               // 经纬度转像素 XY坐标
void pixelXYToLatLong(QPoint pos, int level, qreal& lon, qreal& lat);   // 像素坐标转WGS-84墨卡托坐标
void pixelXYToLatLong(QPointF pos, int level, qreal& lon, qreal& lat);

QPoint pixelXYToTileXY(QPoint pos);    // 像素坐标转瓦片编号
QPoint tileXYToPixelXY(QPoint tile);   // 瓦片编号转像素坐标
QPointF tileXYToPixelXY(QPointF tile);   // 瓦片编号转像素坐标

QPoint latLongToTileXY(qreal lon, qreal lat, int level);   // 经纬度转瓦片编号
QPointF tileXYToLatLong(QPoint tile, int level);           // 瓦片编号转经纬度
QPointF tileXYToLatLong(QPointF tile, int level);
}   // namespace Bing


struct ImageInfo
{
    int x = 0;
    int y = 0;
    int z = 0;
    QString url;       // 下载瓦片的地址
    QString format;    // 图片格式
    QPixmap img;       // 保存下载后的瓦片
    short count = 0;   // 失败下载次数，初始为0，下载失败一次+1
    bool isValidTile = false;
};


typedef enum
{
    Global_Contours = 0,
    Partial_Contours,
}ContoursType;

// 生成等值线 各个polygonF中存储的是经纬度,x()代表经度longitude，y()地代表纬度latitude
struct ContourLine {
    double value;
    QVector<QPolygonF> polygons;
    QVector<QPolygonF> lines;     // 开放折线(暂时弃用）
    QVector<QPainterPath> pathLines;   // 开放折线
};

typedef struct
{
   double startLon;
   double startLati;
   double endLon;
   double endLati;
   QString distanceStr;
}MeasureStru;

typedef struct
{
    QString keyStr;
    bool isChecked;
}KmlItemCheckedStru;


typedef struct _typGpsCooDegree_
{
    double latitude;
    double longitude;
}typGpsCooDegree;
typedef struct
{
   typGpsCooDegree leftTopCoor;
   typGpsCooDegree rightBottom;
   QString label;
}HistoryScreenRec;

typedef struct
{
   QGraphicsRectItem* rect;
   QGraphicsTextItem* text;
}HistoryGraphicsItem;


class ColoredPathItem : public QGraphicsPathItem
{
public:
    ColoredPathItem(const QVector<QPoint>& points, const QVector<QColor>& colors): points_(points), colors_(colors)
    {
        QPainterPath path;
        if (!points_.isEmpty()) {
            path.moveTo(points_.first());
            for (int i = 1; i < points_.size(); ++i) {
                path.lineTo(points_[i]);
            }
        }
        setPath(path);
    }

void updateColors(const QVector<QColor>& newColors)
{
    if (newColors.size() != points_.size()) {
        return;
    }
    colors_ = newColors;
    update();
}

protected:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*) override
    {
        QPen originalPen = painter->pen();
        for (int i = 0; i < (points_.size()-1); ++i) {
            QPen coloredPen(colors_[i]);
            coloredPen.setWidth(2);
            painter->setPen(coloredPen);
            painter->drawLine(points_[i], points_[i+1]);
        }
        painter->setPen(originalPen);
    }

private:
    QVector<QPoint> points_;
    QVector<QColor> colors_;
};



/*-------------------------------------------------GraphItemGroup--------------------------------------------------*/
class GraphItemGroup : public QGraphicsItemGroup
{
public:
    explicit GraphItemGroup(QGraphicsItem* parent = nullptr);
    ~GraphItemGroup() override;

    void addImage(const ImageInfo& info);

    void showHistoryScreen(bool isShow,const QVector<HistoryScreenRec>& historyScreenVec,int level);

    // void addContourFill(const KmlFillStruct& kmlFillStruct,int level);
    // void addTrackLine(const QVector<typGpsCooDegree>& trackPoints,KmlStyleStruct style,int level,QString key);
    // void addKmzImage(int level);

    // void addBoatTrackLine(int level);
    void updateBoatTrackColors();
    void clearBoatTrackRealTime();
    void showBoatTrackLine(bool isShow);
    void clearBoatTrackLine();
    void addBoatContours_global(int level);
    void addBoatContours_partial(int level,QPolygonF shorePolygon);
    void clearBoatContours();

    void setDrawIsobaths(bool isIsobaths);
    void setDrawImage(QString imageName,bool isImage);

    void setKmlContourVisible(QString key,bool isContour);

    bool judgeImageItemExit();
    bool isKmlTypeExist(QString key);

    bool judgeFillItemVecExit();

    bool judgeKmlItemVecExist(QString key);

    void clearAllContourItem();


private:
    QHash<quint64, QGraphicsPixmapItem*> m_itemsImg;
    QHash<quint64,QGraphicsSimpleTextItem*> m_itemsText;

    QVector<QGraphicsPathItem*> fillItemVec_;
    QHash<QString,QGraphicsPixmapItem*> imageItemHash_;
    QHash<QString,QVector<QGraphicsPathItem*>> kmlItemHash_;

    QVector<ColoredPathItem*> boatTrackPathVec_;
    QVector<QGraphicsLineItem*> boatTrackLineVec_;

    QVector<QGraphicsPolygonItem*> polyVec_;
    QVector<QGraphicsPathItem*> polyFillVec_;
    QVector<QGraphicsTextItem*> contourValueTextVec_;

    QVector<HistoryGraphicsItem*> historyScreenVec_;


    QImage colorBarImage;
    QPixmap *colorBarpixmap;

    int realTimeIdx_ = 0;

};






/*------------------------------------------------------CustomRectItem------------------------------------------------*/
class CustomRectItem : public QGraphicsRectItem
{
    // 使用基类的构造函数，保持一致性
    using QGraphicsRectItem::QGraphicsRectItem;

public:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

    void setRect(const QRectF &rect);

    QRectF boundingRect() const override;

private:
    qreal cornerSize_= 8;

};




#endif // GRAPHICSCOMPUTE_H
