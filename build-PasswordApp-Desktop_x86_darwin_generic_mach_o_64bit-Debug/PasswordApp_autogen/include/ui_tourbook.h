/********************************************************************************
** Form generated from reading UI file 'tourbook.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOURBOOK_H
#define UI_TOURBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Tourbook
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;
    QPushButton *client;

    void setupUi(QDialog *Tourbook)
    {
        if (Tourbook->objectName().isEmpty())
            Tourbook->setObjectName("Tourbook");
        Tourbook->resize(480, 400);
        buttonBox = new QDialogButtonBox(Tourbook);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(380, 10, 91, 621));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(Tourbook);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 20, 361, 361));
        textEdit->setReadOnly(true);
        client = new QPushButton(Tourbook);
        client->setObjectName("client");
        client->setGeometry(QRect(380, 80, 91, 32));

        retranslateUi(Tourbook);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Tourbook, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Tourbook, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Tourbook);
    } // setupUi

    void retranslateUi(QDialog *Tourbook)
    {
        Tourbook->setWindowTitle(QCoreApplication::translate("Tourbook", "Dialog", nullptr));
        client->setText(QCoreApplication::translate("Tourbook", "\320\237\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tourbook: public Ui_Tourbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOURBOOK_H
