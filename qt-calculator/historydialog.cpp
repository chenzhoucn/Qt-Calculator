#include "historydialog.h"
#include "ui_historydialog.h"

HistoryDialog* HistoryDialog::myQDialog = nullptr;
HistoryDialog::HistoryDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HistoryDialog)
{
    ui->setupUi(this);
    this->myListWidget=ui->listWidget;
}

HistoryDialog::~HistoryDialog()
{
    delete ui;
}
