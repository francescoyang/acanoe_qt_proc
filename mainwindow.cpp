#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    ui->label->setHidden(true);
    ui->status_bar->setHidden(true);
    ui->flag_blue->setHidden(true);
    ui->close_blue_label->setHidden(true);
    flags_blue_num = false;

    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint);
    setAttribute(Qt::WA_TranslucentBackground);


    setStyleSheet(
                  /*"QPushButton{border:groove gray;border-radius:10px;padding:2px 4px;}"
                  "QPushButton{ color: white;}"
                  /*"QPushButton{background-color:pink; color: white;}"*/
                            "QPushButton:hover{background-color:green;}"
                            "QPushButton:pressed{background:qlineargradient(x1:0,y1:0.5,x2:1,y2:0.5,"
                            "stop:0 green,stop:0.5 cyan stop: 1 darkcyan)}");

    /* "QLineEdit{border:2px groove gray;border-radius:10px;padding:2px 4px;color: white;}"*/
    /* "QLabel{border:2px groove gray;border-radius:10px;padding:2px 4px;color: white;}"*/
    /*"QPushButton{border:2px groove gray;border-radius:10px;padding:2px 4px;}" */

    setFocusPolicy(Qt::NoFocus);

    wait_5s();
    ControlQwidgetHide(WELCOME);


    connect(this,SIGNAL(Signal_GUI_Welcome(int)),this,SLOT(SetGuiWelcome(int)));
    connect(this,SIGNAL(btn_1_sig()),this,SLOT(btn_1()));
    connect(this,SIGNAL(btn_2_sig()),this,SLOT(btn_2()));
    connect(this,SIGNAL(btn_3_sig()),this,SLOT(btn_3()));
    connect(this,SIGNAL(btn_4_sig()),this,SLOT(btn_4()));
    connect(this,SIGNAL(btn_5_sig()),this,SLOT(btn_5()));
    connect(this,SIGNAL(btn_6_sig()),this,SLOT(btn_6()));
    connect(this,SIGNAL(btn_7_sig()),this,SLOT(btn_7()));
    connect(this,SIGNAL(btn_8_sig()),this,SLOT(btn_8()));
    connect(this,SIGNAL(btn_9_sig()),this,SLOT(btn_9()));
    connect(this,SIGNAL(btn_0_sig()),this,SLOT(btn_0()));
    connect(this,SIGNAL(btn_clean_sig()),this,SLOT(btn_clean()));
    connect(this,SIGNAL(btn_back_sig()),this,SLOT(btn_back()));





    /* setStyleSheet("QPushButton {border-image:url(pic/border-image.jpg); font-size:24px;} \
       QPushButton:hover:pressed {border-image:url(pic/pressed.jpg);font-size:24px;} \
       QPushButton:hover:!pressed {border-image:url(pic/hover.jpg);font-size:24px;} ");
       */

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ControlQwidgetHide(int WidgetType)
{
    switch(WidgetType)
    {
        case WELCOME:
            ui->stackedWidget->QStackedWidget::setCurrentWidget(ui->welcome);
            break;
        case LOGIN:
            ui->stackedWidget->QStackedWidget::setCurrentWidget(ui->login);
            break;
        case DESKTOP:
            ui->stackedWidget->QStackedWidget::setCurrentWidget(ui->desktop);
            ui->status_bar->setHidden(false);
            break;
        case BLUE:
            ui->stackedWidget->QStackedWidget::setCurrentWidget(ui->blue_page);
            break;
        case VIDEO:
            ui->stackedWidget->QStackedWidget::setCurrentWidget(ui->video_page);
            break;
        case WIFI:
            ui->stackedWidget->QStackedWidget::setCurrentWidget(ui->wifi_page);
            break;
        case UP:
            ui->stackedWidget->QStackedWidget::setCurrentWidget(ui->up_page);
            break;
        case WEB:
            ui->stackedWidget->QStackedWidget::setCurrentWidget(ui->web_page);
            break;
        case GAME:
            ui->stackedWidget->QStackedWidget::setCurrentWidget(ui->game_page);
            break;
        case SREACH_WIFI:
            ui->stackedWidget->QStackedWidget::setCurrentWidget(ui->wifi_list);
            break;
        case READY_TO_SEND:
            ui->stackedWidget->QStackedWidget::setCurrentWidget(ui->ready_to_send);
            break;
        case SREACH_BLUE_PAGE:
            ui->stackedWidget->QStackedWidget::setCurrentWidget(ui->sreach_blue_page);
            break;
    }
}

