#include "clients.h"
#include "ui_clients.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
Clients::Clients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Clients)
{
    ui->setupUi(this);

}

Clients::~Clients()
{
    delete ui;
}

void Clients::on_buttonBox_accepted()
{
    QSqlQuery query;
    query.prepare("IF NOT EXISTS phone FROM client WHERE phone = :phone INSERT INTO client (name,surname, patronymic,phone,email) VALUES (:name,:surname, :patronymic,:phone,:email)");
    query.bindValue(":name", ui->lineEdit->text());
    query.bindValue(":surname", ui->lineEdit_2->text());
    query.bindValue(":patronymic", ui->lineEdit_3->text());
    query.bindValue(":phone", ui->lineEdit_4->text());
    query.bindValue(":email", ui->lineEdit_5->text());
    if (!query.exec()) {
        QMessageBox::information(this,"Скидка","Клиент существует. Предоставлена скидка 5%");
    }
}

