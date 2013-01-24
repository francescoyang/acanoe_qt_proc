/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Nov 26 12:22:38 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *welcome;
    QWidget *ready_to_send;
    QLabel *label_2;
    QTableWidget *blue_list;
    QPushButton *send_ok;
    QPushButton *send_cancel;
    QWidget *login;
    QPushButton *User;
    QLineEdit *KeyEdit;
    QPushButton *pushButton;
    QWidget *widget_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QLabel *label;
    QWidget *desktop;
    QWidget *widget;
    QPushButton *web;
    QPushButton *game;
    QPushButton *wifi;
    QPushButton *video;
    QPushButton *up;
    QPushButton *blue;
    QWidget *blue_page;
    QPushButton *b_return;
    QPushButton *open_blue;
    QLabel *open_blue_label;
    QPushButton *sreach_blue;
    QPushButton *recv_file;
    QPushButton *send_file;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *close_blue_label;
    QWidget *sreach_blue_page;
    QPushButton *sreach_blude_return;
    QWidget *video_page;
    QPushButton *v_return;
    QPushButton *video_list;
    QPushButton *v_return_3;
    QPushButton *open_video;
    QPushButton *camera;
    QWidget *wifi_page;
    QPushButton *w_return;
    QPushButton *open_wifi;
    QPushButton *sreach_wifi;
    QPushButton *w_return_4;
    QPushButton *w_return_5;
    QLabel *close_blue_label_2;
    QLabel *close_blue_label_3;
    QLabel *close_blue_label_4;
    QLabel *close_blue_label_5;
    QWidget *up_page;
    QPushButton *u_return;
    QWidget *web_page;
    QPushButton *we_return;
    QWidget *game_page;
    QPushButton *g_return;
    QWidget *wifi_list;
    QPushButton *sreach_wifi_return;
    QWidget *status_bar;
    QLabel *flag_blue;
    QLabel *flag_wifi;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 272);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 479, 272));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        welcome = new QWidget();
        welcome->setObjectName(QString::fromUtf8("welcome"));
        welcome->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/ubuntu_wellcome.png);"));
        stackedWidget->addWidget(welcome);
        ready_to_send = new QWidget();
        ready_to_send->setObjectName(QString::fromUtf8("ready_to_send"));
        ready_to_send->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/desk_top.png);"));
        label_2 = new QLabel(ready_to_send);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 30, 371, 51));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/no.png);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;color: white;"));
        blue_list = new QTableWidget(ready_to_send);
        if (blue_list->rowCount() < 7)
            blue_list->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        blue_list->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        blue_list->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        blue_list->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        blue_list->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        blue_list->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        blue_list->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        blue_list->setVerticalHeaderItem(6, __qtablewidgetitem6);
        blue_list->setObjectName(QString::fromUtf8("blue_list"));
        blue_list->setGeometry(QRect(20, 90, 451, 111));
        blue_list->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/no.png);"));
        send_ok = new QPushButton(ready_to_send);
        send_ok->setObjectName(QString::fromUtf8("send_ok"));
        send_ok->setGeometry(QRect(150, 220, 71, 21));
        send_ok->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/no.png);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;color: white;"));
        send_ok->setFlat(true);
        send_cancel = new QPushButton(ready_to_send);
        send_cancel->setObjectName(QString::fromUtf8("send_cancel"));
        send_cancel->setGeometry(QRect(260, 220, 71, 21));
        send_cancel->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/no.png);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;color: white;"));
        send_cancel->setFlat(true);
        stackedWidget->addWidget(ready_to_send);
        login = new QWidget();
        login->setObjectName(QString::fromUtf8("login"));
        login->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/ubuntu_login.png);"));
        User = new QPushButton(login);
        User->setObjectName(QString::fromUtf8("User"));
        User->setGeometry(QRect(20, 130, 161, 41));
        QFont font;
        font.setPointSize(18);
        User->setFont(font);
        User->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/no.png);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;color: white;"));
        User->setFlat(true);
        KeyEdit = new QLineEdit(login);
        KeyEdit->setObjectName(QString::fromUtf8("KeyEdit"));
        KeyEdit->setGeometry(QRect(20, 180, 161, 41));
        QFont font1;
        font1.setPointSize(12);
        KeyEdit->setFont(font1);
        KeyEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/empty.png);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;color: white;"));
        KeyEdit->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 180, 40, 40));
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/login.png);"));
        pushButton->setFlat(true);
        widget_2 = new QWidget(login);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(230, 40, 231, 221));
        widget_2->setStyleSheet(QString::fromUtf8("background-image: url(:/home/no.png);"));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(141, 10, 41, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/4.png);\n"
