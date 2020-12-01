#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qDebug"
#include"QElapsedTimer"
#include"QTime"
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
    switch (this->op) {
    case '+':
        this->calculationString=QString::number(this->num1Double+this->num2Double);
        break;
    case '-':
        this->calculationString=QString::number(this->num1Double-this->num2Double);
        break;
    case '*':
        this->calculationString=QString::number(this->num1Double*this->num2Double);
        break;
    case '/':
        this->calculationString=QString::number(this->num1Double/this->num2Double);
        break;

    }
    //清空运算符
    this->op='\\';
}

void MainWindow::on_btnAdd_clicked()
{
    //阻止无限输入加号
    if(this->op!='+'){
        this->op='+';
        this->num1=ui->curLabel->text(); //保存 num1
        this->calculationString.append(this->op);

    }


}

void MainWindow::on_btnSub_clicked()
{
    if(    this->op!='-'){

        this->op='-';
        this->num1=ui->curLabel->text();
        this->calculationString.append(this->op);
    }

}

void MainWindow::on_btnMul_clicked()
{
    if(    this->op!='*'){

        this->op='*';

        this->num1=ui->curLabel->text();
        this->calculationString.append(this->op);

    }

}

void MainWindow::on_btnDiv_clicked()
{
    if(    this->op!='/')
    {   this->op='/';

        this->num1=ui->curLabel->text();
        this->calculationString.append(this->op);}

}

//自动识别 num1 num2
// curlabel 变化时 直接 自动添加
void MainWindow::on_curLabel_textChanged()
{
    qDebug()<<this->calculationString;
    ui->curLabel->setText(this->calculationString);

    if(this->calculationString.indexOf(this->op))//如果找到op说明有num1 和 num2
    {
        this->num1=this->calculationString.mid(0,this->calculationString.indexOf(this->op));
        this->num2=this->calculationString.mid(this->calculationString.indexOf(this->op)+1);
        this->curNum=this->num2;
    }
    else{//只有Num1了
        this->num1=this->calculationString.mid(0,this->calculationString.indexOf(this->op));
        this->curNum=this->num1;
    }

}

void MainWindow::on_btnSign_clicked()
{
    //获取当前输入的数字 再取反

    this->calculationString=QString::number(-1*this->calculationString.toDouble());
    this->curNum=this->num1;


}

void MainWindow::on_btnPoint_clicked() //给当前加小数点,一个num只允许加一次  indexof 就是 find
{

    if(this->calculationString.indexOf(this->op)==-1)//如果找不到op
    {
        if(this->calculationString.indexOf('.')==-1){//并且没有小数点,说明还是num1此时只允许添加一次小数点
            this->calculationString+='.';


        }
    }
    else if(this->calculationString.indexOf(this->op)>=0){//如果找到了 . 那么此时是num2
        if(this->calculationString.mid(this->calculationString.indexOf(this->op)+1).indexOf('.')==-1){//并且num2没有小数点,说明还是num1此时只允许添加一次小数点
            this->calculationString+='.';
        }

    }

}



void MainWindow::on_btnSqrt_clicked() //为当前数值做一个开方运算 或者在有op之后做一个基于num1 的运算
{

}

void MainWindow::on_btnClean_clicked() //  初始化
{
    this->calculationString="0";
    ui->resultLabel->setText("");
        this->op='\\';

}
