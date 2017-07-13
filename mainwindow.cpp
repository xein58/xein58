#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QTextStream"
int arr[20]={0};
QPushButton *p[20];
QTextBrowser *tex,*tex2,*tex3,*price,*stoim;
QLineEdit *price_obichn,*price_VIP;
int k=0,z=0,j=0,tmp=0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    p[0]=ui->pushButton;
    p[1]=ui->pushButton_2;
    p[2]=ui->pushButton_3;
    p[3]=ui->pushButton_4;
    p[4]=ui->pushButton_5;
    p[5]=ui->pushButton_6;
    p[6]=ui->pushButton_7;
    p[7]=ui->pushButton_8;
    p[8]=ui->pushButton_9;
    p[9]=ui->pushButton_10;
    p[10]=ui->pushButton_11;
    p[11]=ui->pushButton_12;
    p[12]=ui->pushButton_13;
    p[13]=ui->pushButton_14;
    p[14]=ui->pushButton_15;
    p[15]=ui->pushButton_16;
    p[16]=ui->pushButton_17;
    p[17]=ui->pushButton_18;
    p[18]=ui->pushButton_19;
    p[19]=ui->pushButton_20;
    tex=ui->textBrowser;
    tex2=ui->textBrowser_2;
    tex3=ui->textBrowser_3;
    price=ui->textBrowser_4;
    price_obichn=ui->lineEdit_8;
    price_VIP=ui->lineEdit_9;
    stoim=ui->textBrowser_5;
    connect(p[0], SIGNAL(clicked()), this, SLOT(slotButton0()));
    connect(p[1], SIGNAL(clicked()), this, SLOT(slotButton1()));
    connect(p[2], SIGNAL(clicked()), this, SLOT(slotButton2()));
    connect(p[3], SIGNAL(clicked()), this, SLOT(slotButton3()));
    connect(p[4], SIGNAL(clicked()), this, SLOT(slotButton4()));
    connect(p[5], SIGNAL(clicked()), this, SLOT(slotButton5()));
    connect(p[6], SIGNAL(clicked()), this, SLOT(slotButton6()));
    connect(p[7], SIGNAL(clicked()), this, SLOT(slotButton7()));
    connect(p[8], SIGNAL(clicked()), this, SLOT(slotButton8()));
    connect(p[9], SIGNAL(clicked()), this, SLOT(slotButton9()));
    connect(p[10], SIGNAL(clicked()), this, SLOT(slotButton10()));
    connect(p[11], SIGNAL(clicked()), this, SLOT(slotButton11()));
    connect(p[12], SIGNAL(clicked()), this, SLOT(slotButton12()));
    connect(p[13], SIGNAL(clicked()), this, SLOT(slotButton13()));
    connect(p[14], SIGNAL(clicked()), this, SLOT(slotButton14()));
    connect(p[15], SIGNAL(clicked()), this, SLOT(slotButton15()));
    connect(p[16], SIGNAL(clicked()), this, SLOT(slotButton16()));
    connect(p[17], SIGNAL(clicked()), this, SLOT(slotButton17()));
    connect(p[18], SIGNAL(clicked()), this, SLOT(slotButton18()));
    connect(p[19], SIGNAL(clicked()), this, SLOT(slotButton19()));
    ui->textBrowser_4->hide();
    ui->groupBox_2->hide();
    ui->groupBox->hide();
    ui->pushButton_21->hide();
    ui->pushButton_22->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_21_clicked()
{
    static bool open = true;
    ui->groupBox_2->setVisible(open);
    open = !open;
}
void st(int i)
{
    QString price_ob,price_vip;
    price_ob=price_obichn->text();
    price_vip=price_VIP->text();
    if(arr[i]==0)
    {
        p[i]->setStyleSheet("QPushButton{background:#e7fc00;}");
        arr[i]++;
    }
    else if(arr[i]==1)
    {
        p[i]->setStyleSheet("QPushButton{background:#ff0019;}");
        arr[i]++;
        tex->clear();
        tmp=i+1;
        tex->append(QString::number(i+1));
        if(i<16)
        {
            k++;
             tex2->clear();
            tex2->append(QString::number(k));
            j+=price_ob.toInt();
             stoim->clear();
            stoim->append(price_ob);
        }
        else
        {
            z++;
             tex3->clear();
            tex3->append(QString::number(z));
           j+=price_vip.toInt();
           stoim->clear();
           stoim->append(price_vip);
        }
        price->clear();
        price->append(QString::number(j));
    }
    else
    {
        p[i]->setStyleSheet("QPushButton{background:#00ce63;}");
        arr[i]=0;
        tex->clear();
        tex->append(QString::number(0));
        if(i<16)
        {
            k--;
             tex2->clear();
            tex2->append(QString::number(k));
            j-=price_ob.toInt();
            stoim->clear();
           stoim->append(QString::number(0));
        }
        else
        {
            z--;
             tex3->clear();
            tex3->append(QString::number(z));
           j-=price_vip.toInt();
           stoim->clear();
           stoim->append(QString::number(0));
        }
        price->clear();
        price->append(QString::number(j));
    }
}


