/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *polacz_button;
    QPushButton *rozlacz_button;
    QVBoxLayout *verticalLayout;
    QPushButton *szukaj_button;
    QComboBox *box_wybierz_urzadzenie;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QTextEdit *log_monitor;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLCDNumber *lcdNumber_VOLTAGE;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QLCDNumber *lcdNumber_4;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QScrollArea *camera0_place;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *camera1_place;
    QWidget *scrollAreaWidgetContents_2;
    QScrollArea *camera2_place;
    QWidget *scrollAreaWidgetContents_3;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QCheckBox *camera_0_check;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QCheckBox *camera_1_check;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QCheckBox *camera_2_check;
    QCheckBox *checkBox_lewaKrancowka;
    QCheckBox *checkBoxPrawaKrancowka;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(939, 796);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(939, 796));
        MainWindow->setMaximumSize(QSize(939, 796));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(320, 10, 349, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        polacz_button = new QPushButton(verticalLayoutWidget_2);
        polacz_button->setObjectName(QString::fromUtf8("polacz_button"));

        horizontalLayout->addWidget(polacz_button);

        rozlacz_button = new QPushButton(verticalLayoutWidget_2);
        rozlacz_button->setObjectName(QString::fromUtf8("rozlacz_button"));

        horizontalLayout->addWidget(rozlacz_button);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        szukaj_button = new QPushButton(verticalLayoutWidget_2);
        szukaj_button->setObjectName(QString::fromUtf8("szukaj_button"));

        verticalLayout->addWidget(szukaj_button);

        box_wybierz_urzadzenie = new QComboBox(verticalLayoutWidget_2);
        box_wybierz_urzadzenie->setObjectName(QString::fromUtf8("box_wybierz_urzadzenie"));

        verticalLayout->addWidget(box_wybierz_urzadzenie);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 120, 431, 331));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        log_monitor = new QTextEdit(verticalLayoutWidget_3);
        log_monitor->setObjectName(QString::fromUtf8("log_monitor"));

        verticalLayout_3->addWidget(log_monitor);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(490, 140, 401, 111));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        lcdNumber_VOLTAGE = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber_VOLTAGE->setObjectName(QString::fromUtf8("lcdNumber_VOLTAGE"));

        verticalLayout_4->addWidget(lcdNumber_VOLTAGE);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_6);

        lcdNumber_4 = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));

        verticalLayout_7->addWidget(lcdNumber_4);


        horizontalLayout_3->addLayout(verticalLayout_7);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(559, 380, 291, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_5->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_5->addWidget(pushButton_2);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(20, 540, 881, 211));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        camera0_place = new QScrollArea(horizontalLayoutWidget_4);
        camera0_place->setObjectName(QString::fromUtf8("camera0_place"));
        camera0_place->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 287, 207));
        camera0_place->setWidget(scrollAreaWidgetContents);

        horizontalLayout_6->addWidget(camera0_place);

        camera1_place = new QScrollArea(horizontalLayoutWidget_4);
        camera1_place->setObjectName(QString::fromUtf8("camera1_place"));
        camera1_place->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 287, 207));
        camera1_place->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_6->addWidget(camera1_place);

        camera2_place = new QScrollArea(horizontalLayoutWidget_4);
        camera2_place->setObjectName(QString::fromUtf8("camera2_place"));
        camera2_place->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 287, 207));
        camera2_place->setWidget(scrollAreaWidgetContents_3);

        horizontalLayout_6->addWidget(camera2_place);

        horizontalLayoutWidget_8 = new QWidget(centralwidget);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(20, 520, 881, 23));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_11 = new QLabel(horizontalLayoutWidget_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_11);

        camera_0_check = new QCheckBox(horizontalLayoutWidget_8);
        camera_0_check->setObjectName(QString::fromUtf8("camera_0_check"));

        horizontalLayout_7->addWidget(camera_0_check);


        horizontalLayout_10->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(horizontalLayoutWidget_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_8);

        camera_1_check = new QCheckBox(horizontalLayoutWidget_8);
        camera_1_check->setObjectName(QString::fromUtf8("camera_1_check"));

        horizontalLayout_9->addWidget(camera_1_check);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(horizontalLayoutWidget_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_7);

        camera_2_check = new QCheckBox(horizontalLayoutWidget_8);
        camera_2_check->setObjectName(QString::fromUtf8("camera_2_check"));

        horizontalLayout_8->addWidget(camera_2_check);


        horizontalLayout_10->addLayout(horizontalLayout_8);

        checkBox_lewaKrancowka = new QCheckBox(centralwidget);
        checkBox_lewaKrancowka->setObjectName(QString::fromUtf8("checkBox_lewaKrancowka"));
        checkBox_lewaKrancowka->setGeometry(QRect(489, 320, 101, 19));
        checkBoxPrawaKrancowka = new QCheckBox(centralwidget);
        checkBoxPrawaKrancowka->setObjectName(QString::fromUtf8("checkBoxPrawaKrancowka"));
        checkBoxPrawaKrancowka->setGeometry(QRect(770, 320, 111, 20));
        checkBoxPrawaKrancowka->setLayoutDirection(Qt::RightToLeft);
        checkBoxPrawaKrancowka->setCheckable(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 939, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ResSter V0.1.5", nullptr));
        label->setText(QApplication::translate("MainWindow", "Wybierz urz\304\205dzenie do sterowania:", nullptr));
        polacz_button->setText(QApplication::translate("MainWindow", "Po\305\202\304\205cz", nullptr));
        rozlacz_button->setText(QApplication::translate("MainWindow", "Roz\305\202\304\205cz", nullptr));
        szukaj_button->setText(QApplication::translate("MainWindow", "Szukaj urz\304\205dzenia", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Monitor zdarze\305\204:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "V", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "R3", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Zwi\304\231ksz op\303\263r", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Zmniejsz op\303\263r", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Camera 0", nullptr));
        camera_0_check->setText(QApplication::translate("MainWindow", "OFF", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Camera 1", nullptr));
        camera_1_check->setText(QApplication::translate("MainWindow", "OFF", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Camera 2", nullptr));
        camera_2_check->setText(QApplication::translate("MainWindow", "OFF", nullptr));
        checkBox_lewaKrancowka->setText(QApplication::translate("MainWindow", "Kra\305\204c\303\263wka lewa", nullptr));
        checkBoxPrawaKrancowka->setText(QApplication::translate("MainWindow", "Kra\305\204c\303\263wka prawa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