"hover{background-color:blue;}\n"
"pressed{background:qlineargradient(x1:0,y1:0.5,x2:1,y2:0.5,stop:0 blue,stop:0.5 cyan stop: 1 darkcyan)}"));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 49, 41, 41));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/5.png);\n"
"hover{background-color:blue;}\n"
"pressed{background:qlineargradient(x1:0,y1:0.5,x2:1,y2:0.5,stop:0 blue,stop:0.5 cyan stop: 1 darkcyan)}"));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(59, 10, 41, 41));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/2.png);\n"
"hover{background-color:blue;}\n"
"pressed{background:qlineargradient(x1:0,y1:0.5,x2:1,y2:0.5,stop:0 blue,stop:0.5 cyan stop: 1 darkcyan)}"));
        pushButton_5 = new QPushButton(widget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(100, 0, 41, 41));
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/3.png);\n"
"hover{background-color:blue;}\n"
"pressed{background:qlineargradient(x1:0,y1:0.5,x2:1,y2:0.5,stop:0 blue,stop:0.5 cyan stop: 1 darkcyan)}"));
        pushButton_6 = new QPushButton(widget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(190, 90, 41, 41));
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/6.png);\n"
"hover{background-color:blue;}\n"
"pressed{background:qlineargradient(x1:0,y1:0.5,x2:1,y2:0.5,stop:0 blue,stop:0.5 cyan stop: 1 darkcyan)}"));
        pushButton_7 = new QPushButton(widget_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(180, 131, 41, 41));
        pushButton_7->setFont(font2);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/7.png);\n"
"hover{background-color:blue;}\n"
"pressed{background:qlineargradient(x1:0,y1:0.5,x2:1,y2:0.5,stop:0 blue,stop:0.5 cyan stop: 1 darkcyan)}"));
        pushButton_8 = new QPushButton(widget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 40, 41, 41));
        pushButton_8->setFont(font2);
        pushButton_8->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/1.png);\n"
"hover{background-color:blue;}\n"
"pressed{background:qlineargradient(x1:0,y1:0.5,x2:1,y2:0.5,stop:0 blue,stop:0.5 cyan stop: 1 darkcyan)}\n"
""));
        pushButton_9 = new QPushButton(widget_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(100, 180, 40, 40));
        pushButton_9->setFont(font2);
        pushButton_9->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/9.png);\n"
"hover{background-color:blue;}\n"
"pressed{background:qlineargradient(x1:0,y1:0.5,x2:1,y2:0.5,stop:0 blue,stop:0.5 cyan stop: 1 darkcyan)}"));
        pushButton_10 = new QPushButton(widget_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(59, 170, 40, 40));
        pushButton_10->setFont(font2);
        pushButton_10->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/0.png);\n"
"hover{background-color:blue;}\n"
"pressed{background:qlineargradient(x1:0,y1:0.5,x2:1,y2:0.5,stop:0 blue,stop:0.5 cyan stop: 1 darkcyan)}"));
        pushButton_11 = new QPushButton(widget_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(141, 170, 41, 41));
        pushButton_11->setFont(font2);
        pushButton_11->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/8.png);\n"
