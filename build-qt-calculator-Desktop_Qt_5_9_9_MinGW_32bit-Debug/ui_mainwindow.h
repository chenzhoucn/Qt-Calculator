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
    QLabel *label;
    QLabel *label_2;
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
    QPushButton *pushButton_25;
    QPushButton *pushButton_31;
    QPushButton *pushButton_15;
    QPushButton *pushButton_20;
    QPushButton *pushButton_32;
    QPushButton *pushButton_26;
    QPushButton *pushButton_13;
    QPushButton *pushButton_21;
    QPushButton *pushButton_27;
    QPushButton *pushButton_33;
    QPushButton *pushButton_14;
    QPushButton *pushButton_22;
    QPushButton *pushButton_17;
    QPushButton *pushButton_28;
    QPushButton *pushButton_35;
    QPushButton *pushButton_29;
    QPushButton *pushButton_23;
    QPushButton *pushButton_34;
    QPushButton *pushButton_18;
    QPushButton *pushButton_24;
    QPushButton *pushButton_30;
    QPushButton *pushButton_36;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(320, 490);
        MainWindow->setMaximumSize(QSize(320, 490));
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
        QIcon icon;
        icon.addFile(QStringLiteral(":/imgsrc/his.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setFlat(true);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(11);
        font1.setItalic(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_2);


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
"background-color: rgb(249, 249, 249)\n"
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
"background-color: rgb(249, 249, 249)\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_19->setAutoDefault(false);
        pushButton_19->setFlat(true);

        gridLayout->addWidget(pushButton_19, 0, 1, 1, 1);

        pushButton_25 = new QPushButton(centralwidget);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        sizePolicy2.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy2);
        pushButton_25->setFont(font4);
        pushButton_25->setAutoFillBackground(false);
        pushButton_25->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(249, 249, 249)\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_25->setAutoDefault(false);
        pushButton_25->setFlat(true);

        gridLayout->addWidget(pushButton_25, 0, 2, 1, 1);

        pushButton_31 = new QPushButton(centralwidget);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        sizePolicy2.setHeightForWidth(pushButton_31->sizePolicy().hasHeightForWidth());
        pushButton_31->setSizePolicy(sizePolicy2);
        pushButton_31->setFont(font4);
        pushButton_31->setAutoFillBackground(false);
        pushButton_31->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(249, 249, 249)\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_31->setAutoDefault(false);
        pushButton_31->setFlat(true);

        gridLayout->addWidget(pushButton_31, 0, 3, 1, 1);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        sizePolicy2.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy2);
        pushButton_15->setFont(font4);
        pushButton_15->setAutoFillBackground(false);
        pushButton_15->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(249, 249, 249)\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_15->setAutoDefault(false);
        pushButton_15->setFlat(true);

        gridLayout->addWidget(pushButton_15, 1, 0, 1, 1);

        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        sizePolicy2.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy2);
        pushButton_20->setFont(font4);
        pushButton_20->setAutoFillBackground(false);
        pushButton_20->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(249, 249, 249)\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_20->setAutoDefault(false);
        pushButton_20->setFlat(true);

        gridLayout->addWidget(pushButton_20, 1, 1, 1, 1);

        pushButton_32 = new QPushButton(centralwidget);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));
        sizePolicy2.setHeightForWidth(pushButton_32->sizePolicy().hasHeightForWidth());
        pushButton_32->setSizePolicy(sizePolicy2);
        pushButton_32->setFont(font4);
        pushButton_32->setAutoFillBackground(false);
        pushButton_32->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(249, 249, 249)\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_32->setAutoDefault(false);
        pushButton_32->setFlat(true);

        gridLayout->addWidget(pushButton_32, 1, 2, 1, 1);

        pushButton_26 = new QPushButton(centralwidget);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        sizePolicy2.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy2);
        pushButton_26->setFont(font4);
        pushButton_26->setAutoFillBackground(false);
        pushButton_26->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(249, 249, 249)\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_26->setAutoDefault(false);
        pushButton_26->setFlat(true);

        gridLayout->addWidget(pushButton_26, 1, 3, 1, 1);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        sizePolicy2.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy2);
        pushButton_13->setFont(font4);
        pushButton_13->setAutoFillBackground(false);
        pushButton_13->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_13->setAutoDefault(false);
        pushButton_13->setFlat(true);

        gridLayout->addWidget(pushButton_13, 2, 0, 1, 1);

        pushButton_21 = new QPushButton(centralwidget);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        sizePolicy2.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy2);
        pushButton_21->setFont(font4);
        pushButton_21->setAutoFillBackground(false);
        pushButton_21->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_21->setAutoDefault(false);
        pushButton_21->setFlat(true);

        gridLayout->addWidget(pushButton_21, 2, 1, 1, 1);

        pushButton_27 = new QPushButton(centralwidget);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        sizePolicy2.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy2);
        pushButton_27->setFont(font4);
        pushButton_27->setAutoFillBackground(false);
        pushButton_27->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_27->setAutoDefault(false);
        pushButton_27->setFlat(true);

        gridLayout->addWidget(pushButton_27, 2, 2, 1, 1);

        pushButton_33 = new QPushButton(centralwidget);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));
        sizePolicy2.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy2);
        pushButton_33->setFont(font4);
        pushButton_33->setAutoFillBackground(false);
        pushButton_33->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(249, 249, 249)\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_33->setAutoDefault(false);
        pushButton_33->setFlat(true);

        gridLayout->addWidget(pushButton_33, 2, 3, 1, 1);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        sizePolicy2.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy2);
        pushButton_14->setFont(font4);
        pushButton_14->setAutoFillBackground(false);
        pushButton_14->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_14->setFlat(true);

        gridLayout->addWidget(pushButton_14, 3, 0, 1, 1);

        pushButton_22 = new QPushButton(centralwidget);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        sizePolicy2.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy2);
        pushButton_22->setFont(font4);
        pushButton_22->setAutoFillBackground(false);
        pushButton_22->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_22->setFlat(true);

        gridLayout->addWidget(pushButton_22, 3, 1, 1, 1);

        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        sizePolicy2.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy2);
        pushButton_17->setFont(font4);
        pushButton_17->setAutoFillBackground(false);
        pushButton_17->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_17->setFlat(true);

        gridLayout->addWidget(pushButton_17, 3, 2, 1, 1);

        pushButton_28 = new QPushButton(centralwidget);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        sizePolicy2.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy2);
        pushButton_28->setFont(font4);
        pushButton_28->setAutoFillBackground(false);
        pushButton_28->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(249, 249, 249)\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_28->setFlat(true);

        gridLayout->addWidget(pushButton_28, 3, 3, 1, 1);

        pushButton_35 = new QPushButton(centralwidget);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));
        sizePolicy2.setHeightForWidth(pushButton_35->sizePolicy().hasHeightForWidth());
        pushButton_35->setSizePolicy(sizePolicy2);
        pushButton_35->setFont(font4);
        pushButton_35->setAutoFillBackground(false);
        pushButton_35->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_35->setFlat(true);

        gridLayout->addWidget(pushButton_35, 4, 0, 1, 1);

        pushButton_29 = new QPushButton(centralwidget);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        sizePolicy2.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy2);
        pushButton_29->setFont(font4);
        pushButton_29->setAutoFillBackground(false);
        pushButton_29->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_29->setFlat(true);

        gridLayout->addWidget(pushButton_29, 4, 1, 1, 1);

        pushButton_23 = new QPushButton(centralwidget);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        sizePolicy2.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy2);
        pushButton_23->setFont(font4);
        pushButton_23->setAutoFillBackground(false);
        pushButton_23->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_23->setFlat(true);

        gridLayout->addWidget(pushButton_23, 4, 2, 1, 1);

        pushButton_34 = new QPushButton(centralwidget);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));
        sizePolicy2.setHeightForWidth(pushButton_34->sizePolicy().hasHeightForWidth());
        pushButton_34->setSizePolicy(sizePolicy2);
        pushButton_34->setFont(font4);
        pushButton_34->setAutoFillBackground(false);
        pushButton_34->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(249, 249, 249)\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_34->setFlat(true);

        gridLayout->addWidget(pushButton_34, 4, 3, 1, 1);

        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        sizePolicy2.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy2);
        pushButton_18->setFont(font4);
        pushButton_18->setAutoFillBackground(false);
        pushButton_18->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_18->setFlat(true);

        gridLayout->addWidget(pushButton_18, 5, 0, 1, 1);

        pushButton_24 = new QPushButton(centralwidget);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        sizePolicy2.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy2);
        pushButton_24->setFont(font4);
        pushButton_24->setAutoFillBackground(false);
        pushButton_24->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_24->setFlat(true);

        gridLayout->addWidget(pushButton_24, 5, 1, 1, 1);

        pushButton_30 = new QPushButton(centralwidget);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        sizePolicy2.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy2);
        pushButton_30->setFont(font4);
        pushButton_30->setAutoFillBackground(false);
        pushButton_30->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_30->setFlat(true);

        gridLayout->addWidget(pushButton_30, 5, 2, 1, 1);

        pushButton_36 = new QPushButton(centralwidget);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        sizePolicy2.setHeightForWidth(pushButton_36->sizePolicy().hasHeightForWidth());
        pushButton_36->setSizePolicy(sizePolicy2);
        pushButton_36->setFont(font4);
        pushButton_36->setAutoFillBackground(false);
        pushButton_36->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"background-color: rgb(249, 249, 249)\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
