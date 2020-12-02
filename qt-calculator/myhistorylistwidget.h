#ifndef MYHISTORYLISTWIDGET_H
#define MYHISTORYLISTWIDGET_H
#include <QListWidget>
#include<QListWidgetItem>

class MyHistoryListWidget : public QListWidget
{
    Q_OBJECT

public:
    explicit MyHistoryListWidget(QWidget *parent = nullptr);

    ~MyHistoryListWidget();


};

#endif // MYHISROTYLISTWIDGET_H
