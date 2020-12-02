#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    void connectSlot();
    ~MainWindow();

private slots:
    void on_btnNUM1_clicked();

    void on_btnNUM0_clicked();

    void on_btnNUM2_clicked();

    void on_btnNUM3_clicked();

    void on_btnNUM4_clicked();
    void on_btnNUM5_clicked();
    void on_btnNUM6_clicked();
    void on_btnNUM7_clicked();
    void on_btnNUM8_clicked();
        void on_btnNUM9_clicked();
        void on_btnEq_clicked();

        void on_btnAdd_clicked();

        void on_btnSub_clicked();

        void on_btnMul_clicked();

        void on_btnDiv_clicked();



        void on_curLabel_textChanged();

        void on_btnSign_clicked();

        void on_btnPoint_clicked();



        void on_btnSqrt_clicked();

        void on_btnClean_clicked();

        void on_btnBack_clicked();

private:
    Ui::MainWindow *ui;
    QString calculationString;// 全局变量 记录用户的输入算式
        QString num1;// 双目运算符的 第一个 数
        QString num2;// 双目运算符的 第2个 数
        QString curNum ; //记录当前的num

        double num1Double; //转化为整形
        double num2Double;//整形
        QString op="//" ;//运算符 +-*/% 用//代表没有op
        int opPos=-1;//运算符在算式的位置


};
#endif // MAINWINDOW_H
