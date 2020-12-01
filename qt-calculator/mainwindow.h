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

private:
    Ui::MainWindow *ui;
    QString calculationString;// 全局变量 记录用户的输入算式
        int num1;// 双目运算符的 第一个 数
        int num2;// 双目运算符的 第2个 数
    char op ;//运算符 +-*/%


};
#endif // MAINWINDOW_H
