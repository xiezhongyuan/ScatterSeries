#include "TDMDetailDataForm.h"
#include "ui_TDMDetailDataForm.h"

TDMDetailDataForm::TDMDetailDataForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TDMDetailDataForm)
{
    ui->setupUi(this);
}

TDMDetailDataForm::~TDMDetailDataForm()
{
    delete ui;
}
