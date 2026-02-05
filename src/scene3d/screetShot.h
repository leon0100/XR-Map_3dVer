#ifndef SCREETSHOT_H
#define SCREETSHOT_H

#include <QObject>
#include <QPoint>

#include <QGuiApplication>
#include <QRectF>
// #include <QWidget>
#include <QVector3D>



enum class ResizeMode { None, Move, Top, Bottom, Left, Right, TopLeft, TopRight, BottomLeft, BottomRight };

class ScreetShot : public QObject
{
    Q_OBJECT
    // QML_ELEMENT
public:
    explicit ScreetShot(QObject *parent = nullptr);






signals:
    void selectionRectChanged();
    void selectionRectVisibleChanged();
    // void isScreenCaptureModeChanged(bool changed);

public:
    void setCurrentMapLevel(int mapLevel);

    // 添加矩形属性
    Q_PROPERTY(QRectF selectionRect READ selectionRect WRITE setSelectionRect NOTIFY selectionRectChanged)
    Q_PROPERTY(bool isSelectionRectVisible READ isSelectionRectVisible WRITE setSelectionRectVisible NOTIFY selectionRectVisibleChanged)

    QRectF selectionRect() const { return shotRect_; }
    void setSelectionRect(const QRectF& rect) { shotRect_ = rect; emit selectionRectChanged(); }

    bool isSelectionRectVisible() const { return isSelectionRectVisible_; }
    void setSelectionRectVisible(bool visible) { isSelectionRectVisible_ = visible; emit selectionRectVisibleChanged(); }

    void judgeResizeMode(const QRectF rect,const QPoint pos);
    void resizeMode(QRectF& rect,const QPoint pos);




public:
    QRectF m_selectionRect_;
    bool m_isSelectionRectVisible_ = false;

    bool isScreenMode_ = false;     // 截图模式
    QVector<QVector3D> selectedIsobaths_;
    void selectTilesInBox();
    bool m_moveView = false;         // 鼠标移动地图

    bool showHistoryScreen_ = false; // 显示历史截图
    bool firstScreenDown_ = false;
    QPointF startPos_,endPos_;       // 矩形场景坐标
    bool isResizing_ = false,isDragging_ = false;
    QRectF shotRect_;
    ResizeMode resizeMode_;

    bool isSelectionRectVisible_ = false;

    int currentMapLevel_;

signals:
};

#endif // SCREETSHOT_H