"hover{background-color:blue;}\n"
"pressed{background:qlineargradient(x1:0,y1:0.5,x2:1,y2:0.5,stop:0 blue,stop:0.5 cyan stop: 1 darkcyan)}"));
        pushButton_12 = new QPushButton(widget_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(10, 90, 40, 40));
        pushButton_12->setFont(font2);
        pushButton_12->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/0.png);\n"
"hover{background-color:blue;}\n"
"pressed{background:qlineargradient(x1:0,y1:0.5,x2:1,y2:0.5,stop:0 blue,stop:0.5 cyan stop: 1 darkcyan)}\n"
""));
        pushButton_13 = new QPushButton(widget_2);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(20, 131, 40, 40));
        pushButton_13->setFont(font2);
        pushButton_13->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/0.png);\n"
"hover{background-color:blue;}\n"
"pressed{background:qlineargradient(x1:0,y1:0.5,x2:1,y2:0.5,stop:0 blue,stop:0.5 cyan stop: 1 darkcyan)}"));
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 230, 161, 35));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/no.png);\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;color: white;"));
        stackedWidget->addWidget(login);
        desktop = new QWidget();
        desktop->setObjectName(QString::fromUtf8("desktop"));
        desktop->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/desk_top.png);"));
        widget = new QWidget(desktop);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 15, 41, 251));
        web = new QPushButton(widget);
        web->setObjectName(QString::fromUtf8("web"));
        web->setGeometry(QRect(0, 170, 40, 40));
        web->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/web.png);"));
        game = new QPushButton(widget);
        game->setObjectName(QString::fromUtf8("game"));
        game->setGeometry(QRect(0, 210, 40, 40));
        game->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/exit.png);"));
        wifi = new QPushButton(widget);
        wifi->setObjectName(QString::fromUtf8("wifi"));
        wifi->setGeometry(QRect(0, 90, 40, 40));
        wifi->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/wifi.png);"));
        video = new QPushButton(widget);
        video->setObjectName(QString::fromUtf8("video"));
        video->setGeometry(QRect(0, 50, 40, 40));
        video->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/video.png);"));
        up = new QPushButton(widget);
        up->setObjectName(QString::fromUtf8("up"));
        up->setGeometry(QRect(0, 130, 40, 40));
        up->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/up.png);"));
        blue = new QPushButton(widget);
        blue->setObjectName(QString::fromUtf8("blue"));
        blue->setGeometry(QRect(0, 10, 40, 40));
        blue->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/blue.png);"));
        stackedWidget->addWidget(desktop);
        blue_page = new QWidget();
        blue_page->setObjectName(QString::fromUtf8("blue_page"));
        blue_page->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/desk_top.png);"));
        b_return = new QPushButton(blue_page);
        b_return->setObjectName(QString::fromUtf8("b_return"));
        b_return->setGeometry(QRect(420, 210, 40, 40));
        b_return->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/return.png);"));
        b_return->setFlat(true);
        open_blue = new QPushButton(blue_page);
        open_blue->setObjectName(QString::fromUtf8("open_blue"));
        open_blue->setGeometry(QRect(40, 60, 40, 37));
        open_blue->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/blue.png);\n"
"border:red;border-radius:10px;padding:2px 4px;color: white;"));
        open_blue_label = new QLabel(blue_page);
        open_blue_label->setObjectName(QString::fromUtf8("open_blue_label"));
        open_blue_label->setGeometry(QRect(30, 110, 71, 21));
        open_blue_label->setStyleSheet(QString::fromUtf8("padding:2px 4px;color: white;"));
        sreach_blue = new QPushButton(blue_page);
        sreach_blue->setObjectName(QString::fromUtf8("sreach_blue"));
        sreach_blue->setGeometry(QRect(140, 60, 40, 40));
        sreach_blue->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/sreach_blue.png);\n"
"border:red;border-radius:10px;padding:2px 4px;color: white;"));
        recv_file = new QPushButton(blue_page);
        recv_file->setObjectName(QString::fromUtf8("recv_file"));
        recv_file->setGeometry(QRect(380, 60, 40, 40));
        recv_file->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/recv_file.png);\n"
