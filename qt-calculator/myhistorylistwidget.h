#ifndef MYHISTORYLISTWIDGET_H
#define MYHISTORYLISTWIDGET_H
#include <QListWidget>

namespace Ui {
class MyHistoryListWidget;
}

class MyHistoryListWidget : public QListWidget
{
    Q_OBJECT

public:
    explicit MyHistoryListWidget(QWidget *parent = nullptr);

    ~MyHistoryListWidget();


};

#endif // MYHISROTYLISTWIDGET_H
