#ifndef QWCHARTVIEW_H
#define QWCHARTVIEW_H

#include <QtCharts>
#include <QChartView>

QT_CHARTS_USE_NAMESPACE

class QWChartView : public QChartView
{
    Q_OBJECT

public:
    QWChartView(QWidget *parent = 0);
    ~QWChartView();

protected:
    void mouseMoveEvent(QMouseEvent *event);

signals:
    void sigMouseMovePoint(QPoint point);
};

#endif // QWCHARTVIEW_H