void MainWindow::SetGuiWelcome(int itemp)
{
    switch(itemp)
    {
        case WELCOME:
            ControlQwidgetHide(WELCOME);
            break;
        case LOGIN:
            ControlQwidgetHide(LOGIN);
            break;
    }

}


void MainWindow::wait_5s()
{
   m_GUItimer = new QTimer(this);
   m_GUItimer->setInterval(3000);
   connect(m_GUItimer, SIGNAL(timeout()), this, SLOT(timeGUIEvent()));
   m_GUItimer->start();
}

void MainWindow::timeGUIEvent()
{
    m_GUItimer->stop();
    emit Signal_GUI_Welcome(1);

}

void MainWindow::on_pushButton_clicked()
{
    if(ui->KeyEdit->text()==tr("1"))
    {
        //emit btn1_clicked();
        //aa =1;
        //close();
        ControlQwidgetHide(DESKTOP);

    }
    else{
         ui->label->setHidden(false);
    }
    ui->KeyEdit->setText("");
}

void MainWindow::passwd_info()
{
    ui->label->setHidden(true);
}

void MainWindow::on_blue_clicked()
{
    ControlQwidgetHide(BLUE);
}



void MainWindow::on_video_clicked()
{
    ControlQwidgetHide(VIDEO);
}

void MainWindow::on_wifi_clicked()
{
    ControlQwidgetHide(WIFI);
}

void MainWindow::on_up_clicked()
{
    ControlQwidgetHide(UP);
}

void MainWindow::on_web_clicked()
{
    ControlQwidgetHide(WEB);
}

void MainWindow::on_game_clicked()
{
    ControlQwidgetHide(LOGIN);
    ui->status_bar->setHidden(true);
}

void MainWindow::on_w_return_clicked()
{
    ControlQwidgetHide(DESKTOP);
}

void MainWindow::on_v_return_clicked()
{
    ControlQwidgetHide(DESKTOP);
}

void MainWindow::on_u_return_clicked()
{
    ControlQwidgetHide(DESKTOP);
}

void MainWindow::on_we_return_clicked()
{
    ControlQwidgetHide(DESKTOP);
}

void MainWindow::on_g_return_clicked()
{
    ControlQwidgetHide(DESKTOP);
}


void MainWindow::on_b_return_clicked()
{
    ControlQwidgetHide(DESKTOP);
}

void MainWindow::btn_1()
{
         ui->KeyEdit->setText(ui->KeyEdit->text()+QString::number(1));
         passwd_info();
}

void MainWindow::btn_2()
{
         ui->KeyEdit->setText(ui->KeyEdit->text()+QString::number(2));
         passwd_info();
}
void MainWindow::btn_3()
{
         ui->KeyEdit->setText(ui->KeyEdit->text()+QString::number(3));
         passwd_info();
}
void MainWindow::btn_4()
{
         ui->KeyEdit->setText(ui->KeyEdit->text()+QString::number(4));
         passwd_info();
}
void MainWindow::btn_5()
{
         ui->KeyEdit->setText(ui->KeyEdit->text()+QString::number(5));
         passwd_info();
}
void MainWindow::btn_6()
{
         ui->KeyEdit->setText(ui->KeyEdit->text()+QString::number(6));
         passwd_info();
}
void MainWindow::btn_7()
{
         ui->KeyEdit->setText(ui->KeyEdit->text()+QString::number(7));
         passwd_info();
}
void MainWindow::btn_8()
{
         ui->KeyEdit->setText(ui->KeyEdit->text()+QString::number(8));
         passwd_info();
}
void MainWindow::btn_9()
{
         ui->KeyEdit->setText(ui->KeyEdit->text()+QString::number(9));
         passwd_info();
}
void MainWindow::btn_0()
{
         ui->KeyEdit->setText(ui->KeyEdit->text()+QString::number(0));
         passwd_info();
}
void MainWindow::btn_clean()
{
         ui->KeyEdit->setText("");
         passwd_info();
}
void MainWindow::btn_back()
{
         ui->KeyEdit->backspace();
         passwd_info();
}