""));
        pushButton_36->setFlat(true);

        gridLayout->addWidget(pushButton_36, 5, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        pushButton_12->setDefault(false);
        pushButton_19->setDefault(false);
        pushButton_25->setDefault(false);
        pushButton_31->setDefault(false);
        pushButton_15->setDefault(false);
        pushButton_20->setDefault(false);
        pushButton_32->setDefault(false);
        pushButton_26->setDefault(false);
        pushButton_13->setDefault(false);
        pushButton_21->setDefault(false);
        pushButton_27->setDefault(false);
        pushButton_33->setDefault(false);
        pushButton_14->setDefault(false);
        pushButton_22->setDefault(false);
        pushButton_17->setDefault(false);
        pushButton_28->setDefault(false);
        pushButton_35->setDefault(false);
        pushButton_29->setDefault(false);
        pushButton_23->setDefault(false);
        pushButton_34->setDefault(false);
        pushButton_18->setDefault(false);
        pushButton_24->setDefault(false);
        pushButton_30->setDefault(false);
        pushButton_36->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Standard", Q_NULLPTR));
        pushButton->setText(QString());
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "MC", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "MR", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "M+", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "M-", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "MS", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "M^", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("MainWindow", "CE", Q_NULLPTR));
        pushButton_25->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        pushButton_31->setText(QApplication::translate("MainWindow", "CL", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "1/x", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("MainWindow", "x^2", Q_NULLPTR));
        pushButton_32->setText(QApplication::translate("MainWindow", "x^1/2", Q_NULLPTR));
        pushButton_26->setText(QApplication::translate("MainWindow", "\303\267", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        pushButton_27->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        pushButton_33->setText(QApplication::translate("MainWindow", " \303\227", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        pushButton_28->setText(QApplication::translate("MainWindow", "\357\274\215", Q_NULLPTR));
        pushButton_35->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButton_29->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        pushButton_23->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        pushButton_34->setText(QApplication::translate("MainWindow", "\357\274\213", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("MainWindow", "+/-", Q_NULLPTR));
        pushButton_24->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_30->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        pushButton_36->setText(QApplication::translate("MainWindow", "\357\274\235", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