"border:red;border-radius:10px;padding:2px 4px;color: white;"));
        send_file = new QPushButton(blue_page);
        send_file->setObjectName(QString::fromUtf8("send_file"));
        send_file->setGeometry(QRect(290, 60, 40, 40));
        send_file->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/send_file.png);\n"
"border:red;border-radius:10px;padding:2px 4px;color: white;"));
        label_4 = new QLabel(blue_page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 110, 71, 21));
        label_4->setStyleSheet(QString::fromUtf8("padding:2px 4px;color: white;\n"
"background-color: rgba(255, 255, 255, 0%);"));
        label_5 = new QLabel(blue_page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 110, 71, 21));
        label_5->setStyleSheet(QString::fromUtf8("padding:2px 4px;color: white;\n"
"background-color: rgba(255, 255, 255, 100%);"));
        label_6 = new QLabel(blue_page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 110, 71, 21));
        label_6->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(255, 255, 255, 0%);\n"
"padding:2px 4px;color: white;"));
        close_blue_label = new QLabel(blue_page);
        close_blue_label->setObjectName(QString::fromUtf8("close_blue_label"));
        close_blue_label->setGeometry(QRect(30, 110, 71, 21));
        close_blue_label->setStyleSheet(QString::fromUtf8("padding:2px 4px;color: white;"));
        stackedWidget->addWidget(blue_page);
        sreach_blue_page = new QWidget();
        sreach_blue_page->setObjectName(QString::fromUtf8("sreach_blue_page"));
        sreach_blude_return = new QPushButton(sreach_blue_page);
        sreach_blude_return->setObjectName(QString::fromUtf8("sreach_blude_return"));
        sreach_blude_return->setGeometry(QRect(410, 200, 40, 40));
        sreach_blude_return->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/return.png);"));
        sreach_blude_return->setFlat(true);
        stackedWidget->addWidget(sreach_blue_page);
        video_page = new QWidget();
        video_page->setObjectName(QString::fromUtf8("video_page"));
        video_page->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/desk_top.png);"));
        v_return = new QPushButton(video_page);
        v_return->setObjectName(QString::fromUtf8("v_return"));
        v_return->setGeometry(QRect(420, 210, 40, 40));
        v_return->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/return.png);"));
        v_return->setFlat(true);
        video_list = new QPushButton(video_page);
        video_list->setObjectName(QString::fromUtf8("video_list"));
        video_list->setGeometry(QRect(50, 150, 40, 40));
        video_list->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/video_list.png);"));
        video_list->setFlat(true);
        v_return_3 = new QPushButton(video_page);
        v_return_3->setObjectName(QString::fromUtf8("v_return_3"));
        v_return_3->setGeometry(QRect(140, 150, 40, 40));
        v_return_3->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/return.png);"));
        v_return_3->setFlat(true);
        open_video = new QPushButton(video_page);
        open_video->setObjectName(QString::fromUtf8("open_video"));
        open_video->setGeometry(QRect(50, 60, 40, 40));
        open_video->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/open_video.png);"));
        open_video->setFlat(true);
        camera = new QPushButton(video_page);
        camera->setObjectName(QString::fromUtf8("camera"));
        camera->setGeometry(QRect(140, 60, 40, 40));
        camera->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/return.png);"));
        camera->setFlat(true);
        stackedWidget->addWidget(video_page);
        wifi_page = new QWidget();
        wifi_page->setObjectName(QString::fromUtf8("wifi_page"));
        wifi_page->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/desk_top.png);"));
        w_return = new QPushButton(wifi_page);
        w_return->setObjectName(QString::fromUtf8("w_return"));
        w_return->setGeometry(QRect(420, 210, 40, 40));
        w_return->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/return.png);"));
        w_return->setFlat(true);
        open_wifi = new QPushButton(wifi_page);
        open_wifi->setObjectName(QString::fromUtf8("open_wifi"));
        open_wifi->setGeometry(QRect(50, 60, 40, 40));
        open_wifi->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/open_wifi.png);"));
        open_wifi->setFlat(true);
        sreach_wifi = new QPushButton(wifi_page);
        sreach_wifi->setObjectName(QString::fromUtf8("sreach_wifi"));
        sreach_wifi->setGeometry(QRect(150, 60, 40, 40));
        sreach_wifi->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/sreach_wifi.png);"));
        sreach_wifi->setFlat(true);
        w_return_4 = new QPushButton(wifi_page);
        w_return_4->setObjectName(QString::fromUtf8("w_return_4"));
        w_return_4->setGeometry(QRect(50, 140, 40, 40));
        w_return_4->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/return.png);"));
        w_return_4->setFlat(true);
        w_return_5 = new QPushButton(wifi_page);
        w_return_5->setObjectName(QString::fromUtf8("w_return_5"));
        w_return_5->setGeometry(QRect(150, 140, 40, 40));
        w_return_5->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/return.png);"));
        w_return_5->setFlat(true);
        close_blue_label_2 = new QLabel(wifi_page);
        close_blue_label_2->setObjectName(QString::fromUtf8("close_blue_label_2"));
        close_blue_label_2->setGeometry(QRect(40, 110, 71, 21));
        close_blue_label_2->setStyleSheet(QString::fromUtf8("padding:2px 4px;color: white;"));
        close_blue_label_3 = new QLabel(wifi_page);
        close_blue_label_3->setObjectName(QString::fromUtf8("close_blue_label_3"));
        close_blue_label_3->setGeometry(QRect(130, 110, 71, 21));
        close_blue_label_3->setStyleSheet(QString::fromUtf8("padding:2px 4px;color: white;"));
        close_blue_label_4 = new QLabel(wifi_page);
        close_blue_label_4->setObjectName(QString::fromUtf8("close_blue_label_4"));
        close_blue_label_4->setGeometry(QRect(40, 190, 71, 21));
        close_blue_label_4->setStyleSheet(QString::fromUtf8("padding:2px 4px;color: white;"));
        close_blue_label_5 = new QLabel(wifi_page);
        close_blue_label_5->setObjectName(QString::fromUtf8("close_blue_label_5"));
        close_blue_label_5->setGeometry(QRect(140, 190, 71, 21));
        close_blue_label_5->setStyleSheet(QString::fromUtf8("padding:2px 4px;color: white;"));
        stackedWidget->addWidget(wifi_page);
        up_page = new QWidget();
        up_page->setObjectName(QString::fromUtf8("up_page"));
        up_page->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/desk_top.png);"));
        u_return = new QPushButton(up_page);
        u_return->setObjectName(QString::fromUtf8("u_return"));
        u_return->setGeometry(QRect(420, 210, 40, 40));
        u_return->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/return.png);"));
        u_return->setFlat(true);
        stackedWidget->addWidget(up_page);
        web_page = new QWidget();
        web_page->setObjectName(QString::fromUtf8("web_page"));
        web_page->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/desk_top.png);"));
        we_return = new QPushButton(web_page);
        we_return->setObjectName(QString::fromUtf8("we_return"));
        we_return->setGeometry(QRect(420, 210, 40, 40));
        we_return->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/return.png);"));
        we_return->setFlat(true);
        stackedWidget->addWidget(web_page);
        game_page = new QWidget();
        game_page->setObjectName(QString::fromUtf8("game_page"));
        game_page->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/desk_top.png);"));
        g_return = new QPushButton(game_page);
        g_return->setObjectName(QString::fromUtf8("g_return"));
        g_return->setGeometry(QRect(420, 210, 40, 40));
        g_return->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/return.png);"));
        g_return->setFlat(true);
        stackedWidget->addWidget(game_page);
        wifi_list = new QWidget();
        wifi_list->setObjectName(QString::fromUtf8("wifi_list"));
        sreach_wifi_return = new QPushButton(wifi_list);
        sreach_wifi_return->setObjectName(QString::fromUtf8("sreach_wifi_return"));
        sreach_wifi_return->setGeometry(QRect(420, 210, 40, 40));
        sreach_wifi_return->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/return.png);"));
        sreach_wifi_return->setFlat(true);
        stackedWidget->addWidget(wifi_list);
        status_bar = new QWidget(centralWidget);
        status_bar->setObjectName(QString::fromUtf8("status_bar"));
        status_bar->setGeometry(QRect(0, 0, 478, 25));
        status_bar->setStyleSheet(QString::fromUtf8("border:2px groove gray;border-radius:2px;padding:2px 4px;color: white;\n"
"background-color:gray;\n"
"background-color: rgba(255, 255, 255, 60%);\n"
""));
        flag_blue = new QLabel(status_bar);
        flag_blue->setObjectName(QString::fromUtf8("flag_blue"));
        flag_blue->setGeometry(QRect(450, 4, 20, 20));
        flag_blue->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/flag_blue.png);\n"
