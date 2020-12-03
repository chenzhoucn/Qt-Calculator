#ifndef HISTORYDIALOG_H
#define HISTORYDIALOG_H

#include <QDialog>
#include<historyscrollarea.h>

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
    QWidget *myScrollAreaContents;
    HistoryScrollArea *myScrollArea;


};

#endif // HISTORYDIALOG_H
