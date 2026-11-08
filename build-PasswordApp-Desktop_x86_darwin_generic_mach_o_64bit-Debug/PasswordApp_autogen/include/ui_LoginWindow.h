/********************************************************************************
** Form generated from reading UI file 'LoginWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *signIn;
    QVBoxLayout *verticalLayout_2;
    QWidget *headerSignIn;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *goToSignUpBtn;
    QSpacerItem *verticalSpacer;
    QWidget *mainSignIn;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLineEdit *loginSignInTxt;
    QLabel *label_2;
    QLineEdit *passwordSignInTxt;
    QPushButton *signInBtn;
    QWidget *singUp;
    QVBoxLayout *verticalLayout_3;
    QWidget *headerSignUp;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *goToSignInBtn;
    QSpacerItem *verticalSpacer_2;
    QWidget *mainSignUp;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLineEdit *loginSignUpTxt;
    QLabel *label_8;
    QLineEdit *passwordSignUpTxt;
    QLabel *label_9;
    QLineEdit *confirmPasswordSignUpTxt;
    QPushButton *signUpBtn;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(600, 500);
        LoginWindow->setMinimumSize(QSize(600, 500));
        LoginWindow->setMaximumSize(QSize(600, 500));
        LoginWindow->setStyleSheet(QString::fromUtf8("* {\n"
"	margin: 0;\n"
"	padding: 0;\n"
"	background: transparent;\n"
"	background-color: transparent;\n"
"	color: #fff;\n"
"}\n"
"#LoginWindow  { \n"
"	background-image: url(:/resources/images/images/1.jpeg);\n"
"}\n"
"QLineEdit {\n"
"	padding: 10px;\n"
"	border-radius: 10px;\n"
"	border: 1px solid qlineargradient(spread:pad, x0:0, y0:0, x2:2, y2:0, stop:0 rgb(196, 155, 221), stop:1 rgb(154, 67, 174));\n"
"}\n"
"\n"
"QPushButton {\n"
"	padding: 10px;\n"
"	border-radius: 10px;\n"
"	border: 1px solid qlineargradient(spread:pad, x0:0, y0:0, x2:2, y2:0, stop:0 rgb(196, 155, 221), 	stop:1 rgb(154, 67, 174));\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgba(255,255,255,0.1);\n"
"}\n"
"\n"
"#mainSignUp, #mainSignIn {\n"
"	background-color: rgba(0,0,0,0.4);\n"
"	border-radius: 15px\n"
"}\n"
"#signInBtn, #signUpBtn {\n"
"	margin-top:10px;\n"
"}\n"
""));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 0, 10, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        signIn = new QWidget();
        signIn->setObjectName("signIn");
        verticalLayout_2 = new QVBoxLayout(signIn);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(9, -1, -1, -1);
        headerSignIn = new QWidget(signIn);
        headerSignIn->setObjectName("headerSignIn");
        verticalLayout_4 = new QVBoxLayout(headerSignIn);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_3 = new QLabel(headerSignIn);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(30);
        font.setBold(false);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        label_4 = new QLabel(headerSignIn);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setPointSize(16);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        goToSignUpBtn = new QPushButton(headerSignIn);
        goToSignUpBtn->setObjectName("goToSignUpBtn");
        goToSignUpBtn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_4->addWidget(goToSignUpBtn);


        verticalLayout_2->addWidget(headerSignIn, 0, Qt::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        mainSignIn = new QWidget(signIn);
        mainSignIn->setObjectName("mainSignIn");
        verticalLayout_5 = new QVBoxLayout(mainSignIn);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(30, 20, 30, 20);
        label = new QLabel(mainSignIn);
        label->setObjectName("label");
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);

        verticalLayout_5->addWidget(label);

        loginSignInTxt = new QLineEdit(mainSignIn);
        loginSignInTxt->setObjectName("loginSignInTxt");
        QFont font3;
        font3.setPointSize(10);
        loginSignInTxt->setFont(font3);
        loginSignInTxt->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        loginSignInTxt->setInputMethodHints(Qt::ImhNone);

        verticalLayout_5->addWidget(loginSignInTxt);

        label_2 = new QLabel(mainSignIn);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);

        verticalLayout_5->addWidget(label_2);

        passwordSignInTxt = new QLineEdit(mainSignIn);
        passwordSignInTxt->setObjectName("passwordSignInTxt");
        passwordSignInTxt->setFont(font3);
        passwordSignInTxt->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        passwordSignInTxt->setEchoMode(QLineEdit::Password);

        verticalLayout_5->addWidget(passwordSignInTxt);

        signInBtn = new QPushButton(mainSignIn);
        signInBtn->setObjectName("signInBtn");
        signInBtn->setFont(font2);
        signInBtn->setCursor(QCursor(Qt::PointingHandCursor));
        signInBtn->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(signInBtn);


        verticalLayout_2->addWidget(mainSignIn);

        stackedWidget->addWidget(signIn);
        singUp = new QWidget();
        singUp->setObjectName("singUp");
        verticalLayout_3 = new QVBoxLayout(singUp);
        verticalLayout_3->setObjectName("verticalLayout_3");
        headerSignUp = new QWidget(singUp);
        headerSignUp->setObjectName("headerSignUp");
        verticalLayout_6 = new QVBoxLayout(headerSignUp);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_5 = new QLabel(headerSignUp);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);

        label_6 = new QLabel(headerSignUp);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8(""));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);

        goToSignInBtn = new QPushButton(headerSignUp);
        goToSignInBtn->setObjectName("goToSignInBtn");
        goToSignInBtn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_6->addWidget(goToSignInBtn);


        verticalLayout_3->addWidget(headerSignUp, 0, Qt::AlignTop);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        mainSignUp = new QWidget(singUp);
        mainSignUp->setObjectName("mainSignUp");
        verticalLayout_7 = new QVBoxLayout(mainSignUp);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(30, 20, 30, 20);
        label_7 = new QLabel(mainSignUp);
        label_7->setObjectName("label_7");
        label_7->setFont(font2);

        verticalLayout_7->addWidget(label_7);

        loginSignUpTxt = new QLineEdit(mainSignUp);
        loginSignUpTxt->setObjectName("loginSignUpTxt");
        loginSignUpTxt->setFont(font3);
        loginSignUpTxt->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        verticalLayout_7->addWidget(loginSignUpTxt);

        label_8 = new QLabel(mainSignUp);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);

        verticalLayout_7->addWidget(label_8);

        passwordSignUpTxt = new QLineEdit(mainSignUp);
        passwordSignUpTxt->setObjectName("passwordSignUpTxt");
        passwordSignUpTxt->setFont(font3);
        passwordSignUpTxt->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        passwordSignUpTxt->setEchoMode(QLineEdit::Password);

        verticalLayout_7->addWidget(passwordSignUpTxt);

        label_9 = new QLabel(mainSignUp);
        label_9->setObjectName("label_9");
        label_9->setFont(font2);

        verticalLayout_7->addWidget(label_9);

        confirmPasswordSignUpTxt = new QLineEdit(mainSignUp);
        confirmPasswordSignUpTxt->setObjectName("confirmPasswordSignUpTxt");
        confirmPasswordSignUpTxt->setFont(font3);
        confirmPasswordSignUpTxt->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        confirmPasswordSignUpTxt->setEchoMode(QLineEdit::Password);

        verticalLayout_7->addWidget(confirmPasswordSignUpTxt);

        signUpBtn = new QPushButton(mainSignUp);
        signUpBtn->setObjectName("signUpBtn");
        signUpBtn->setFont(font2);
        signUpBtn->setCursor(QCursor(Qt::PointingHandCursor));
        signUpBtn->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_7->addWidget(signUpBtn);


        verticalLayout_3->addWidget(mainSignUp);

        stackedWidget->addWidget(singUp);

        verticalLayout->addWidget(stackedWidget);

        LoginWindow->setCentralWidget(centralwidget);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        label_3->setText(QCoreApplication::translate("LoginWindow", "Tour Operator", nullptr));
        label_4->setText(QCoreApplication::translate("LoginWindow", "\320\241\320\265\321\200\320\262\320\270\321\201 \320\277\320\276 \320\277\320\276\320\264\320\261\320\276\321\200\321\203 \320\277\321\203\321\202\320\265\320\262\320\276\320\272", nullptr));
        goToSignUpBtn->setText(QCoreApplication::translate("LoginWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\320\276\320\263\320\270\320\275:", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        signInBtn->setText(QCoreApplication::translate("LoginWindow", "\320\222\320\276\320\271\321\202\320\270 \320\262 \320\273\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        label_5->setText(QCoreApplication::translate("LoginWindow", "PassApp", nullptr));
        label_6->setText(QCoreApplication::translate("LoginWindow", "\320\241\320\265\321\200\320\262\320\270\321\201 \320\277\320\276 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\216 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217\320\274\320\270", nullptr));
        goToSignInBtn->setText(QCoreApplication::translate("LoginWindow", "\320\222\320\276\320\271\321\202\320\270 \320\262 \320\273\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        label_7->setText(QCoreApplication::translate("LoginWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\320\276\320\263\320\270\320\275:", nullptr));
        label_8->setText(QCoreApplication::translate("LoginWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_9->setText(QCoreApplication::translate("LoginWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        signUpBtn->setText(QCoreApplication::translate("LoginWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
