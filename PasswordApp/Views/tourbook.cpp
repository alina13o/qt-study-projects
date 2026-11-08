#include "tourbook.h"
#include "./ui_tourbook.h"
#include "QDateTimeEdit"
#include "QDateTime"
#include "Clients.h"
Tourbook::Tourbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tourbook)
{
    ui->setupUi(this);
    int summa;
}

Tourbook::~Tourbook()
{
    delete ui;
}
void Tourbook::mySlot(const QString &text){
    if(text.toInt()==1){
        QString resultString = "Направление путешествия - Россия ";
        ui->textEdit->append(resultString);
    }
    if(text.toInt()==2){
        QString resultString = "Направление путешествия - Турция ";
        ui->textEdit->append(resultString);
    }
}
void Tourbook::mySlot2(const QString &text){
    QString resultString;
    if(text.toInt()==1){
        resultString = "Город путешествия - Санкт-Петербург";
    }
    if(text.toInt()==2){
        resultString = "Город путешествия - Москва";
    }
    if(text.toInt()==3){
        resultString = "Город путешествия - Стамбул";
    }
    if(text.toInt()==4){
        resultString = "Город путешествия - Кападокия";
    }
    ui->textEdit->append(resultString);

}
void Tourbook::mySlot3(const QString &text){
    QString resultString = "Отель выбран: " + text;
        ui->textEdit->append(resultString);
}
void Tourbook::mySlot4(const QString &text){
    QString resultString = "Количество взрослых:" + text;
        ui->textEdit->append(resultString);

}
void Tourbook::mySlot5(const QString &text){
    QString resultString = "Количество детей:" + text;
        ui->textEdit->append(resultString);

}
void Tourbook::mySlot6(const QString &text){
    QString resultString = "Количество номеров:" + text;
        ui->textEdit->append("Количество номеров:"+ text);

}
void Tourbook::mySlot7(QDate &text,QDate &text1){
    QString resultString = "Дата начала путешествия: ";
    ui->textEdit->append(resultString);
    ui->textEdit->insertPlainText((text1).toString("dd.MM.yyyy"));
    QString resultString1 = "Дата конца путешествия: ";
    ui->textEdit->append(resultString1);
    ui->textEdit->insertPlainText((text).toString("dd.MM.yyyy"));
    QString during=QVariant(text1.daysTo(text)).toString();
    ui->textEdit->append("Длительность путешествия: "+during);
}
void Tourbook::mySlot8(const QString &text){

    QString resultString = "Итоговая сумма : " + text;
        ui->textEdit->append(resultString);
}

void Tourbook::on_client_clicked()
{
    Clients *desk = new Clients;
    desk->show();
}

