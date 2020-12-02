#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qDebug"
#include"QElapsedTimer"
#include"QTime"

#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->connectSlot();
}

MainWindow::~MainWindow()
{
    //也许 我们应该faded;;
    //    QTime dieTime = QTime::currentTime().addMSecs(100);
    //    while( QTime::currentTime() < dieTime )
    //    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);

    //    for(int i=0;i<1;i+=0.001){
    //        this->setWindowOpacity(i);
    //    }
    delete ui;
}
//TODO 完善基本功能


//绑定信号与槽 利用自定义槽

void MainWindow::connectSlot(){
    connect(ui->btnAdd,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend()));

    connect(ui->btnSub,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend()));
    connect(ui->btnMul,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnDiv,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnNUM0,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnNUM1,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnNUM2,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnNUM3,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnNUM4,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnNUM5,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnNUM6,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnNUM7,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnNUM8,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnNUM9,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnEq,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnSign,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnPoint,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnClean,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    //2020年12月2日14:00:28
    connect(ui->btnBack,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnSqrt,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
    connect(ui->btnMod,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
        connect(ui->btnSquare,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
            connect(ui->btnReciprocal,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
                connect(ui->btnSqrt,SIGNAL(clicked()),ui->curLabel,SLOT(autoAppend( )));
}


void MainWindow::on_btnNUM0_clicked()//向当前算式输入0
{
    this->calculationString.append('0');
}
void MainWindow::on_btnNUM1_clicked() //向当前算式输入1
{
    this->calculationString.append('1');

}
void MainWindow::on_btnNUM2_clicked()//向当前算式输入2
{
    this->calculationString.append('2');

}

void MainWindow::on_btnNUM3_clicked()//向当前算式输入3
{
    this->calculationString.append('3');

}
void MainWindow::on_btnNUM4_clicked()//向当前算式输入4
{
    this->calculationString.append('4');

}

void MainWindow::on_btnNUM5_clicked()//向当前算式输入5
{
    this->calculationString.append('5');

}

void MainWindow::on_btnNUM6_clicked()//向当前算式输入6
{
    this->calculationString.append('6');

}

void MainWindow::on_btnNUM7_clicked()//向当前算式输入7
{
    this->calculationString.append('7');

}
void MainWindow::on_btnNUM8_clicked()//向当前算式输入8
{
    this->calculationString.append('8');

}
void MainWindow::on_btnNUM9_clicked()//向当前算式输入9
{
    this->calculationString.append('9');

}


void MainWindow::on_btnEq_clicked()//计算当前算式 并且set去label
{
    this->num1Double=this->num1.toDouble();
    this->num2Double=this->num2.toDouble();

   ui->resultLabel->setText(this->num1+this->op+this->num2+'=');//得到结果



    //根据运算符获得 结果 暂不运算符重载
    QString op=this->op;
    if(op=="+"){
        this->calculationString=QString::number(this->num1Double+this->num2Double);
    }
    else if(op=="-"){
        this->calculationString=QString::number(this->num1Double-this->num2Double);
    }
    else if(op=="*"){
        this->calculationString=QString::number(this->num1Double*this->num2Double);
    }
    else if(op=="/"){

        try {
            if(this->num2Double==0)
                throw QString("Division by zero condition!");
                    this->calculationString=QString::number(this->num1Double/this->num2Double);
        } catch (const QString error) {
               QMessageBox().warning(this,error,error);
               this->on_btnBack_clicked();
        }

    }
    else if(op=="%"){
                this->calculationString=QString::number(this->num1.toInt()%this->num2.toInt());
    }



    //清空运算符
    this->op="//";
        this->opS="//";
}

void MainWindow::on_btnAdd_clicked()
{
    //阻止无限输入加号
    this->op='+';
    if(this->opPos==-1){

        this->calculationString.append(this->op);
    }
    else{

        this->calculationString.replace(this->opPos,1,this->op);
    }


}

void MainWindow::on_btnSub_clicked()
{
    this->op='-';
    if(this->opPos==-1){//并且只允许存在一次
        this->calculationString.append(this->op);
    }
    else{

        this->calculationString.replace(this->opPos,1,this->op);
    }


}

void MainWindow::on_btnMul_clicked()
{
    this->op='*';
    if(this->opPos==-1){
        this->calculationString.append(this->op);
    }
    else{

        this->calculationString.replace(this->opPos,1,this->op);
    }


}

void MainWindow::on_btnDiv_clicked()
{

    this->op='/';
    if(this->opPos==-1)
    {
        this->calculationString.append(this->op);}
    else{

        this->calculationString.replace(this->opPos,1,this->op);
    }


}
void MainWindow::on_btnMod_clicked()
{
    this->op='%';
    if(this->opPos==-1)
    {
        this->calculationString.append(this->op);}
    else{

        this->calculationString.replace(this->opPos,1,this->op);
    }
}

//自动识别 num1 num2
// curlabel 变化时 直接 自动添加
void MainWindow::on_curLabel_textChanged()
{


    //由于负号和 减号是同一个东西,这里需要处理一下
    //当op是减号时,看一下是不是num1负数
    if(this->op=="-"  ){//如果是的话,取第二个-的位置
        if(this->num1.contains("-"))
            this->opPos=this->calculationString.indexOf(this->op,this->num1.size()); //寻找op位置
        else//否则num1不是负数,直接取第一个-就行
            this->opPos=this->calculationString.indexOf(this->op); //寻找op位置
    }
    else
        this->opPos=this->calculationString.indexOf(this->op); //寻找op位置


    if(this->opPos!=-1)//如果找到op说明有num1 和 num2
    {
        this->num1=this->calculationString.mid(0,this->opPos);
        this->num2=this->calculationString.mid(this->opPos+1);
        this->curNum=this->num2;
    }
    else{//只有Num1了
        this->num1=this->calculationString;
        this->curNum=this->num1;
        this->num2="0";
    }
    if (this->calculationString==""){ //clean行为
        ui->curLabel->setText("0");
    }

    ui->curLabel->setText(this->calculationString);
    qDebug()<<"现在的ops"<<this->opPos;
    qDebug()<<"现在的算式是"<<this->calculationString;
    qDebug()<<"现在的num1"<<this->num1;
    qDebug()<<"现在的num2"<<this->num2;

}

void MainWindow::on_btnSign_clicked()
{
    //获取当前输入的数字 再取反

    if(this->opPos==-1){ //如果num2是空,代表此时只有num1
        this->calculationString=QString::number(-this->calculationString.toDouble()); //直接算
    }
    else{//此时是num2,需要单独拉出来算
        this->calculationString=this->num1+this->op+QString::number(-this->num2.toDouble());
    }


}

void MainWindow::on_btnPoint_clicked() //给当前加小数点,一个num只允许加一次  indexof 就是 find
{

    if(this->opPos==-1)//如果找不到op
    {
        if(this->calculationString.indexOf('.')==-1){//并且没有小数点,说明还是num1此时只允许添加一次小数点
            this->calculationString+='.';
        }
    }
    else if(this->opPos>=0){//如果找到了 . 那么此时是num2
        if(this->calculationString.mid(this->opPos+1).indexOf('.')==-1){//并且num2没有小数点,说明还是num1此时只允许添加一次小数点
            this->calculationString+='.';
        }

    }

}



void MainWindow::on_btnSqrt_clicked() //为当前数值做一个开方运算 或者在有op之后做一个基于num1 的运算
{
    //检测当前是不是num1 即当num2是空的时候
    if(this->opPos==-1){//说明只有num1
        //        将当前的数值开方
        this->calculationString=QString::number(sqrt(this->num1.toDouble()));
    }
    else{//否则将num2开方
        this->calculationString=this->num1+this->op+QString::number(sqrt(this->num2.toDouble()));
    }
          this->opS="½";
   ui->resultLabel->setText(this->curNum+this->opS);//对num1
}

void MainWindow::on_btnClean_clicked() //  初始化
{
    this->calculationString="";
    ui->resultLabel->setText("");
    this->op="//";
}

void MainWindow::on_btnBack_clicked() //back退格
{
    int size=this->calculationString.size();
    qDebug()<<this->op<<"op";
    this->calculationString=this->calculationString.remove(size-1,size);
    //另一种版本
    //    if(this->opPos==-1)//如果找不到op,说明可以随便删
    //        this->calculationString=this->calculationString.remove(size-1,size);
    //    else{
    //        //如果找到了 只能删到op前面
    //        if(size>this->opPos+1)
    //            this->calculationString=this->calculationString.remove(size-1,size);
    //    }
}

void MainWindow::on_btnSquare_clicked()
{
    if(this->opPos==-1){//说明只有num1
        //        将当前的数值平方
        this->calculationString=QString::number(pow(this->num1.toDouble(),2));
    }
    else{//否则将num2
        this->calculationString=this->num1+this->op+QString::number(pow(this->num2.toDouble(),2));
    }
        this->opS="²";
       ui->resultLabel->setText(this->curNum+this->opS);//对num1

}

void MainWindow::on_btnReciprocal_clicked()
{
    if(this->opPos==-1){//说明只有num1
        //        将当前的数值倒数
        this->calculationString=QString::number(1/this->num1.toDouble());
    }
    else{//否则将num2倒数
        this->calculationString=this->num1+this->op+QString::number(1/this->num2.toDouble());
    }
    this->opS="^-1";

   ui->resultLabel->setText(this->curNum+this->opS);//对num1

}




