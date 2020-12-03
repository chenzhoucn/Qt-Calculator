#include "historydialog.h"
#include "ui_historydialog.h"

HistoryDialog::HistoryDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HistoryDialog)
{
    ui->setupUi(this);
    this->myScrollArea=ui->scrollArea;
}

HistoryDialog::~HistoryDialog()
{
    delete ui;
}
