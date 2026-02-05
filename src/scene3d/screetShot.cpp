#include "screetShot.h"
#include <QCursor>




ScreetShot::ScreetShot(QObject *parent) : QObject{parent}
{

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
        // setCursor(Qt::SizeFDiagCursor);
        QGuiApplication::setOverrideCursor(Qt::SizeFDiagCursor);

    }
    else if (onRight && onTop) {
        resizeMode_ = ResizeMode::TopRight;
        // setCursor(Qt::SizeBDiagCursor);
        QGuiApplication::setOverrideCursor(Qt::SizeBDiagCursor);
    }
    else if (onLeft && onBottom) {
        resizeMode_ = ResizeMode::BottomLeft;
        // setCursor(Qt::SizeBDiagCursor);
        QGuiApplication::setOverrideCursor(Qt::SizeBDiagCursor);
    }
    else if (onRight && onBottom) {
        resizeMode_ = ResizeMode::BottomRight;
        // setCursor(Qt::SizeFDiagCursor);
        QGuiApplication::setOverrideCursor(Qt::SizeFDiagCursor);

    }
    else if (onLeft) {
        resizeMode_ = ResizeMode::Left;
        // setCursor(Qt::SizeHorCursor);
        QGuiApplication::setOverrideCursor(Qt::SizeHorCursor);
    }
    else if (onRight) {
        resizeMode_ = ResizeMode::Right;
        // setCursor(Qt::SizeHorCursor);
        QGuiApplication::setOverrideCursor(Qt::SizeHorCursor);
    }
    else if (onTop) {
        resizeMode_ = ResizeMode::Top;
        // setCursor(Qt::SizeVerCursor);
        QGuiApplication::setOverrideCursor(Qt::SizeVerCursor);
    }
    else if (onBottom) {
        resizeMode_ = ResizeMode::Bottom;
        // setCursor(Qt::SizeVerCursor);
        QGuiApplication::setOverrideCursor(Qt::SizeVerCursor);
    }
    else if(rect.contains(pos)){
        resizeMode_ = ResizeMode::Move;
        // setCursor(Qt::SizeAllCursor);
        QGuiApplication::setOverrideCursor(Qt::SizeAllCursor);
        endPos_ = pos;
    }
    else {
        resizeMode_ = ResizeMode::None;
        // setCursor(Qt::ArrowCursor);
        QGuiApplication::setOverrideCursor(Qt::ArrowCursor);
    }

}


void ScreetShot::resizeMode(QRectF& rect,const QPoint pos)
{
    QPoint delta;

    switch (resizeMode_)
    {
        case ResizeMode::Top:
            rect.setTop(pos.y());
            break;

        case ResizeMode::Bottom:
            rect.setBottom(pos.y());
            break;

        case ResizeMode::Left:
            rect.setLeft(pos.x());
            break;

        case ResizeMode::Right:
            rect.setRight(pos.x());
            break;

        case ResizeMode::TopLeft:
            rect.setTop(pos.y());
            rect.setLeft(pos.x());
            break;

        case ResizeMode::TopRight:
            rect.setTop(pos.y());
            rect.setRight(pos.x());
            break;

        case ResizeMode::BottomLeft:
            rect.setBottom(pos.y());
            rect.setLeft(pos.x());
            break;

        case ResizeMode::BottomRight:
            rect.setBottom(pos.y());
            rect.setRight(pos.x());
            break;

        case ResizeMode::Move:
            delta = pos - endPos_.toPoint();
            endPos_ = pos;
            rect.translate(delta);
            break;

        default:
            break;
    }

}
