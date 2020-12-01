#include "autolabel.h"
#include "QDebug"
autoLabel::autoLabel(QWidget *parent,Qt::WindowFlags f):QLabel(parent)
{

}

autoLabel::~autoLabel()
{

}
void autoLabel::autoAppend(){ //槽函数 用于发射文本被改变的信号
   emit textChanged();
}
void autoLabel::mouseReleaseEvent(QMouseEvent *ev)
{
    emit clicked();
}
