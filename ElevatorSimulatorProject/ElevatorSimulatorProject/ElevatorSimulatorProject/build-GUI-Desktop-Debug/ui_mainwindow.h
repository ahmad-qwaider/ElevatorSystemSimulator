/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *Console;
    QLabel *label;
    QFrame *line;
    QWidget *widget_2;
    QWidget *widget_9;
    QWidget *widget_10;
    QWidget *widget_11;
    QWidget *widget_6;
    QWidget *widget_12;
    QWidget *widget_14;
    QWidget *widget_15;
    QWidget *widget_17;
    QWidget *widget_18;
    QWidget *widget_19;
    QWidget *widget_13;
    QWidget *widget_20;
    QWidget *widget_21;
    QWidget *widget_22;
    QWidget *widget_23;
    QWidget *widget_24;
    QWidget *widget_25;
    QWidget *widget_28;
    QWidget *widget_29;
    QWidget *widget_30;
    QWidget *widget_32;
    QWidget *widget_33;
    QLabel *label_3;
    QWidget *widget_36;
    QLabel *label_29;
    QComboBox *ElevatorNumber;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *ringButton;
    QPushButton *helpButton;
    QPushButton *openDoorButton;
    QPushButton *closeDoorButton;
    QTextBrowser *elevatorFloorView;
    QLabel *label_2;
    QWidget *widget;
    QLabel *label_7;
    QLabel *label_8;
    QTextEdit *WeightInput;
    QLabel *label_21;
    QPushButton *WeightTestButton;
    QWidget *widget_4;
    QPushButton *fireButton;
    QLabel *label_23;
    QPushButton *powerOuttageButton;
    QPushButton *doorObstacleButton;
    QPushButton *respondToHelpButton;
    QWidget *widget_7;
    QLabel *label_24;
    QLabel *label_25;
    QWidget *widget_35;
    QPushButton *UpButton;
    QPushButton *DownButton;
    QComboBox *FloorNumber;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(874, 467);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Console = new QTextBrowser(centralwidget);
        Console->setObjectName(QString::fromUtf8("Console"));
        Console->setGeometry(QRect(70, 325, 291, 111));
        Console->setAutoFillBackground(false);
        Console->setStyleSheet(QString::fromUtf8(""));
        Console->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 295, 92, 24));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(50, 275, 331, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(400, 25, 201, 411));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));
        widget_9 = new QWidget(widget_2);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(120, 150, 4, 4));
        widget_9->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_10 = new QWidget(widget_2);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setGeometry(QRect(110, 120, 4, 4));
        widget_10->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_11 = new QWidget(widget_2);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setGeometry(QRect(90, 120, 4, 4));
        widget_11->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(110, 130, 4, 4));
        widget_6->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_12 = new QWidget(widget_2);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setGeometry(QRect(120, 130, 4, 4));
        widget_12->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_14 = new QWidget(widget_2);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setGeometry(QRect(100, 130, 4, 4));
        widget_14->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_15 = new QWidget(widget_2);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setGeometry(QRect(80, 130, 4, 4));
        widget_15->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_17 = new QWidget(widget_2);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        widget_17->setGeometry(QRect(90, 140, 4, 4));
        widget_17->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_18 = new QWidget(widget_2);
        widget_18->setObjectName(QString::fromUtf8("widget_18"));
        widget_18->setGeometry(QRect(80, 140, 4, 4));
        widget_18->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_19 = new QWidget(widget_2);
        widget_19->setObjectName(QString::fromUtf8("widget_19"));
        widget_19->setGeometry(QRect(100, 120, 4, 4));
        widget_19->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_13 = new QWidget(widget_2);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setGeometry(QRect(90, 150, 4, 4));
        widget_13->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_20 = new QWidget(widget_2);
        widget_20->setObjectName(QString::fromUtf8("widget_20"));
        widget_20->setGeometry(QRect(120, 140, 4, 4));
        widget_20->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_21 = new QWidget(widget_2);
        widget_21->setObjectName(QString::fromUtf8("widget_21"));
        widget_21->setGeometry(QRect(110, 140, 4, 4));
        widget_21->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_22 = new QWidget(widget_2);
        widget_22->setObjectName(QString::fromUtf8("widget_22"));
        widget_22->setGeometry(QRect(80, 150, 4, 4));
        widget_22->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_23 = new QWidget(widget_2);
        widget_23->setObjectName(QString::fromUtf8("widget_23"));
        widget_23->setGeometry(QRect(100, 140, 4, 4));
        widget_23->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_24 = new QWidget(widget_2);
        widget_24->setObjectName(QString::fromUtf8("widget_24"));
        widget_24->setGeometry(QRect(110, 150, 4, 4));
        widget_24->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_25 = new QWidget(widget_2);
        widget_25->setObjectName(QString::fromUtf8("widget_25"));
        widget_25->setGeometry(QRect(100, 150, 4, 4));
        widget_25->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_28 = new QWidget(widget_2);
        widget_28->setObjectName(QString::fromUtf8("widget_28"));
        widget_28->setGeometry(QRect(100, 160, 4, 4));
        widget_28->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_29 = new QWidget(widget_2);
        widget_29->setObjectName(QString::fromUtf8("widget_29"));
        widget_29->setGeometry(QRect(110, 160, 4, 4));
        widget_29->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_30 = new QWidget(widget_2);
        widget_30->setObjectName(QString::fromUtf8("widget_30"));
        widget_30->setGeometry(QRect(80, 160, 3, 3));
        widget_30->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_32 = new QWidget(widget_2);
        widget_32->setObjectName(QString::fromUtf8("widget_32"));
        widget_32->setGeometry(QRect(120, 120, 3, 4));
        widget_32->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        widget_33 = new QWidget(widget_2);
        widget_33->setObjectName(QString::fromUtf8("widget_33"));
        widget_33->setGeometry(QRect(80, 120, 3, 4));
        widget_33->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(77, 283, 9, 17));
        widget_36 = new QWidget(widget_2);
        widget_36->setObjectName(QString::fromUtf8("widget_36"));
        widget_36->setGeometry(QRect(90, 160, 4, 4));
        widget_36->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"background-color: black; /* Optional: setting a background color */\n"
