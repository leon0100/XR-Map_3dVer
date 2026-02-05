#include "screetShot.h"




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
    }
    else {
        resizeMode_ = ResizeMode::None;
        // setCursor(Qt::ArrowCursor);
        QGuiApplication::setOverrideCursor(Qt::ArrowCursor);
    }

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
