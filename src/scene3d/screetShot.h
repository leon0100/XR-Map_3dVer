#ifndef SCREETSHOT_H
#define SCREETSHOT_H

#include <QObject>
#include <QPoint>

#include <QGuiApplication>
#include <QRectF>
#include <QVector3D>
#include <QCursor>


enum class ResizeMode { None, Move, Top, Bottom, Left, Right, TopLeft, TopRight, BottomLeft, BottomRight };

#define _180_PI (57.2957795131f)
#define _PI_180 (0.01745329252f)
#define RE 6371004
#define g_EarthRadius 6378137   // 赤道半径
#define POINT_REPEATITIVE 361.0f


#ifndef PI
#define PI (3.1415926535898)
#endif

class ScreetShot : public QObject
{
    Q_OBJECT
public:
    explicit ScreetShot(QObject *parent = nullptr);

    // 添加矩形属性
    Q_PROPERTY(QRectF selectionRect READ getSelectionRect WRITE setSelectionRect NOTIFY selectionRectChanged)
    Q_PROPERTY(bool isSelectionRectVisible READ isSelectionRectVisible WRITE setSelectionRectVisible NOTIFY selectionRectVisibleChanged)
    Q_PROPERTY(QString screetWidth  READ getScreetWidth   WRITE setScreetWidth NOTIFY screetWidthChanged)
    Q_PROPERTY(QString screetHeight READ getScreetHeight  WRITE  setScreetHeight NOTIFY screetHeightChanged)
    Q_PROPERTY(bool screetToolBar   READ getScreetToolBar WRITE setScreetToolBar NOTIFY screetToolBarShowChanged)

    QRectF getSelectionRect() const;
    void setSelectionRect(const QRectF& rect);

    bool isSelectionRectVisible() const;
    void setSelectionRectVisible(bool visible);

    QString getScreetWidth() const;
    void setScreetWidth(const QString screetWidth);
    QString getScreetHeight() const;
    void setScreetHeight(const QString screetHeight);

    bool getScreetToolBar() const;
    void setScreetToolBar(bool screetToolBarShow);


public:
    QRectF shotRect_;
    bool isSelectionRectVisible_ = false;
    QString screetWidth_, screetHeight_;


signals:
    void selectionRectChanged();
    void selectionRectVisibleChanged();
    void screetWidthChanged();
    void screetHeightChanged();
    void screetToolBarShowChanged();
    void cancelScreetShot();


public:
    void setCurrentMapLevel(int mapLevel);
    void judgeResizeMode(const QRectF rect,const QPoint pos);
    void resizeMode(QRectF& rect,const QPoint pos);


    Q_INVOKABLE void setToArrowCursor();
    Q_INVOKABLE void setCancelShot();
    Q_INVOKABLE void saveScreetShot();



private:
    double getDistance_Haversine(double current_longi, double current_lati, double goal_longi, double goal_lati);
    QString getLengthChEn(double distance,int decimalPlaces = 2);


public:
    bool isScreenMode_ = false;      // 截图模式
    bool m_moveView = false;         // 鼠标移动地图

    bool showHistoryScreen_ = false; // 显示历史截图

    bool firstScreenDown_ = false;
    QPointF startPos_,endPos_;       // 矩形场景坐标

    ResizeMode resizeMode_;

    int currentMapLevel_;
    bool dragging_ = false;

    double topLeftLong_, topLeftLati_, topRightLong_, topRightLati_, bottomRightLong_, bottomRightLati_;
    bool screetToolBarShow_ = false;


};

#endif // SCREETSHOT_H