""));
        label_29 = new QLabel(widget_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(26, 75, 86, 19));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_29->setFont(font1);
        ElevatorNumber = new QComboBox(widget_2);
        ElevatorNumber->setObjectName(QString::fromUtf8("ElevatorNumber"));
        ElevatorNumber->setGeometry(QRect(120, 74, 41, 25));
        pushButton_6 = new QPushButton(widget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(70, 190, 23, 23));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 11px;\n"
"   border: 1px solid black; \n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_6->setCheckable(true);
        pushButton_7 = new QPushButton(widget_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setEnabled(true);
        pushButton_7->setGeometry(QRect(100, 190, 23, 23));
        pushButton_7->setAcceptDrops(false);
        pushButton_7->setAutoFillBackground(false);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 11px;\n"
"   border: 1px solid black; \n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        pushButton_7->setCheckable(true);
        pushButton_7->setChecked(false);
        pushButton_7->setFlat(false);
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(70, 220, 23, 23));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 11px;\n"
"   border: 1px solid black; \n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_4->setCheckable(true);
        pushButton_5 = new QPushButton(widget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(100, 220, 23, 23));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 11px;\n"
"   border: 1px solid black; \n"
"}\n"
"\n"
"\n"
""));
        pushButton_5->setCheckable(true);
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 250, 23, 23));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 11px;\n"
"   border: 1px solid black; \n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        pushButton_2->setCheckable(true);
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 250, 23, 23));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 11px;\n"
"   border: 1px solid black; \n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        pushButton_3->setCheckable(true);
        pushButton_0 = new QPushButton(widget_2);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(70, 280, 23, 23));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 11px;\n"
"   border: 1px solid black; \n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_0->setCheckable(true);
        pushButton_1 = new QPushButton(widget_2);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(100, 280, 23, 23));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-radius: 11px;\n"