"border:red;border-radius:10px;padding:2px 4px;color: white;\n"
"background-color:gray;\n"
"background-color: rgba(255, 255, 255, 60%);"));
        flag_wifi = new QLabel(status_bar);
        flag_wifi->setObjectName(QString::fromUtf8("flag_wifi"));
        flag_wifi->setGeometry(QRect(420, 4, 20, 20));
        flag_wifi->setStyleSheet(QString::fromUtf8("background-image: url(:/home/image/wifi_flag.png);\n"
"border:red;border-radius:10px;padding:2px 4px;color: white;\n"
"background-color:gray;\n"
"background-color: rgba(255, 255, 255, 60%);"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\350\223\235\347\211\231\345\267\262\346\211\223\345\274\200\357\274\214\346\255\243\345\234\250\346\220\234\347\264\242\350\223\235\347\211\231\350\256\276\345\244\207\343\200\202\343\200\202\343\200\202\343\200\202\343\200\202\343\200\202", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = blue_list->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = blue_list->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = blue_list->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = blue_list->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = blue_list->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = blue_list->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = blue_list->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        send_ok->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        send_cancel->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        User->setText(QApplication::translate("MainWindow", "Acanoe", 0, QApplication::UnicodeUTF8));
        KeyEdit->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        label->setText(QApplication::translate("MainWindow", "the passwd is wrong !", 0, QApplication::UnicodeUTF8));
        web->setText(QString());
        game->setText(QString());
        wifi->setText(QString());
        video->setText(QString());
        up->setText(QString());
        blue->setText(QString());
        b_return->setText(QString());
        open_blue->setText(QString());
        open_blue_label->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\350\223\235\347\211\231", 0, QApplication::UnicodeUTF8));
        sreach_blue->setText(QString());
        recv_file->setText(QString());
        send_file->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242\350\223\235\347\211\231", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\346\216\245\346\224\266\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        close_blue_label->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\350\223\235\347\211\231", 0, QApplication::UnicodeUTF8));
        sreach_blude_return->setText(QString());
        v_return->setText(QString());
        video_list->setText(QString());
        v_return_3->setText(QString());
        open_video->setText(QString());
        camera->setText(QString());
        w_return->setText(QString());
        open_wifi->setText(QString());
        sreach_wifi->setText(QString());
        w_return_4->setText(QString());
        w_return_5->setText(QString());
        close_blue_label_2->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200wifi", 0, QApplication::UnicodeUTF8));
        close_blue_label_3->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242wifi", 0, QApplication::UnicodeUTF8));
        close_blue_label_4->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\350\223\235\347\211\231", 0, QApplication::UnicodeUTF8));
        close_blue_label_5->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\350\223\235\347\211\231", 0, QApplication::UnicodeUTF8));
        u_return->setText(QString());
        we_return->setText(QString());
        g_return->setText(QString());
        sreach_wifi_return->setText(QString());
        flag_blue->setText(QString());
        flag_wifi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
