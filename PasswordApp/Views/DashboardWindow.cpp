#include "DashboardWindow.h"
#include "ui_DashboardWindow.h"
#include "./tourbook.h"
#include "QDateTimeEdit"
DashboardWindow::DashboardWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DashboardWindow)
{
    ui->setupUi(this);
    ui->child->setVisible(false);
    ui->stackedWidget->setCurrentIndex(0);
    ui->Country->setCurrentIndex(0);
    ui->Town->setCurrentIndex(0);

}

DashboardWindow::~DashboardWindow()
{
    delete ui;
}






void DashboardWindow::on_Country_textActivated(const QString &arg1)
{


}
void DashboardWindow::on_Country_currentIndexChanged(int index)
{
    ui->stackedWidget->setCurrentIndex(0);
    if(ui->Country->currentIndex()==0){
        ui->Town->setCurrentIndex(0);
        ui->TownF->setCurrentIndex(0);
    }
    if(ui->Country->currentIndex()==1){
        ui->Town->setCurrentIndex(1);
        ui->TownR->setCurrentIndex(0);
    }
    if(ui->Country->currentIndex()==2){
        ui->Town->setCurrentIndex(2);
        ui->TownT->setCurrentIndex(0);
    }

}


void DashboardWindow::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked()){
        ui->child->setVisible(true);
    } else{
        ui->child->setVisible(false);
    }
}


void DashboardWindow::on_logOutBtn_clicked()
{
    exit(EXIT_FAILURE);
}


void DashboardWindow::on_TownT_currentIndexChanged(int index)
{
    if(ui->TownF->currentIndex()==0){
        ui->stackedWidget->setCurrentIndex(0);
    }
    if(ui->TownT->currentIndex()==1){
        ui->stackedWidget->setCurrentIndex(3);
    }
    if(ui->TownT->currentIndex()==2){
        ui->stackedWidget->setCurrentIndex(4);
    }
}


void DashboardWindow::on_TownF_currentIndexChanged(int index)
{
    if(ui->TownF->currentIndex()==0){
        ui->stackedWidget->setCurrentIndex(0);
    }
    if(ui->TownF->currentIndex()==1){
        ui->stackedWidget->setCurrentIndex(1);
    }
    if(ui->TownF->currentIndex()==2){
        ui->stackedWidget->setCurrentIndex(2);
    }
    if(ui->TownF->currentIndex()==3){
        ui->stackedWidget->setCurrentIndex(3);
    }
    if(ui->TownF->currentIndex()==4){
        ui->stackedWidget->setCurrentIndex(4);
    }
}


void DashboardWindow::on_TownR_currentIndexChanged(int index)
{
    if(ui->TownF->currentIndex()==0){
        ui->stackedWidget->setCurrentIndex(0);
    }
    if(ui->TownR->currentIndex()==1){
        ui->stackedWidget->setCurrentIndex(1);
    }
    if(ui->TownR->currentIndex()==2){
        ui->stackedWidget->setCurrentIndex(2);
    }
}


void DashboardWindow::on_pushButton_clicked()
{
    Tourbook *dashboard = new Tourbook;
    dashboard->show();// создаем нашу форму
    connect(this, SIGNAL(mySignal(const QString &)), dashboard, SLOT(mySlot(const QString &)));
    connect(this, SIGNAL(mySignal2(const QString &)), dashboard, SLOT(mySlot2(const QString &)));
    connect(this, SIGNAL(mySignal3(const QString &)), dashboard, SLOT(mySlot3(const QString &)));
    connect(this, SIGNAL(mySignal4(const QString &)), dashboard, SLOT(mySlot4(const QString &)));
    connect(this, SIGNAL(mySignal5(const QString &)), dashboard, SLOT(mySlot5(const QString &)));
    connect(this, SIGNAL(mySignal6(const QString &)), dashboard, SLOT(mySlot6(const QString &)));
    connect(this, SIGNAL(mySignal7( QDate &, QDate &)), dashboard, SLOT(mySlot7( QDate &, QDate &)));
    connect(this, SIGNAL(mySignal8(const QString &)), dashboard, SLOT(mySlot8(const QString &)));
    QString c=QVariant(ui->Country->currentIndex()).toString();
    QString t;
    if (ui->Town->currentIndex()==0){
        t=QVariant(ui->TownF->currentIndex()).toString();
    }
    if (ui->Town->currentIndex()==1){
        t=QVariant(ui->TownR->currentIndex()).toString();
    }
    if (ui->Town->currentIndex()==2){
        t=QVariant(ui->TownT->currentIndex()).toString();
    }
    QString h=QVariant(ui->hotel->currentIndex()).toString();
    QString l=ui->ludi->text();
    QString cl=ui->child->text();
    emit mySignal(c);
    emit mySignal2(t);
    emit mySignal3(h);
    emit mySignal4(l);
    emit mySignal5(cl);
    emit mySignal6("");
    emit mySignal7(*s,*f);
    int Sum;

    emit mySignal8(QVariant(Sum).toString());
}


void DashboardWindow::on_dateEdit_editingFinished()
{
    *date=ui->dateEdit->date();
    *f=*date;
}



void DashboardWindow::on_dateEdit_2_editingFinished()
{
    *date=ui->dateEdit_2->date();
    *s=*date;
    if (*f>*s){
        ui->dateEdit->setDate(*s);
        ui->dateEdit_2->setDate(*f);
        *s=*f;
        *f=*date;
    }
}