"   border: 1px solid black; \n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_1->setCheckable(true);
        ringButton = new QPushButton(widget_2);
        ringButton->setObjectName(QString::fromUtf8("ringButton"));
        ringButton->setGeometry(QRect(70, 310, 23, 23));
        ringButton->setStyleSheet(QString::fromUtf8("border-radius: 11px;\n"
"border: 1px solid black; \n"
"background-color: #fbff00\n"
";\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../home/student/Downloads/bell.png"), QSize(), QIcon::Normal, QIcon::Off);
        ringButton->setIcon(icon);
        ringButton->setIconSize(QSize(13, 13));
        helpButton = new QPushButton(widget_2);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(100, 310, 23, 23));
        helpButton->setStyleSheet(QString::fromUtf8("border-radius: 11px;\n"
"border: 1px solid black; \n"
"background-color: red\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../home/student/Downloads/phone-call.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon1);
        helpButton->setIconSize(QSize(13, 13));
        openDoorButton = new QPushButton(widget_2);
        openDoorButton->setObjectName(QString::fromUtf8("openDoorButton"));
        openDoorButton->setGeometry(QRect(63, 350, 28, 28));
        openDoorButton->setStyleSheet(QString::fromUtf8("border-radius: 14px;\n"
"border: 1px solid black; \n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../home/student/Downloads/elevator-buttons (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        openDoorButton->setIcon(icon2);
        openDoorButton->setIconSize(QSize(20, 20));
        closeDoorButton = new QPushButton(widget_2);
        closeDoorButton->setObjectName(QString::fromUtf8("closeDoorButton"));
        closeDoorButton->setGeometry(QRect(105, 350, 28, 28));
        closeDoorButton->setStyleSheet(QString::fromUtf8("border-radius: 14px;\n"
"border: 1px solid black; \n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../home/student/Downloads/elevator-buttons (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        closeDoorButton->setIcon(icon3);
        closeDoorButton->setIconSize(QSize(18, 18));
        elevatorFloorView = new QTextBrowser(widget_2);
        elevatorFloorView->setObjectName(QString::fromUtf8("elevatorFloorView"));
        elevatorFloorView->setGeometry(QRect(40, 20, 120, 40));
        elevatorFloorView->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 110, 60, 60));
        label_2->setStyleSheet(QString::fromUtf8("border-radius: 30px; \n"
"border: 1px solid black; \n"
"\n"
""));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../home/student/Downloads/circle-with-rhombs-pattern.png")));
        label_2->setScaledContents(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(600, 25, 211, 161));
        widget->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"\n"
""));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 10, 151, 17));
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_7->setFont(font2);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 40, 121, 17));
        WeightInput = new QTextEdit(widget);
        WeightInput->setObjectName(QString::fromUtf8("WeightInput"));
        WeightInput->setGeometry(QRect(140, 40, 61, 21));
        WeightInput->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        WeightInput->setUndoRedoEnabled(true);
        label_21 = new QLabel(widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 70, 184, 17));
        label_21->setStyleSheet(QString::fromUtf8("color: red/* This is also yellow */\n"
""));
        WeightTestButton = new QPushButton(widget);
        WeightTestButton->setObjectName(QString::fromUtf8("WeightTestButton"));
        WeightTestButton->setGeometry(QRect(50, 100, 111, 25));
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(601, 186, 211, 251));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));
        fireButton = new QPushButton(widget_4);
        fireButton->setObjectName(QString::fromUtf8("fireButton"));
        fireButton->setGeometry(QRect(30, 60, 141, 25));
        label_23 = new QLabel(widget_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(20, 10, 171, 19));
        label_23->setFont(font2);
        powerOuttageButton = new QPushButton(widget_4);
        powerOuttageButton->setObjectName(QString::fromUtf8("powerOuttageButton"));
        powerOuttageButton->setGeometry(QRect(30, 100, 141, 25));
        doorObstacleButton = new QPushButton(widget_4);
        doorObstacleButton->setObjectName(QString::fromUtf8("doorObstacleButton"));
        doorObstacleButton->setGeometry(QRect(30, 140, 141, 25));
        respondToHelpButton = new QPushButton(widget_4);
        respondToHelpButton->setObjectName(QString::fromUtf8("respondToHelpButton"));
        respondToHelpButton->setGeometry(QRect(30, 180, 141, 25));
        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(110, 50, 191, 221));
        widget_7->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));
        label_24 = new QLabel(widget_7);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 10, 171, 19));
        label_24->setFont(font2);
        label_24->setLayoutDirection(Qt::LeftToRight);
        label_24->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(widget_7);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(30, 50, 72, 19));
        label_25->setFont(font1);
        widget_35 = new QWidget(widget_7);
        widget_35->setObjectName(QString::fromUtf8("widget_35"));
        widget_35->setGeometry(QRect(70, 110, 51, 91));
        widget_35->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));
        UpButton = new QPushButton(widget_35);
        UpButton->setObjectName(QString::fromUtf8("UpButton"));
        UpButton->setGeometry(QRect(11, 10, 28, 28));
        UpButton->setStyleSheet(QString::fromUtf8("border-radius: 14px;\n"
"border: 1px solid black; \n"
"\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../home/student/Downloads/arrow (3).png"), QSize(), QIcon::Normal, QIcon::Off);
        UpButton->setIcon(icon4);
        DownButton = new QPushButton(widget_35);
        DownButton->setObjectName(QString::fromUtf8("DownButton"));
        DownButton->setGeometry(QRect(11, 50, 28, 28));
        DownButton->setStyleSheet(QString::fromUtf8("border-radius: 14px;\n"
"border: 1px solid black; \n"
"\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../../home/student/Downloads/arrow (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        DownButton->setIcon(icon5);
        FloorNumber = new QComboBox(widget_7);
        FloorNumber->setObjectName(QString::fromUtf8("FloorNumber"));
        FloorNumber->setGeometry(QRect(120, 50, 41, 25));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 874, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Console ", nullptr));
        label_3->setText(QString());
        label_29->setText(QCoreApplication::translate("MainWindow", "Elevator#:", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        ringButton->setText(QString());
        helpButton->setText(QString());
        openDoorButton->setText(QString());
        closeDoorButton->setText(QString());
        elevatorFloorView->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; color:#3584e4;\">0</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Max Weight Test", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Total Weight (kg):  ", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Max Elevator Weight: 500kg", nullptr));
        WeightTestButton->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        fireButton->setText(QCoreApplication::translate("MainWindow", "Fire", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Emergency Testing", nullptr));
        powerOuttageButton->setText(QCoreApplication::translate("MainWindow", "Power Outage", nullptr));
        doorObstacleButton->setText(QCoreApplication::translate("MainWindow", "Door Obstacle", nullptr));
        respondToHelpButton->setText(QCoreApplication::translate("MainWindow", " Respond to Help ", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Floor Panel", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Floor#: ", nullptr));
        UpButton->setText(QString());
        DownButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
