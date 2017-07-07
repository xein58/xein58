#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include "widget.h"
QPushButton *econom[16],*vip[4];
int arr[16]={0}, zanyato=0;
Widget::Widget(QWidget *parent): QWidget(parent)
{
    int x=0,y=0;
    QLabel *lbl= new QLabel;
 setWindowTitle("AEROPLANE");
//setMinimumSize(1020,768);
 //lbl=(QString::number(zanyato));
 QGridLayout  *l= new QGridLayout(this) ;
 for(int i=0;i<16;i++)
 {
 econom[i]=new QPushButton(QString::number(i+1));
 econom[i]->setMinimumSize(50,50);
 econom[i]->setMaximumSize(100,100);
 econom[i]->setStyleSheet("QPushButton{background:#00ce63;}");
 if(y>1)
 {
     y=0;
     x++;
 }
 l->addWidget(econom[i],x,y);
 y++;
 }
for(int i=0;i<4;i++)
{
    vip[i]=new QPushButton("VIP "+QString::number(i+1));
    vip[i]->setMinimumSize(50,50);
    vip[i]->setMaximumSize(100,100);
    vip[i]->setStyleSheet("QPushButton{background:#00ce63;}");
    if(y>1)
    {
        y=0;
        x++;
    }
    l->addWidget(vip[i],x,y);
    y++;
}
connect(econom[0], SIGNAL(clicked()), this, SLOT(slotButton0()));
connect(econom[1], SIGNAL(clicked()), this, SLOT(slotButton1()));
connect(econom[2], SIGNAL(clicked()), this, SLOT(slotButton2()));
connect(econom[3], SIGNAL(clicked()), this, SLOT(slotButton3()));
connect(econom[4], SIGNAL(clicked()), this, SLOT(slotButton4()));
connect(econom[5], SIGNAL(clicked()), this, SLOT(slotButton5()));
connect(econom[6], SIGNAL(clicked()), this, SLOT(slotButton6()));
connect(econom[7], SIGNAL(clicked()), this, SLOT(slotButton7()));
connect(econom[8], SIGNAL(clicked()), this, SLOT(slotButton8()));
connect(econom[9], SIGNAL(clicked()), this, SLOT(slotButton9()));
connect(econom[10], SIGNAL(clicked()), this, SLOT(slotButton10()));
connect(econom[11], SIGNAL(clicked()), this, SLOT(slotButton11()));
connect(econom[12], SIGNAL(clicked()), this, SLOT(slotButton12()));
connect(econom[13], SIGNAL(clicked()), this, SLOT(slotButton13()));
connect(econom[14], SIGNAL(clicked()), this, SLOT(slotButton14()));
connect(econom[15], SIGNAL(clicked()), this, SLOT(slotButton15()));
}
Widget::~Widget()
{

}
void st(int i)
{
    if(arr[i]==0)
    {
        econom[i]->setStyleSheet("QPushButton{background:#e7fc00;}");
        arr[i]++;
    }
    else if(arr[i]==1)
    {
        econom[i]->setStyleSheet("QPushButton{background:#ff0019;}");
        arr[i]++;
        zanyato++;
    }
    else
    {
        econom[i]->setStyleSheet("QPushButton{background:#00ce63;}");
        arr[i]=0;
    }
}
void Widget::slotButton0()
{
    st(0);
}
void Widget::slotButton1()
{
    st(1);
}
void Widget::slotButton2()
{
    st(2);
}
//ppb3->setStyleSheet("QPushButton{background:#FF0063;}");
