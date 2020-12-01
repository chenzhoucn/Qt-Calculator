#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->connectSlot();
}

MainWindow::~MainWindow()
{
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

    this->num2=ui->curLabel->text().mid(this->num1.size()+1);//根据 op 分开两边 左边是num1 右边是 num2
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
    //获得结果后,将num1=result
    //num2为0
    this->num1=this->calculationString;
    this->num2=QString("0");

}

void MainWindow::on_btnAdd_clicked()
{
    this->op='+';
    //将第一个数保存
    this->num1=ui->curLabel->text(); //保存 num1
    this->calculationString.append(this->op);

}

void MainWindow::on_btnSub_clicked()
{
    this->op='-';
    this->num1=ui->curLabel->text();
    this->calculationString.append(this->op);
}

void MainWindow::on_btnMul_clicked()
{
    this->op='*';
    this->num1=ui->curLabel->text();
    this->calculationString.append(this->op);
}

void MainWindow::on_btnDiv_clicked()
{
    this->op='/';
    this->num1=ui->curLabel->text();
    this->calculationString.append(this->op);
}



void MainWindow::on_curLabel_textChanged()// curlabel 变化时 直接 自动添加
{
    qDebug()<<this->calculationString;
    ui->curLabel->setText(this->calculationString);
}
