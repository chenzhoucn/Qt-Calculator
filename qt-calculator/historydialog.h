#ifndef HISTORYDIALOG_H
#define HISTORYDIALOG_H

#include <QDialog>
#include<myhistorylistwidget.h>

namespace Ui {
class HistoryDialog;
}

class HistoryDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HistoryDialog(QWidget *parent = nullptr);
    ~HistoryDialog();
    Ui::HistoryDialog *ui;
    MyHistoryListWidget *myListWidget;
};

#endif // HISTORYDIALOG_H
