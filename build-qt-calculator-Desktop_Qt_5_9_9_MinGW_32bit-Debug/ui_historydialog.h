/********************************************************************************
** Form generated from reading UI file 'historydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYDIALOG_H
#define UI_HISTORYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <historyscrollarea.h>

QT_BEGIN_NAMESPACE

class Ui_HistoryDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    HistoryScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *HistoryDialog)
    {
        if (HistoryDialog->objectName().isEmpty())
            HistoryDialog->setObjectName(QStringLiteral("HistoryDialog"));
        HistoryDialog->resize(246, 395);
        verticalLayout_2 = new QVBoxLayout(HistoryDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea = new HistoryScrollArea(HistoryDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::Panel);
        scrollArea->setFrameShadow(QFrame::Raised);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 226, 343));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(HistoryDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/imgsrc/clean.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(HistoryDialog);

        QMetaObject::connectSlotsByName(HistoryDialog);
    } // setupUi

    void retranslateUi(QDialog *HistoryDialog)
    {
        HistoryDialog->setWindowTitle(QApplication::translate("HistoryDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HistoryDialog: public Ui_HistoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYDIALOG_H
