#ifndef AUTOLABEL_H
#define AUTOLABEL_H
#include <QLabel>
#include <QWidget>
#include <Qt>
class autoLabel : public QLabel
{
    Q_OBJECT

public:
    explicit autoLabel(QWidget *parent = 0,Qt::WindowFlags f=Qt::WindowFlags());
    ~autoLabel();



signals:
    void clicked();
    void textChanged();
private slots:
    void autoAppend();

protected:
    void mouseReleaseEvent(QMouseEvent *ev);


};
#endif // AUTOLABEL_H
