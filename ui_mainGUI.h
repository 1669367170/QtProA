/********************************************************************************
** Form generated from reading UI file 'mainGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINGUI_H
#define UI_MAINGUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainGUI
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labIco;
    QLabel *labTitle;
    QWidget *widgetTop;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *btnMain;
    QToolButton *btnConfig;
    QToolButton *btnData;
    QToolButton *btnHelp;
    QToolButton *btnExit;
    QSpacerItem *horizontalSpacer;
    QWidget *widgetMenu;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Close;
    QPushButton *btnMenu_Max;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QVBoxLayout *verticalLayout_2;
    QLabel *lab1;
    QWidget *page2;
    QVBoxLayout *verticalLayout_3;
    QLabel *lab2;
    QWidget *page3;
    QVBoxLayout *verticalLayout_5;
    QLabel *lab3;
    QWidget *page4;
    QVBoxLayout *verticalLayout_4;
    QLabel *lab4;

    void setupUi(QDialog *mainGUI)
    {
        if (mainGUI->objectName().isEmpty())
            mainGUI->setObjectName(QString::fromUtf8("mainGUI"));
        mainGUI->resize(800, 600);
        mainGUI->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(mainGUI);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        widgetTitle = new QWidget(mainGUI);
        widgetTitle->setObjectName(QString::fromUtf8("widgetTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetTitle->sizePolicy().hasHeightForWidth());
        widgetTitle->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widgetTitle);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 0, 0, 0);
        labIco = new QLabel(widgetTitle);
        labIco->setObjectName(QString::fromUtf8("labIco"));
        labIco->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labIco);

        labTitle = new QLabel(widgetTitle);
        labTitle->setObjectName(QString::fromUtf8("labTitle"));
        labTitle->setStyleSheet(QString::fromUtf8(""));
        labTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labTitle);

        widgetTop = new QWidget(widgetTitle);
        widgetTop->setObjectName(QString::fromUtf8("widgetTop"));
        horizontalLayout_3 = new QHBoxLayout(widgetTop);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnMain = new QToolButton(widgetTop);
        btnMain->setObjectName(QString::fromUtf8("btnMain"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnMain->sizePolicy().hasHeightForWidth());
        btnMain->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/main_main.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMain->setIcon(icon);
        btnMain->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btnMain);

        btnConfig = new QToolButton(widgetTop);
        btnConfig->setObjectName(QString::fromUtf8("btnConfig"));
        sizePolicy1.setHeightForWidth(btnConfig->sizePolicy().hasHeightForWidth());
        btnConfig->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/main_config.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnConfig->setIcon(icon1);
        btnConfig->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btnConfig);

        btnData = new QToolButton(widgetTop);
        btnData->setObjectName(QString::fromUtf8("btnData"));
        sizePolicy1.setHeightForWidth(btnData->sizePolicy().hasHeightForWidth());
        btnData->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/main_data.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnData->setIcon(icon2);
        btnData->setChecked(false);
        btnData->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btnData);

        btnHelp = new QToolButton(widgetTop);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        sizePolicy1.setHeightForWidth(btnHelp->sizePolicy().hasHeightForWidth());
        btnHelp->setSizePolicy(sizePolicy1);
        btnHelp->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/main_person.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHelp->setIcon(icon3);
        btnHelp->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btnHelp);

        btnExit = new QToolButton(widgetTop);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        sizePolicy1.setHeightForWidth(btnExit->sizePolicy().hasHeightForWidth());
        btnExit->setSizePolicy(sizePolicy1);
        btnExit->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/main_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon4);
        btnExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btnExit);


        horizontalLayout_2->addWidget(widgetTop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widgetMenu = new QWidget(widgetTitle);
        widgetMenu->setObjectName(QString::fromUtf8("widgetMenu"));
        gridLayout_2 = new QGridLayout(widgetMenu);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 3);

        btnMenu_Min = new QPushButton(widgetMenu);
        btnMenu_Min->setObjectName(QString::fromUtf8("btnMenu_Min"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy2);
        btnMenu_Min->setMinimumSize(QSize(30, 30));
        btnMenu_Min->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Min->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(btnMenu_Min, 0, 1, 1, 1);

        btnMenu_Close = new QPushButton(widgetMenu);
        btnMenu_Close->setObjectName(QString::fromUtf8("btnMenu_Close"));
        sizePolicy2.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy2);
        btnMenu_Close->setMinimumSize(QSize(30, 30));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(btnMenu_Close, 0, 3, 1, 1);

        btnMenu_Max = new QPushButton(widgetMenu);
        btnMenu_Max->setObjectName(QString::fromUtf8("btnMenu_Max"));
        sizePolicy2.setHeightForWidth(btnMenu_Max->sizePolicy().hasHeightForWidth());
        btnMenu_Max->setSizePolicy(sizePolicy2);
        btnMenu_Max->setMinimumSize(QSize(30, 30));
        btnMenu_Max->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(btnMenu_Max, 0, 2, 1, 1);


        horizontalLayout_2->addWidget(widgetMenu);


        verticalLayout->addWidget(widgetTitle);

        stackedWidget = new QStackedWidget(mainGUI);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        verticalLayout_2 = new QVBoxLayout(page1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lab1 = new QLabel(page1);
        lab1->setObjectName(QString::fromUtf8("lab1"));
        lab1->setStyleSheet(QString::fromUtf8(""));
        lab1->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lab1);

        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        verticalLayout_3 = new QVBoxLayout(page2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lab2 = new QLabel(page2);
        lab2->setObjectName(QString::fromUtf8("lab2"));
        lab2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lab2);

        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QString::fromUtf8("page3"));
        verticalLayout_5 = new QVBoxLayout(page3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lab3 = new QLabel(page3);
        lab3->setObjectName(QString::fromUtf8("lab3"));
        lab3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lab3);

        stackedWidget->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName(QString::fromUtf8("page4"));
        verticalLayout_4 = new QVBoxLayout(page4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lab4 = new QLabel(page4);
        lab4->setObjectName(QString::fromUtf8("lab4"));
        lab4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lab4);

        stackedWidget->addWidget(page4);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(mainGUI);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(mainGUI);
    } // setupUi

    void retranslateUi(QDialog *mainGUI)
    {
        mainGUI->setWindowTitle(QCoreApplication::translate("mainGUI", "Form", nullptr));
        labIco->setText(QString());
        labTitle->setText(QString());
        btnMain->setText(QCoreApplication::translate("mainGUI", "\344\270\273\347\225\214\351\235\242", nullptr));
        btnConfig->setText(QCoreApplication::translate("mainGUI", "\345\260\217\345\267\245\345\205\267", nullptr));
        btnData->setText(QCoreApplication::translate("mainGUI", "\345\255\246\344\271\240", nullptr));
        btnHelp->setText(QCoreApplication::translate("mainGUI", "\345\250\261\344\271\220", nullptr));
        btnExit->setText(QCoreApplication::translate("mainGUI", "\347\224\250\346\210\267\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        btnMenu_Min->setToolTip(QCoreApplication::translate("mainGUI", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Min->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu_Close->setToolTip(QCoreApplication::translate("mainGUI", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Close->setText(QString());
        btnMenu_Max->setText(QString());
        lab1->setText(QCoreApplication::translate("mainGUI", "\344\270\273\347\225\214\351\235\242", nullptr));
        lab2->setText(QCoreApplication::translate("mainGUI", "\345\260\217\345\267\245\345\205\267", nullptr));
        lab3->setText(QCoreApplication::translate("mainGUI", "\345\255\246\344\271\240", nullptr));
        lab4->setText(QCoreApplication::translate("mainGUI", "\345\250\261\344\271\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainGUI: public Ui_mainGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINGUI_H
