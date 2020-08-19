#pragma execution_character_set("utf-8")
#include "PieForm.h"
#include "ui_PieForm.h"

PieForm::PieForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PieForm)
{
    ui->setupUi(this);

    initPieChart();

    m_centerLabel = new QLabel(ui->chartView);
    m_centerLabel->setStyleSheet(QString("background:transparent;font-family:\"微软雅黑\";"
                                         "font-size:20px; color:#1564FF; font-weight:900;"));
    m_centerLabel->hide();

    m_bottomLabel = new QLabel(ui->chartView);
    m_bottomLabel->setStyleSheet(QString("background:transparent;font-family:\"Microsoft YaHei\";"
                                         "font-size:14px; color:#333333;"));

    bulidPieChart(75);
    setTitle("小组平均续报率");
}

PieForm::~PieForm()
{
    delete ui;
}

void PieForm::setTitle(const QString &title)
{
    m_bottomLabel->setText(title);
    resizeEvent(NULL);
}

void PieForm::showEvent(QShowEvent *event)
{
    Q_UNUSED(event)

    resizeEvent(NULL);

}

void PieForm::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event)

    m_centerLabel->move((ui->chartView->width()-m_centerLabel->width())/2,
                        (ui->chartView->height()-m_centerLabel->height())/2);

    m_bottomLabel->move((ui->chartView->width()-m_bottomLabel->width())/2,
                        ui->chartView->height() - m_bottomLabel->height() - 18);
}

void PieForm::initPieChart()
{
    QChart *chart = new QChart();

    chart->setBackgroundVisible(false);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);
}

void PieForm::bulidPieChart(int percent)
{
    m_centerLabel->setText(QString("%1%").arg(percent));
    QChart *chart = ui->chartView->chart();
    chart->removeAllSeries();

    ui->chartView->setRenderHint(QPainter::NonCosmeticDefaultPen);
    QPieSeries *series = new QPieSeries();//创建饼图序列
    series->setHoleSize(0.66);//饼图中间空心的大小
    series->setPieSize(0.8);//饼图的大小

    QPieSlice *slice0 = new QPieSlice();
    slice0->setValue(percent);
    slice0->setColor(QColor(21, 100, 255));

    QPieSlice *slice1 = new QPieSlice();
    slice1->setValue(100 - percent);
    slice1->setColor(QColor(231, 238, 251));

    series->append(slice0);
    series->append(slice1);

    chart->addSeries(series);
    chart->legend()->setVisible(false);

    m_centerLabel->show();
    resizeEvent(NULL);
}
