#ifndef TDMTRENDCHARTFORM_H
#define TDMTRENDCHARTFORM_H

#include <QWidget>
#include <QtCharts>

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class TDMTrendChartForm;
}

class TDMTrendChartForm : public QWidget
{
    Q_OBJECT

public:
    explicit TDMTrendChartForm(QWidget *parent = 0);
    ~TDMTrendChartForm();

private:
    /**
     * @brief initChart             初始化图表
     */
    void initChart();

    /**
     * @brief bulidChart
     */
    void bulidChart();

    /**
     * @brief prepareData
     */
    void prepareData();

private slots:
    void slotPointHoverd(const QPointF &point, bool state);

private:
    Ui::TDMTrendChartForm *ui;
    QLabel *m_valueLabel;
};

#endif // TDMTRENDCHARTFORM_H