void MainWindow::slotButton0()
{
    st(0);
}


void MainWindow::slotButton1()
{
    st(1);
}


void MainWindow::slotButton2()
{
    st(2);
}

void MainWindow::slotButton3()
{
    st(3);
}
void MainWindow::slotButton4()
{
    st(4);
}


void MainWindow::slotButton5()
{
    st(5);
}


void MainWindow::slotButton6()
{
    st(6);
}

void MainWindow::slotButton7()
{
    st(7);
}
void MainWindow::slotButton8()
{
    st(8);
}


void MainWindow::slotButton9()
{
    st(9);
}


void MainWindow::slotButton10()
{
    st(10);
}

void MainWindow::slotButton11()
{

    st(11);
}
void MainWindow::slotButton12()
{
    st(12);
}


void MainWindow::slotButton13()
{
    st(13);
}


void MainWindow::slotButton14()
{
    st(14);
}

void MainWindow::slotButton15()
{
    st(15);
}
void MainWindow::slotButton16()
{
    st(16);
}


void MainWindow::slotButton17()
{
    st(17);
}


void MainWindow::slotButton18()
{
    st(18);
}

void MainWindow::slotButton19()
{
    st(19);
}

void MainWindow::on_pushButton_22_clicked()
{
    static bool open = true;
    ui->textBrowser_4->setVisible(open);
    open = !open;
}



void MainWindow::on_pushButton_23_clicked()
{
    ui->groupBox_3->hide();
    ui->pushButton_23->hide();
    static bool openb = true;
    ui->groupBox->setVisible(openb);
    ui->pushButton_21->setVisible(openb);
    ui->pushButton_22->setVisible(openb);
}

void MainWindow::on_pushButton_24_clicked()
{
    QFile filer("itog.txt");
    QTextStream  file(&filer);
    filer.open(QIODevice::WriteOnly | QIODevice::Text);
    file <<"Reis nomer: "<< ui->lineEdit_4->text()<<endl;
    file<<"Date: "<<ui->dateEdit->text()<<endl;
    file<<"Vremya: "<<ui->timeEdit->text()<<endl;
    file<<"Stoimost obichnogo bileta: "<<ui->lineEdit_8->text()<<endl<<"Stoimost VIP bileta: "<<ui->lineEdit_9->text()<<endl;
    for(int i=0;i<20;i++)
    {
        if(arr[i]==0)
        {
            file<<"mesto nomer "<<i+1<<" free"<<endl;
        }
        else if(arr[i]==1)
        {
          file<<"mesto nomer "<<i+1<<" zabronirovanno"<<endl;
        }
        else
        {
          file<<"mesto nomer "<<i+1<<" kupleno"<<endl;
        };
    }
    file<<"Nakopitelnii schet: "<<j<<endl;
}
