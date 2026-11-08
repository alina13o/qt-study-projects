#ifndef TOURBOOK_H
#define TOURBOOK_H

#include <QDialog>

namespace Ui {
class Tourbook;
}

class Tourbook : public QDialog
{
    Q_OBJECT

public:
    explicit Tourbook(QWidget *parent = nullptr);
    ~Tourbook();
public slots:
    void mySlot(const QString &text);
    void mySlot2(const QString &text);
    void mySlot3(const QString &text);
    void mySlot4(const QString &text);
    void mySlot5(const QString &text);
    void mySlot6(const QString &text);
    void mySlot7(QDate &text,QDate &text1);
    void mySlot8(const QString &text);

private slots:
    void on_client_clicked();

private:
    Ui::Tourbook *ui;
};

#endif // TOURBOOK_H
