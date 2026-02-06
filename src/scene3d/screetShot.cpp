#include "screetShot.h"




ScreetShot::ScreetShot(QObject *parent) : QObject{parent}
{

}



QRectF ScreetShot::getSelectionRect() const
{
    return shotRect_;
}
void ScreetShot::setSelectionRect(const QRectF& rect)
{
    shotRect_ = rect;

    double topWidth = getDistance_Haversine(topLeftLong_, topLeftLati_, topRightLong_, topRightLati_);
    double rightHeight = getDistance_Haversine(topRightLong_, topRightLati_, bottomRightLong_, bottomRightLati_);

    QString topWidthStr = getLengthChEn(topWidth);
    QString rightHeightStr = getLengthChEn(rightHeight);

    setScreetWidth(topWidthStr);
    setScreetHeight(rightHeightStr);

    setScreetToolBar(false);

    emit selectionRectChanged();
}

bool ScreetShot::isSelectionRectVisible() const
{
    return isSelectionRectVisible_;
}
void ScreetShot::setSelectionRectVisible(bool visible)
{
    isSelectionRectVisible_ = visible;
    emit selectionRectVisibleChanged();
}

QString ScreetShot::getScreetWidth() const
{
    return screetWidth_;
}
void ScreetShot::setScreetWidth(const QString screetWidth)
{
    screetWidth_ = screetWidth;
    emit screetWidthChanged();
}
QString ScreetShot::getScreetHeight() const
{
    return screetHeight_;
}
void ScreetShot::setScreetHeight(const QString screetHeight)
{
    screetHeight_ = screetHeight;
    emit screetHeightChanged();
}

bool ScreetShot::getScreetToolBar() const
{
    return screetToolBarShow_;
}
void ScreetShot::setScreetToolBar(bool screetToolBarShow)
{
    screetToolBarShow_ = screetToolBarShow;
    emit screetToolBarShowChanged();
}


void ScreetShot::judgeResizeMode(const QRectF rect,const QPoint pos)
{
    const qreal margin = 15.0;
    bool onLeft   =  qAbs(pos.x() - rect.left())   <= margin;
    bool onRight  =  qAbs(pos.x() - rect.right())  <= margin;
    bool onTop    =  qAbs(pos.y() - rect.top())    <= margin;
    bool onBottom =  qAbs(pos.y() - rect.bottom()) <= margin;

    if (onLeft && onTop) {
        resizeMode_ = ResizeMode::TopLeft;
        QGuiApplication::setOverrideCursor(Qt::SizeFDiagCursor);
    }
    else if (onRight && onTop) {
        resizeMode_ = ResizeMode::TopRight;
        QGuiApplication::setOverrideCursor(Qt::SizeBDiagCursor);
    }
    else if (onLeft && onBottom) {
        resizeMode_ = ResizeMode::BottomLeft;
        QGuiApplication::setOverrideCursor(Qt::SizeBDiagCursor);
    }
    else if (onRight && onBottom) {
        resizeMode_ = ResizeMode::BottomRight;
        QGuiApplication::setOverrideCursor(Qt::SizeFDiagCursor);

    }
    else if (onLeft) {
        resizeMode_ = ResizeMode::Left;
        QGuiApplication::setOverrideCursor(Qt::SizeHorCursor);
    }
    else if (onRight) {
        resizeMode_ = ResizeMode::Right;
        QGuiApplication::setOverrideCursor(Qt::SizeHorCursor);
    }
    else if (onTop) {
        resizeMode_ = ResizeMode::Top;
        QGuiApplication::setOverrideCursor(Qt::SizeVerCursor);
    }
    else if (onBottom) {
        resizeMode_ = ResizeMode::Bottom;
        QGuiApplication::setOverrideCursor(Qt::SizeVerCursor);
    }
    else if(rect.contains(pos)){
        resizeMode_ = ResizeMode::Move;
        QGuiApplication::setOverrideCursor(Qt::SizeAllCursor);
    }
    else {
        resizeMode_ = ResizeMode::None;
        QGuiApplication::setOverrideCursor(Qt::ArrowCursor);
    }

}

void ScreetShot::setToArrowCursor()
{
    QGuiApplication::setOverrideCursor(Qt::ArrowCursor);
}

void ScreetShot::setCancelShot()
{
    qDebug() << "ScreetShot::setCancelShot().........";
    isScreenMode_ = false;
    screetToolBarShow_ = false;
    setSelectionRectVisible(false);
    emit cancelScreetShot();

}

void ScreetShot::saveScreetShot()
{

}

