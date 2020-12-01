/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <autolabel.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *resultLabel;
    autoLabel *curLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QGridLayout *gridLayout;
    QPushButton *pushButton_12;
    QPushButton *pushButton_19;
    QPushButton *btnClean;
    QPushButton *btnBack;
    QPushButton *btnReciprocal;
    QPushButton *btnSquare;
    QPushButton *btnSqrt;
    QPushButton *btnDiv;
    QPushButton *btnNUM7;
    QPushButton *btnNUM8;
    QPushButton *btnNUM9;
    QPushButton *btnMul;
    QPushButton *btnNUM4;
    QPushButton *btnNUM5;
    QPushButton *btnNUM6;
    QPushButton *btnSub;
    QPushButton *btnNUM1;
    QPushButton *btnNUM2;
    QPushButton *btnNUM3;
    QPushButton *btnAdd;
    QPushButton *btnSign;
    QPushButton *btnNUM0;
    QPushButton *btnPoint;
    QPushButton *btnEq;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(320, 490);
        MainWindow->setMaximumSize(QSize(320, 490));
        QIcon icon;
        icon.addFile(QStringLiteral(":/imgsrc/winIcon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(0.95);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMaximumSize(QSize(320, 490));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imgsrc/his.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setFlat(true);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(11);
        font1.setItalic(true);
        resultLabel->setFont(font1);
        resultLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(resultLabel);

        curLabel = new autoLabel(centralwidget);
        curLabel->setObjectName(QStringLiteral("curLabel"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        curLabel->setFont(font2);
        curLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(curLabel);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        pushButton_11->setFont(font3);
        pushButton_11->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_11->setFlat(true);

        horizontalLayout->addWidget(pushButton_11);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setFont(font3);
        pushButton_10->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_10->setFlat(true);

        horizontalLayout->addWidget(pushButton_10);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setFont(font3);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_6->setFlat(true);

        horizontalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setFont(font3);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_7->setFlat(true);

        horizontalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setFont(font3);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_8->setFlat(true);

        horizontalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setFont(font3);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_9->setFlat(true);

        horizontalLayout->addWidget(pushButton_9);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_12->setFont(font4);
        pushButton_12->setAutoFillBackground(false);
        pushButton_12->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color:rgb(230, 230, 230)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(191, 191, 191, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_12->setAutoDefault(false);
        pushButton_12->setFlat(true);

        gridLayout->addWidget(pushButton_12, 0, 0, 1, 1);

        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        sizePolicy2.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy2);
        pushButton_19->setFont(font4);
        pushButton_19->setAutoFillBackground(false);
        pushButton_19->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color:rgb(230, 230, 230)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(191, 191, 191, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_19->setAutoDefault(false);
        pushButton_19->setFlat(true);

        gridLayout->addWidget(pushButton_19, 0, 1, 1, 1);

        btnClean = new QPushButton(centralwidget);
        btnClean->setObjectName(QStringLiteral("btnClean"));
        sizePolicy2.setHeightForWidth(btnClean->sizePolicy().hasHeightForWidth());
        btnClean->setSizePolicy(sizePolicy2);
        btnClean->setFont(font4);
        btnClean->setAutoFillBackground(false);
        btnClean->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color:rgb(230, 230, 230)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(191, 191, 191, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnClean->setAutoDefault(false);
        btnClean->setFlat(true);

        gridLayout->addWidget(btnClean, 0, 2, 1, 1);

        btnBack = new QPushButton(centralwidget);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        sizePolicy2.setHeightForWidth(btnBack->sizePolicy().hasHeightForWidth());
        btnBack->setSizePolicy(sizePolicy2);
        btnBack->setFont(font4);
        btnBack->setAutoFillBackground(false);
        btnBack->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color:rgb(230, 230, 230)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(191, 191, 191, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnBack->setAutoDefault(false);
        btnBack->setFlat(true);

        gridLayout->addWidget(btnBack, 0, 3, 1, 1);

        btnReciprocal = new QPushButton(centralwidget);
        btnReciprocal->setObjectName(QStringLiteral("btnReciprocal"));
        sizePolicy2.setHeightForWidth(btnReciprocal->sizePolicy().hasHeightForWidth());
        btnReciprocal->setSizePolicy(sizePolicy2);
        btnReciprocal->setFont(font4);
        btnReciprocal->setAutoFillBackground(false);
        btnReciprocal->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color:rgb(230, 230, 230)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(191, 191, 191, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnReciprocal->setAutoDefault(false);
        btnReciprocal->setFlat(true);

        gridLayout->addWidget(btnReciprocal, 1, 0, 1, 1);

        btnSquare = new QPushButton(centralwidget);
        btnSquare->setObjectName(QStringLiteral("btnSquare"));
        sizePolicy2.setHeightForWidth(btnSquare->sizePolicy().hasHeightForWidth());
        btnSquare->setSizePolicy(sizePolicy2);
        btnSquare->setFont(font4);
        btnSquare->setAutoFillBackground(false);
        btnSquare->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color:rgb(230, 230, 230)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(191, 191, 191, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnSquare->setAutoDefault(false);
        btnSquare->setFlat(true);

        gridLayout->addWidget(btnSquare, 1, 1, 1, 1);

        btnSqrt = new QPushButton(centralwidget);
        btnSqrt->setObjectName(QStringLiteral("btnSqrt"));
        sizePolicy2.setHeightForWidth(btnSqrt->sizePolicy().hasHeightForWidth());
        btnSqrt->setSizePolicy(sizePolicy2);
        btnSqrt->setFont(font4);
        btnSqrt->setAutoFillBackground(false);
        btnSqrt->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color:rgb(230, 230, 230)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(191, 191, 191, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnSqrt->setAutoDefault(false);
        btnSqrt->setFlat(true);

        gridLayout->addWidget(btnSqrt, 1, 2, 1, 1);

        btnDiv = new QPushButton(centralwidget);
        btnDiv->setObjectName(QStringLiteral("btnDiv"));
        sizePolicy2.setHeightForWidth(btnDiv->sizePolicy().hasHeightForWidth());
        btnDiv->setSizePolicy(sizePolicy2);
        btnDiv->setFont(font4);
        btnDiv->setAutoFillBackground(false);
        btnDiv->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color:rgb(230, 230, 230)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(191, 191, 191, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnDiv->setAutoDefault(false);
        btnDiv->setFlat(true);

        gridLayout->addWidget(btnDiv, 1, 3, 1, 1);

        btnNUM7 = new QPushButton(centralwidget);
        btnNUM7->setObjectName(QStringLiteral("btnNUM7"));
        sizePolicy2.setHeightForWidth(btnNUM7->sizePolicy().hasHeightForWidth());
        btnNUM7->setSizePolicy(sizePolicy2);
        btnNUM7->setFont(font4);
        btnNUM7->setAutoFillBackground(false);
        btnNUM7->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnNUM7->setAutoDefault(false);
        btnNUM7->setFlat(true);

        gridLayout->addWidget(btnNUM7, 2, 0, 1, 1);

        btnNUM8 = new QPushButton(centralwidget);
        btnNUM8->setObjectName(QStringLiteral("btnNUM8"));
        sizePolicy2.setHeightForWidth(btnNUM8->sizePolicy().hasHeightForWidth());
        btnNUM8->setSizePolicy(sizePolicy2);
        btnNUM8->setFont(font4);
        btnNUM8->setAutoFillBackground(false);
        btnNUM8->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnNUM8->setAutoDefault(false);
        btnNUM8->setFlat(true);

        gridLayout->addWidget(btnNUM8, 2, 1, 1, 1);

        btnNUM9 = new QPushButton(centralwidget);
        btnNUM9->setObjectName(QStringLiteral("btnNUM9"));
        sizePolicy2.setHeightForWidth(btnNUM9->sizePolicy().hasHeightForWidth());
        btnNUM9->setSizePolicy(sizePolicy2);
        btnNUM9->setFont(font4);
        btnNUM9->setAutoFillBackground(false);
        btnNUM9->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnNUM9->setAutoDefault(false);
        btnNUM9->setFlat(true);

        gridLayout->addWidget(btnNUM9, 2, 2, 1, 1);

        btnMul = new QPushButton(centralwidget);
        btnMul->setObjectName(QStringLiteral("btnMul"));
        sizePolicy2.setHeightForWidth(btnMul->sizePolicy().hasHeightForWidth());
        btnMul->setSizePolicy(sizePolicy2);
        btnMul->setFont(font4);
        btnMul->setAutoFillBackground(false);
        btnMul->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color:rgb(230, 230, 230)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(191, 191, 191, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnMul->setAutoDefault(false);
        btnMul->setFlat(true);

        gridLayout->addWidget(btnMul, 2, 3, 1, 1);

        btnNUM4 = new QPushButton(centralwidget);
        btnNUM4->setObjectName(QStringLiteral("btnNUM4"));
        sizePolicy2.setHeightForWidth(btnNUM4->sizePolicy().hasHeightForWidth());
        btnNUM4->setSizePolicy(sizePolicy2);
        btnNUM4->setFont(font4);
        btnNUM4->setAutoFillBackground(false);
        btnNUM4->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnNUM4->setFlat(true);

        gridLayout->addWidget(btnNUM4, 3, 0, 1, 1);

        btnNUM5 = new QPushButton(centralwidget);
        btnNUM5->setObjectName(QStringLiteral("btnNUM5"));
        sizePolicy2.setHeightForWidth(btnNUM5->sizePolicy().hasHeightForWidth());
        btnNUM5->setSizePolicy(sizePolicy2);
        btnNUM5->setFont(font4);
        btnNUM5->setAutoFillBackground(false);
        btnNUM5->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnNUM5->setFlat(true);

        gridLayout->addWidget(btnNUM5, 3, 1, 1, 1);

        btnNUM6 = new QPushButton(centralwidget);
        btnNUM6->setObjectName(QStringLiteral("btnNUM6"));
        sizePolicy2.setHeightForWidth(btnNUM6->sizePolicy().hasHeightForWidth());
        btnNUM6->setSizePolicy(sizePolicy2);
        btnNUM6->setFont(font4);
        btnNUM6->setAutoFillBackground(false);
        btnNUM6->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnNUM6->setFlat(true);

        gridLayout->addWidget(btnNUM6, 3, 2, 1, 1);

        btnSub = new QPushButton(centralwidget);
        btnSub->setObjectName(QStringLiteral("btnSub"));
        sizePolicy2.setHeightForWidth(btnSub->sizePolicy().hasHeightForWidth());
        btnSub->setSizePolicy(sizePolicy2);
        btnSub->setFont(font4);
        btnSub->setAutoFillBackground(false);
        btnSub->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color:rgb(230, 230, 230)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(191, 191, 191, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnSub->setFlat(true);

        gridLayout->addWidget(btnSub, 3, 3, 1, 1);

        btnNUM1 = new QPushButton(centralwidget);
        btnNUM1->setObjectName(QStringLiteral("btnNUM1"));
        sizePolicy2.setHeightForWidth(btnNUM1->sizePolicy().hasHeightForWidth());
        btnNUM1->setSizePolicy(sizePolicy2);
        btnNUM1->setFont(font4);
        btnNUM1->setAutoFillBackground(false);
        btnNUM1->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnNUM1->setFlat(true);

        gridLayout->addWidget(btnNUM1, 4, 0, 1, 1);

        btnNUM2 = new QPushButton(centralwidget);
        btnNUM2->setObjectName(QStringLiteral("btnNUM2"));
        sizePolicy2.setHeightForWidth(btnNUM2->sizePolicy().hasHeightForWidth());
        btnNUM2->setSizePolicy(sizePolicy2);
        btnNUM2->setFont(font4);
        btnNUM2->setAutoFillBackground(false);
        btnNUM2->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnNUM2->setFlat(true);

        gridLayout->addWidget(btnNUM2, 4, 1, 1, 1);

        btnNUM3 = new QPushButton(centralwidget);
        btnNUM3->setObjectName(QStringLiteral("btnNUM3"));
        sizePolicy2.setHeightForWidth(btnNUM3->sizePolicy().hasHeightForWidth());
        btnNUM3->setSizePolicy(sizePolicy2);
        btnNUM3->setFont(font4);
        btnNUM3->setAutoFillBackground(false);
        btnNUM3->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnNUM3->setFlat(true);

        gridLayout->addWidget(btnNUM3, 4, 2, 1, 1);

        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        sizePolicy2.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy2);
        btnAdd->setFont(font4);
        btnAdd->setAutoFillBackground(false);
        btnAdd->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color:rgb(230, 230, 230)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(191, 191, 191, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnAdd->setFlat(true);

        gridLayout->addWidget(btnAdd, 4, 3, 1, 1);

        btnSign = new QPushButton(centralwidget);
        btnSign->setObjectName(QStringLiteral("btnSign"));
        sizePolicy2.setHeightForWidth(btnSign->sizePolicy().hasHeightForWidth());
        btnSign->setSizePolicy(sizePolicy2);
        btnSign->setFont(font4);
        btnSign->setAutoFillBackground(false);
        btnSign->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnSign->setFlat(true);

        gridLayout->addWidget(btnSign, 5, 0, 1, 1);

        btnNUM0 = new QPushButton(centralwidget);
        btnNUM0->setObjectName(QStringLiteral("btnNUM0"));
        sizePolicy2.setHeightForWidth(btnNUM0->sizePolicy().hasHeightForWidth());
        btnNUM0->setSizePolicy(sizePolicy2);
        btnNUM0->setFont(font4);
        btnNUM0->setAutoFillBackground(false);
        btnNUM0->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnNUM0->setFlat(true);

        gridLayout->addWidget(btnNUM0, 5, 1, 1, 1);

        btnPoint = new QPushButton(centralwidget);
        btnPoint->setObjectName(QStringLiteral("btnPoint"));
        sizePolicy2.setHeightForWidth(btnPoint->sizePolicy().hasHeightForWidth());
        btnPoint->setSizePolicy(sizePolicy2);
        btnPoint->setFont(font4);
        btnPoint->setAutoFillBackground(false);
        btnPoint->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnPoint->setFlat(true);

        gridLayout->addWidget(btnPoint, 5, 2, 1, 1);

        btnEq = new QPushButton(centralwidget);
        btnEq->setObjectName(QStringLiteral("btnEq"));
        sizePolicy2.setHeightForWidth(btnEq->sizePolicy().hasHeightForWidth());
        btnEq->setSizePolicy(sizePolicy2);
        btnEq->setFont(font4);
        btnEq->setAutoFillBackground(false);
        btnEq->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color:rgb(230, 230, 230)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(191, 191, 191, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        btnEq->setFlat(true);

        gridLayout->addWidget(btnEq, 5, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        pushButton_12->setDefault(false);
        pushButton_19->setDefault(false);
        btnClean->setDefault(false);
        btnBack->setDefault(false);
        btnReciprocal->setDefault(false);
        btnSquare->setDefault(false);
        btnSqrt->setDefault(false);
        btnDiv->setDefault(false);
        btnNUM7->setDefault(false);
        btnNUM8->setDefault(false);
        btnNUM9->setDefault(false);
        btnMul->setDefault(false);
        btnNUM4->setDefault(false);
        btnNUM5->setDefault(false);
        btnNUM6->setDefault(false);
        btnSub->setDefault(false);
        btnNUM1->setDefault(false);
        btnNUM2->setDefault(false);
        btnNUM3->setDefault(false);
        btnAdd->setDefault(false);
        btnSign->setDefault(false);
        btnNUM0->setDefault(false);
        btnPoint->setDefault(false);
        btnEq->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Standard", Q_NULLPTR));
        pushButton->setText(QString());
        resultLabel->setText(QString());
        curLabel->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "MC", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "MR", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "M+", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "M-", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "MS", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "M^", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("MainWindow", "CE", Q_NULLPTR));
        btnClean->setText(QApplication::translate("MainWindow", "CL", Q_NULLPTR));
        btnBack->setText(QApplication::translate("MainWindow", "BC", Q_NULLPTR));
        btnReciprocal->setText(QApplication::translate("MainWindow", "1/x", Q_NULLPTR));
        btnSquare->setText(QApplication::translate("MainWindow", "x^2", Q_NULLPTR));
        btnSqrt->setText(QApplication::translate("MainWindow", "x^1/2", Q_NULLPTR));
        btnDiv->setText(QApplication::translate("MainWindow", "\303\267", Q_NULLPTR));
        btnNUM7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        btnNUM8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        btnNUM9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        btnMul->setText(QApplication::translate("MainWindow", " \303\227", Q_NULLPTR));
        btnNUM4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        btnNUM5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        btnNUM6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        btnSub->setText(QApplication::translate("MainWindow", "\357\274\215", Q_NULLPTR));
        btnNUM1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        btnNUM2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        btnNUM3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        btnAdd->setText(QApplication::translate("MainWindow", "\357\274\213", Q_NULLPTR));
        btnSign->setText(QApplication::translate("MainWindow", "+/-", Q_NULLPTR));
        btnNUM0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        btnPoint->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        btnEq->setText(QApplication::translate("MainWindow", "\357\274\235", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H


