#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>
namespace Ui {
class Widget;
}
class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    int status=0;
signals:
    void signalFromButton(int buttonID);
private:
    Ui::Widget *ui;
private slots:
    void slotButton0();
    void slotButton1();
    void slotButton2();
private:
    Ui::Widget *Ui;
};

#endif // WIDGET_H