void ScreetShot::resizeMode(QRectF& rect, const QPoint pos)
{
    QPointF delta;

    switch (resizeMode_) {
    case ResizeMode::Top: {
        qreal newTop = pos.y();
        if (newTop > rect.bottom()) {
            rect.setTop(rect.bottom());
            rect.setBottom(newTop);
        } else {
            rect.setTop(newTop);
        }
        break;
    }
    case ResizeMode::Bottom: {
        qreal newBottom = pos.y();
        if (newBottom < rect.top()) {
            rect.setBottom(rect.bottom());
            rect.setTop(newBottom);
        } else {
            rect.setBottom(newBottom);
        }
        break;
    }
    case ResizeMode::Left: {
        qreal newLeft = pos.x();
        if (newLeft > rect.right()) {
            rect.setLeft(rect.left());
            rect.setRight(newLeft);
        } else {
            rect.setLeft(newLeft);
        }
        break;
    }
    case ResizeMode::Right: {
        qreal newRight = pos.x();
        if (newRight < rect.left()) {
            rect.setRight(rect.right());
            rect.setLeft(newRight);
        } else {
            rect.setRight(newRight);
        }
        break;
    }
    case ResizeMode::TopLeft: {
        qreal newTop = pos.y();
        qreal newLeft = pos.x();

        if (newTop > rect.bottom()) {
            qreal oldTop = rect.top();
            rect.setTop(newTop);
            rect.setBottom(oldTop);
        } else {
            rect.setTop(newTop);
        }

        if (newLeft > rect.right()) {
            qreal oldLeft = rect.left();
            rect.setLeft(newLeft);
            rect.setRight(oldLeft);
        } else {
            rect.setLeft(newLeft);
        }
        break;
    }
    case ResizeMode::TopRight: {
        qreal newTop = pos.y();
        qreal newRight = pos.x();

        if (newTop > rect.bottom()) {
            qreal oldTop = rect.top();
            rect.setTop(newTop);
            rect.setBottom(oldTop);
        } else {
            rect.setTop(newTop);
        }

        if (newRight < rect.left()) {
            qreal oldRight = rect.right();
            rect.setRight(newRight);
            rect.setLeft(oldRight);
        } else {
            rect.setRight(newRight);
        }
        break;
    }
    case ResizeMode::BottomLeft: {
        qreal newBottom = pos.y();
        qreal newLeft = pos.x();

        if (newBottom < rect.top()) {
            qreal oldBottom = rect.bottom();
            rect.setBottom(newBottom);
            rect.setTop(oldBottom);
        } else {
            rect.setBottom(newBottom);
        }

        if (newLeft > rect.right()) {
            qreal oldLeft = rect.left();
            rect.setLeft(newLeft);
            rect.setRight(oldLeft);
        } else {
            rect.setLeft(newLeft);
        }
        break;
    }
    case ResizeMode::BottomRight: {
        qreal newBottom = pos.y();
        qreal newRight = pos.x();

        if (newBottom < rect.top()) {
            qreal oldBottom = rect.bottom();
            rect.setBottom(newBottom);
            rect.setTop(oldBottom);
        } else {
            rect.setBottom(newBottom);
        }

        if (newRight < rect.left()) {
            qreal oldRight = rect.right();
            rect.setRight(newRight);
            rect.setLeft(oldRight);
        } else {
            rect.setRight(newRight);
        }
        break;
    }
    case ResizeMode::Move: {
        delta = QPointF(pos) - endPos_;
        endPos_ = QPointF(pos);
        rect.translate(delta);
        break;
    }
    default:
        break;
    }
}


double ScreetShot::getDistance_Haversine(double current_longi, double current_lati, double goal_longi, double goal_lati)
{
    double dLat = (goal_lati - current_lati) * _PI_180;
    double dLon = (goal_longi - current_longi) * _PI_180;
    double a = pow(sin(dLat/2), 2) + cos(current_lati*_PI_180) * cos(goal_lati*_PI_180) * pow(sin(dLon/2), 2);
    double c = 2 * atan2(sqrt(a), sqrt(1-a));
    return RE * c;
}

QString ScreetShot::getLengthChEn(double distance,int decimalPlaces)
{
    QString distanceStr;
    // bool isMetres = ContourSingleton::getInstance().getGlobalUnits();
    bool isMetres = true;
    if (distance > 1000) {
        double distanceKm = distance / 1000.0;
        distanceStr = isMetres ? (QString::number(distanceKm,'f',decimalPlaces)+" km") :
                          (QString::number(distanceKm*0.621371,'f',decimalPlaces)+" mi");
    } else {
        double distanceFeet = distance * 3.28084;
        distanceStr = isMetres ? (QString::number(distance,'f',0)+" m") : (QString::number(distanceFeet,'f',0)+" ft");
    }

    return distanceStr;
}

