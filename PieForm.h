#ifndef PIEFORM_H
#define PIEFORM_H

#include <QWidget>
#include <QtCharts>

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class PieForm;
}

class PieForm : public QWidget
{
    Q_OBJECT

public:
    explicit PieForm(QWidget *parent = 0);
    ~PieForm();

    void setTitle(const QString &title);

protected:
    void showEvent(QShowEvent *event);
    void resizeEvent(QResizeEvent *event);

private:
    void initPieChart();

    void bulidPieChart(int percent);

private:
    Ui::PieForm *ui;
    QLabel *m_centerLabel;
    QLabel *m_bottomLabel;
};

#endif // PIEFORM_H
