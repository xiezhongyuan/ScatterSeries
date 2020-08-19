#include "QWChartView.h"

QWChartView::QWChartView(QWidget *parent)
    :QChartView(parent)
{
    this->setMouseTracking(true);
}

QWChartView::~QWChartView()
{

}

void QWChartView::mouseMoveEvent(QMouseEvent *event)
{
    QPoint point = event->pos();

//    emit sigMouseMovePoint(point);

    QChartView::mouseMoveEvent(event);
}
