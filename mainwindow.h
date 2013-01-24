#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Qtimer>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>

/****宏定义***************************************************/

//用于界面切换
#define WELCOME         0
#define LOGIN           1
#define DESKTOP         2
#define WARNING_RESULT  3
#define CALL_WAITING    4
#define BLUE            5
#define VIDEO           6
#define WIFI            7
#define UP              8
#define WEB             9
#define GAME            10
#define SREACH_WIFI     11
#define READY_TO_SEND   12
#define SREACH_BLUE_PAGE    13



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    void ControlQwidgetHide(int WidgetType);
    void wait_5s();
    void passwd_info();

    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    bool m_bflagIcon;
    int m_iflagGUI;
    QString fileName;
    QTimer* m_GUItimer;
    bool flags_blue_num;

signals:
    void Signal_GUI_Welcome(int itemp);
    void btn_1_sig();
    void btn_2_sig();
    void btn_3_sig();
    void btn_4_sig();
    void btn_5_sig();
    void btn_6_sig();
    void btn_7_sig();
    void btn_8_sig();
    void btn_9_sig();
    void btn_0_sig();
    void btn_clean_sig();
    void btn_back_sig();
private slots:
    void timeGUIEvent();
    void SetGuiWelcome(int itemp);
    void on_pushButton_clicked();
    void on_blue_clicked();
    void on_video_clicked();
    void on_wifi_clicked();
    void on_up_clicked();
    void on_web_clicked();
    void on_game_clicked();
    void on_w_return_clicked();
    void on_v_return_clicked();
    void on_u_return_clicked();
    void on_we_return_clicked();
    void on_g_return_clicked();
    void on_b_return_clicked();
    void on_pushButton_8_clicked();
    void btn_1();
    void btn_2();
    void btn_3();
    void btn_4();
    void btn_5();
    void btn_6();
    void btn_7();
    void btn_8();
    void btn_9();
    void btn_0();
    void btn_clean();
    void btn_back();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_12_clicked();
    void on_open_blue_clicked();
    void on_sreach_wifi_clicked();
    void on_sreach_wifi_return_clicked();
    void on_send_file_clicked();
    void on_sreach_blue_clicked();
    void on_sreach_blude_return_clicked();
    void on_send_cancel_clicked();
};

#endif // MAINWINDOW_H