void MainWindow::on_pushButton_8_clicked()
{
    emit btn_1_sig();
}
void MainWindow::on_pushButton_4_clicked()
{
    emit btn_2_sig();
}

void MainWindow::on_pushButton_5_clicked()
{
    emit btn_3_sig();
}

void MainWindow::on_pushButton_2_clicked()
{
    emit btn_4_sig();
}

void MainWindow::on_pushButton_3_clicked()
{
    emit btn_5_sig();
}

void MainWindow::on_pushButton_6_clicked()
{
    emit btn_6_sig();
}

void MainWindow::on_pushButton_7_clicked()
{
    emit btn_7_sig();
}

void MainWindow::on_pushButton_11_clicked()
{
    emit btn_8_sig();
}

void MainWindow::on_pushButton_9_clicked()
{
    emit btn_9_sig();
}

void MainWindow::on_pushButton_10_clicked()
{
    emit btn_clean_sig();
}

void MainWindow::on_pushButton_13_clicked()
{
    emit btn_back_sig();
}

void MainWindow::on_pushButton_12_clicked()
{
    emit btn_0_sig();
}


void MainWindow::on_open_blue_clicked()
{
    if(flags_blue_num == false)
    {
        ui->flag_blue->setHidden(false);
        ui->open_blue_label->setHidden(true);
        ui->close_blue_label->setHidden(false);
        flags_blue_num = true;
    }else {
        ui->open_blue_label->setHidden(false);
        ui->close_blue_label->setHidden(true);
        ui->flag_blue->setHidden(true);
        flags_blue_num = false;
    }
}


void MainWindow::on_sreach_wifi_clicked()
{
    ControlQwidgetHide(SREACH_WIFI);
}

void MainWindow::on_sreach_wifi_return_clicked()
{
    ControlQwidgetHide(WIFI);
}

void MainWindow::on_send_file_clicked()
{
    ui->status_bar->setHidden(true);
    ui->b_return->setHidden(true);
    QString name = "acanoe";
    QString age = "ui.h";
    //QWidget *openfile = new QWidget;
    //openfile->setGeometry(QRect(0,0,10,10));
    //openfile->resize(480,272);
    //QFileDialog *fd   =new QFileDialog(ui->openfile,name,age);
    QFileDialog *fd = new QFileDialog(this);
    //fd->resize(480,272);
    fd->setGeometry(0,0,480,272);
    fd->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint);
    fd->setAttribute(Qt::WA_TranslucentBackground);
   // fd->setWindowFlags(Qt::FramelessWindowHint);


    //fd->exec() == QFileDialog::getOpenFileName();
//   fd->exec() ==
//   QFileDialog::getOpenFileName(this,tr(""),".",tr(" "));

  /*  QString fileName = fd->getOpenFileName(this,
                                    tr("Open Video Playback"), ".",
                                    tr("Spreadsheet files (*.sp *.avi *.png *.txt"));
                                    */
/*
       // fd->setViewMode( QFileDialog::Detail );r
        fd->setFilter( "Images (*.png *.xpm *.jpg)" );
        QString filters="C file(*.c *.cpp *.h);;pic(*.png *.xpm)";
            // fd->setFilters(filters);
       //fd->setMode( QFileDialog::ExistingFile );
       //fd->setMode( QFileDialog::ExistingFile );*/
    if (fd->exec()==QFileDialog::Accepted)// ok
    {
    QTextStream cout(stdout, QIODevice::WriteOnly);

    QStringList slist=fd->selectedFiles();
    QString list = slist[0];
    cout <<list<<endl;//必须加endl才能输出
    ControlQwidgetHide(READY_TO_SEND);
    //QListWidgetItem::setTextAlignment();
   } else
    {


    }

    ui->status_bar->setHidden(false);
    ui->b_return->setHidden(false);

}

void MainWindow::on_sreach_blue_clicked()
{
    ControlQwidgetHide(SREACH_BLUE_PAGE);
}

void MainWindow::on_sreach_blude_return_clicked()
{
    ControlQwidgetHide(BLUE);
}

void MainWindow::on_send_cancel_clicked()
{
    ControlQwidgetHide(BLUE);
}
