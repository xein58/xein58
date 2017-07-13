#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void slotButton0();
    void slotButton1();
    void slotButton2();
    void slotButton3();
    void slotButton4();
    void slotButton5();
    void slotButton6();
    void slotButton7();
    void slotButton8();
    void slotButton9();
    void slotButton10();
    void slotButton11();
    void slotButton12();
    void slotButton13();
    void slotButton14();
    void slotButton15();
    void slotButton16();
    void slotButton17();
    void slotButton18();
    void slotButton19();
    void on_pushButton_21_clicked();
    void on_pushButton_22_clicked();
    void on_pushButton_23_clicked();
    void on_pushButton_24_clicked();

public:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
