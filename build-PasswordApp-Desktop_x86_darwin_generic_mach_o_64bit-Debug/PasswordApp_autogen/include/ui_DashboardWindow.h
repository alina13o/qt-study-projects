/********************************************************************************
** Form generated from reading UI file 'DashboardWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARDWINDOW_H
#define UI_DASHBOARDWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashboardWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *leftContainer;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *Country;
    QStackedWidget *Town;
    QWidget *page;
    QComboBox *TownF;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QSpinBox *stars;
    QComboBox *hotel;
    QWidget *page_2;
    QComboBox *TownR;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QSpinBox *stars_2;
    QComboBox *hotel_2;
    QWidget *page_3;
    QComboBox *TownT;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QSpinBox *stars_3;
    QComboBox *hotel_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QSpinBox *ludi;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox;
    QSpinBox *child;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QSpinBox *ludi_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_3;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QPushButton *Pdf1;
    QPushButton *logOutBtn;
    QWidget *rightContainer;
    QVBoxLayout *verticalLayout_5;
    QWidget *mainConteiner;
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *start;
    QWidget *SpB;
    QTextEdit *textEdit;
    QLabel *label_6;
    QWidget *Kap;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *allUsersTable;
    QWidget *Sta;
    QVBoxLayout *verticalLayout_9;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *Msk;
    QTextEdit *textEdit_2;

    void setupUi(QMainWindow *DashboardWindow)
    {
        if (DashboardWindow->objectName().isEmpty())
            DashboardWindow->setObjectName("DashboardWindow");
        DashboardWindow->resize(800, 600);
        DashboardWindow->setMinimumSize(QSize(800, 600));
        DashboardWindow->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/icons/icons/1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        DashboardWindow->setWindowIcon(icon);
        DashboardWindow->setStyleSheet(QString::fromUtf8("* {\n"
"	margin: 0;\n"
"	padding: 0;\n"
"	border: none;\n"
"	background: none;\n"
"	color: #fff;\n"
"}\n"
"#leftContainer {\n"
"	background-color: rgb(85, 85, 255);\n"
"	color: #fff;\n"
"}\n"
"#leftContainer QPushButton {\n"
"	text-align: left;\n"
"	padding: 10px 20px;\n"
"	color: #fff;\n"
"	border-top-left-radius: 10px;\n"
"	border-bottom-left-radius: 10px;\n"
"}\n"
"#leftContainer QPushButton:hover {\n"
"	background-color: rgba(255, 255, 255, .1);\n"
"}\n"
"\n"
"#headerConteiner {\n"
"	background-color: rgb(85, 85, 255);\n"
"	color: #fff;\n"
"	border-radius: 10px;\n"
"}\n"
"#searchTxt {\n"
"	border-radius: 5px;\n"
"	padding: 4px 10px;\n"
"	background: none;\n"
"	background-color: rgb(90, 90, 255);\n"
"	color: #fff;\n"
"	border-bottom: 1px solid #fff;\n"
"}\n"
"#searchBtn {\n"
"	background-color: rgb(85, 170, 255);\n"
"	padding: 6px 10px;\n"
"	border-radius: 5px;\n"
"}\n"
"#changeUserPage Qlabel {\n"
"	color: #000;\n"
"}\n"
"\n"
"#leftContainer QComboBox {\n"
"	text-align: left;\n"
"	padding: 10px 20px;\n"
"	"
                        "border-radius: 10px;\n"
"    margin: 5px;\n"
"background-color:white;\n"
"\n"
"}\n"
"#DashboardWindow {\n"
"background-image: url(:/resources/images/images/1.jpeg);\n"
"}"));
        centralwidget = new QWidget(DashboardWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        leftContainer = new QWidget(centralwidget);
        leftContainer->setObjectName("leftContainer");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(75);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftContainer->sizePolicy().hasHeightForWidth());
        leftContainer->setSizePolicy(sizePolicy);
        leftContainer->setStyleSheet(QString::fromUtf8("background-color:rgba(75, 71, 108, 134);"));
        verticalLayout = new QVBoxLayout(leftContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 10, 0, 10);
        frame = new QFrame(leftContainer);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(frame);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(frame);

        Country = new QComboBox(leftContainer);
        Country->addItem(QString());
        Country->addItem(QString());
        Country->addItem(QString());
        Country->setObjectName("Country");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Country->sizePolicy().hasHeightForWidth());
        Country->setSizePolicy(sizePolicy1);
        Country->setStyleSheet(QString::fromUtf8("background-color:rgb(80, 77, 109)"));

        verticalLayout->addWidget(Country);

        Town = new QStackedWidget(leftContainer);
        Town->setObjectName("Town");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(20);
        sizePolicy2.setHeightForWidth(Town->sizePolicy().hasHeightForWidth());
        Town->setSizePolicy(sizePolicy2);
        Town->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0);\n"
"padding-right: 5 px"));
        page = new QWidget();
        page->setObjectName("page");
        TownF = new QComboBox(page);
        TownF->addItem(QString());
        TownF->addItem(QString());
        TownF->addItem(QString());
        TownF->addItem(QString());
        TownF->addItem(QString());
        TownF->setObjectName("TownF");
        TownF->setGeometry(QRect(0, 10, 241, 48));
        TownF->setStyleSheet(QString::fromUtf8("background-color:rgb(80, 77, 109)"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 70, 262, 50));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));

        horizontalLayout_5->addWidget(label_7);

        stars = new QSpinBox(layoutWidget);
        stars->setObjectName("stars");
        stars->setStyleSheet(QString::fromUtf8("\n"
"background: rgba(250,250,250, 0.3);"));
        stars->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        stars->setMinimum(1);
        stars->setMaximum(5);

        horizontalLayout_5->addWidget(stars);

        hotel = new QComboBox(layoutWidget);
        hotel->addItem(QString());
        hotel->addItem(QString());
        hotel->addItem(QString());
        hotel->addItem(QString());
        hotel->setObjectName("hotel");
        hotel->setStyleSheet(QString::fromUtf8("background-color:rgb(80, 77, 109)"));

        horizontalLayout_5->addWidget(hotel);

        Town->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        TownR = new QComboBox(page_2);
        TownR->addItem(QString());
        TownR->addItem(QString());
        TownR->addItem(QString());
        TownR->setObjectName("TownR");
        TownR->setGeometry(QRect(0, 10, 241, 48));
        TownR->setStyleSheet(QString::fromUtf8("background-color:rgb(80, 77, 109)"));
        layoutWidget_2 = new QWidget(page_2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(0, 70, 262, 50));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));

        horizontalLayout_9->addWidget(label_12);

        stars_2 = new QSpinBox(layoutWidget_2);
        stars_2->setObjectName("stars_2");
        stars_2->setStyleSheet(QString::fromUtf8("\n"
"background: rgba(250,250,250, 0.3);"));
        stars_2->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        stars_2->setMinimum(1);
        stars_2->setMaximum(5);

        horizontalLayout_9->addWidget(stars_2);

        hotel_2 = new QComboBox(layoutWidget_2);
        hotel_2->addItem(QString());
        hotel_2->addItem(QString());
        hotel_2->addItem(QString());
        hotel_2->addItem(QString());
        hotel_2->setObjectName("hotel_2");
        hotel_2->setStyleSheet(QString::fromUtf8("background-color:rgb(80, 77, 109)"));

        horizontalLayout_9->addWidget(hotel_2);

        Town->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        TownT = new QComboBox(page_3);
        TownT->addItem(QString());
        TownT->addItem(QString());
        TownT->addItem(QString());
        TownT->addItem(QString());
        TownT->addItem(QString());
        TownT->setObjectName("TownT");
        TownT->setGeometry(QRect(0, 10, 241, 48));
        TownT->setStyleSheet(QString::fromUtf8("background-color:rgb(80, 77, 109)"));
        layoutWidget_3 = new QWidget(page_3);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(0, 70, 262, 50));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));

        horizontalLayout_10->addWidget(label_13);

        stars_3 = new QSpinBox(layoutWidget_3);
        stars_3->setObjectName("stars_3");
        stars_3->setStyleSheet(QString::fromUtf8("\n"
"background: rgba(250,250,250, 0.3);"));
        stars_3->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        stars_3->setMinimum(1);
        stars_3->setMaximum(5);

        horizontalLayout_10->addWidget(stars_3);

        hotel_3 = new QComboBox(layoutWidget_3);
        hotel_3->addItem(QString());
        hotel_3->addItem(QString());
        hotel_3->addItem(QString());
        hotel_3->addItem(QString());
        hotel_3->setObjectName("hotel_3");
        hotel_3->setStyleSheet(QString::fromUtf8("background-color:rgb(80, 77, 109)"));

        horizontalLayout_10->addWidget(hotel_3);

        Town->addWidget(page_3);

        verticalLayout->addWidget(Town);

        groupBox = new QGroupBox(leftContainer);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("background-color:rgb(128, 113, 144);\n"
"border-radius:10px"));
        verticalLayout_11 = new QVBoxLayout(groupBox);
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));

        horizontalLayout_6->addWidget(label_8);

        ludi = new QSpinBox(groupBox);
        ludi->setObjectName("ludi");
        ludi->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));
        ludi->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        ludi->setMinimum(1);
        ludi->setMaximum(10);

        horizontalLayout_6->addWidget(ludi);


        verticalLayout_11->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName("checkBox");
        checkBox->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));

        horizontalLayout_7->addWidget(checkBox);

        child = new QSpinBox(groupBox);
        child->setObjectName("child");
        child->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));
        child->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        child->setMinimum(0);
        child->setMaximum(10);
        child->setValue(0);

        horizontalLayout_7->addWidget(child);


        verticalLayout_11->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));

        horizontalLayout_8->addWidget(label_9);

        ludi_2 = new QSpinBox(groupBox);
        ludi_2->setObjectName("ludi_2");
        ludi_2->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255, 0)"));
        ludi_2->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        ludi_2->setMinimum(1);
        ludi_2->setMaximum(10);

        horizontalLayout_8->addWidget(ludi_2);


        verticalLayout_11->addLayout(horizontalLayout_8);

        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");

        horizontalLayout_4->addWidget(label_10);

        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");

        horizontalLayout_4->addWidget(label_11);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        dateEdit = new QDateEdit(frame_2);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setCalendarPopup(true);

        horizontalLayout_3->addWidget(dateEdit);

        dateEdit_2 = new QDateEdit(frame_2);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setCalendarPopup(true);

        horizontalLayout_3->addWidget(dateEdit_2);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_6);


        verticalLayout_11->addWidget(frame_2);


        verticalLayout->addWidget(groupBox);

        frame_3 = new QFrame(leftContainer);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(frame_3);
        pushButton->setObjectName("pushButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/icons/icons/heart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        verticalLayout_3->addWidget(pushButton);

        Pdf1 = new QPushButton(frame_3);
        Pdf1->setObjectName("Pdf1");
        QFont font1;
        font1.setPointSize(10);
        Pdf1->setFont(font1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/icons/icons/upload.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Pdf1->setIcon(icon2);
        Pdf1->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(Pdf1);

        logOutBtn = new QPushButton(frame_3);
        logOutBtn->setObjectName("logOutBtn");
        logOutBtn->setFont(font1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/icons/icons/log-out.svg"), QSize(), QIcon::Normal, QIcon::Off);
        logOutBtn->setIcon(icon3);
        logOutBtn->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(logOutBtn);


        verticalLayout->addWidget(frame_3);


        horizontalLayout->addWidget(leftContainer);

        rightContainer = new QWidget(centralwidget);
        rightContainer->setObjectName("rightContainer");
        rightContainer->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(150);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(rightContainer->sizePolicy().hasHeightForWidth());
        rightContainer->setSizePolicy(sizePolicy3);
        rightContainer->setAutoFillBackground(false);
        rightContainer->setStyleSheet(QString::fromUtf8("background-image: url(:/resources/images/images/1.jpeg);"));
        verticalLayout_5 = new QVBoxLayout(rightContainer);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(15, -1, -1, -1);
        mainConteiner = new QWidget(rightContainer);
        mainConteiner->setObjectName("mainConteiner");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mainConteiner->sizePolicy().hasHeightForWidth());
        mainConteiner->setSizePolicy(sizePolicy4);
        horizontalLayout_2 = new QHBoxLayout(mainConteiner);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        stackedWidget = new QStackedWidget(mainConteiner);
        stackedWidget->setObjectName("stackedWidget");
        start = new QWidget();
        start->setObjectName("start");
        stackedWidget->addWidget(start);
        SpB = new QWidget();
        SpB->setObjectName("SpB");
        textEdit = new QTextEdit(SpB);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(1, 21, 461, 531));
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(true);
        textEdit->setFont(font2);
        textEdit->setStyleSheet(QString::fromUtf8("color:white;"));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textEdit->setReadOnly(true);
        textEdit->setOverwriteMode(false);
        label_6 = new QLabel(SpB);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 110, 271, 171));
        label_6->setAutoFillBackground(false);
        label_6->setStyleSheet(QString::fromUtf8("background-color:rgba(180, 152, 223,0.1);\n"
"border-radius:10px;"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/images/st-petersburg.jpg")));
        label_6->setScaledContents(true);
        label_6->setMargin(1);
        stackedWidget->addWidget(SpB);
        Kap = new QWidget();
        Kap->setObjectName("Kap");
        verticalLayout_8 = new QVBoxLayout(Kap);
        verticalLayout_8->setObjectName("verticalLayout_8");
        allUsersTable = new QTableWidget(Kap);
        allUsersTable->setObjectName("allUsersTable");

        verticalLayout_8->addWidget(allUsersTable);

        stackedWidget->addWidget(Kap);
        Sta = new QWidget();
        Sta->setObjectName("Sta");
        verticalLayout_9 = new QVBoxLayout(Sta);
        verticalLayout_9->setObjectName("verticalLayout_9");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(Sta);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(Sta);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(Sta);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(Sta);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(Sta);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit_3 = new QLineEdit(Sta);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_5 = new QLabel(Sta);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEdit_4 = new QLineEdit(Sta);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        pushButton_2 = new QPushButton(Sta);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer_2);


        verticalLayout_9->addLayout(formLayout);

        stackedWidget->addWidget(Sta);
        Msk = new QWidget();
        Msk->setObjectName("Msk");
        textEdit_2 = new QTextEdit(Msk);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(12, 68, 256, 192));
        stackedWidget->addWidget(Msk);

        horizontalLayout_2->addWidget(stackedWidget);


        verticalLayout_5->addWidget(mainConteiner);


        horizontalLayout->addWidget(rightContainer);

        DashboardWindow->setCentralWidget(centralwidget);

        retranslateUi(DashboardWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(DashboardWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DashboardWindow)
    {
        DashboardWindow->setWindowTitle(QCoreApplication::translate("DashboardWindow", "Tours", nullptr));
        label->setText(QCoreApplication::translate("DashboardWindow", "\320\237\320\260\320\275\320\265\320\273\321\214 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        Country->setItemText(0, QCoreApplication::translate("DashboardWindow", "\320\241\321\202\321\200\320\260\320\275\320\260", nullptr));
        Country->setItemText(1, QCoreApplication::translate("DashboardWindow", "\320\240\320\276\321\201\321\201\320\270\321\217", nullptr));
        Country->setItemText(2, QCoreApplication::translate("DashboardWindow", "\320\242\321\203\321\200\321\206\320\270\321\217", nullptr));

        TownF->setItemText(0, QCoreApplication::translate("DashboardWindow", "\320\223\320\276\321\200\320\276\320\264", nullptr));
        TownF->setItemText(1, QCoreApplication::translate("DashboardWindow", "\320\241\320\260\320\275\320\272\321\202-\320\237\320\265\321\202\320\265\321\200\320\261\321\203\321\200\320\263", nullptr));
        TownF->setItemText(2, QCoreApplication::translate("DashboardWindow", "\320\234\320\276\321\201\320\272\320\262\320\260", nullptr));
        TownF->setItemText(3, QCoreApplication::translate("DashboardWindow", "\320\232\320\260\320\277\320\260\320\264\320\276\320\272\320\270\321\217", nullptr));
        TownF->setItemText(4, QCoreApplication::translate("DashboardWindow", "\320\241\321\202\320\260\320\274\320\261\321\203\320\273", nullptr));

        label_7->setText(QCoreApplication::translate("DashboardWindow", "\320\227\320\262\320\265\320\267\320\264\321\213", nullptr));
        hotel->setItemText(0, QCoreApplication::translate("DashboardWindow", "\320\236\321\202\320\265\320\273\321\214", nullptr));
        hotel->setItemText(1, QCoreApplication::translate("DashboardWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        hotel->setItemText(2, QCoreApplication::translate("DashboardWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        hotel->setItemText(3, QCoreApplication::translate("DashboardWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));

        TownR->setItemText(0, QCoreApplication::translate("DashboardWindow", "\320\223\320\276\321\200\320\276\320\264", nullptr));
        TownR->setItemText(1, QCoreApplication::translate("DashboardWindow", "\320\241\320\260\320\275\320\272\321\202-\320\237\320\265\321\202\320\265\321\200\320\261\321\203\321\200\320\263", nullptr));
        TownR->setItemText(2, QCoreApplication::translate("DashboardWindow", "\320\234\320\276\321\201\320\272\320\262\320\260", nullptr));

        label_12->setText(QCoreApplication::translate("DashboardWindow", "\320\227\320\262\320\265\320\267\320\264\321\213", nullptr));
        hotel_2->setItemText(0, QCoreApplication::translate("DashboardWindow", "\320\236\321\202\320\265\320\273\321\214", nullptr));
        hotel_2->setItemText(1, QCoreApplication::translate("DashboardWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        hotel_2->setItemText(2, QCoreApplication::translate("DashboardWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        hotel_2->setItemText(3, QCoreApplication::translate("DashboardWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));

        TownT->setItemText(0, QCoreApplication::translate("DashboardWindow", "\320\223\320\276\321\200\320\276\320\264", nullptr));
        TownT->setItemText(1, QString());
        TownT->setItemText(2, QString());
        TownT->setItemText(3, QCoreApplication::translate("DashboardWindow", "\320\241\321\202\320\260\320\274\320\261\321\203\320\273", nullptr));
        TownT->setItemText(4, QCoreApplication::translate("DashboardWindow", "\320\232\320\260\320\277\320\260\320\264\320\276\320\272\320\270\321\217", nullptr));

        label_13->setText(QCoreApplication::translate("DashboardWindow", "\320\227\320\262\320\265\320\267\320\264\321\213", nullptr));
        hotel_3->setItemText(0, QCoreApplication::translate("DashboardWindow", "\320\236\321\202\320\265\320\273\321\214", nullptr));
        hotel_3->setItemText(1, QCoreApplication::translate("DashboardWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        hotel_3->setItemText(2, QCoreApplication::translate("DashboardWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        hotel_3->setItemText(3, QCoreApplication::translate("DashboardWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));

        label_8->setText(QCoreApplication::translate("DashboardWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\207\320\265\320\273\320\276\320\262\320\265\320\272  ", nullptr));
        checkBox->setText(QCoreApplication::translate("DashboardWindow", "\320\241 \320\264\320\265\321\202\321\214\320\274\320\270               ", nullptr));
        label_9->setText(QCoreApplication::translate("DashboardWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\276\320\274\320\265\321\200\320\276\320\262 ", nullptr));
        label_10->setText(QCoreApplication::translate("DashboardWindow", "\320\237\321\200\320\270\320\265\320\267\320\264", nullptr));
        label_11->setText(QCoreApplication::translate("DashboardWindow", "\320\236\321\202\321\212\320\265\320\267\320\264", nullptr));
        pushButton->setText(QCoreApplication::translate("DashboardWindow", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\277\321\203\321\202\320\265\320\262\320\272\321\203", nullptr));
        Pdf1->setText(QCoreApplication::translate("DashboardWindow", "\320\236\321\202\321\207\320\265\321\202 \320\277\321\200\320\276\320\264\320\260\320\266", nullptr));
        logOutBtn->setText(QCoreApplication::translate("DashboardWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        textEdit->setHtml(QCoreApplication::translate("DashboardWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:14pt; font-weight:700; font-style:italic;\">\n"
"<p align=\"justify\" style=\" margin-top:16px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Roboto','sans-serif'; font-weight:400; color:#ffffff;\">\320\255\320\272\321\201\320\272\321\203\321\200\321\201\320\270\320\270 \320\277\320\276 \321\201\320\260\320\274\321\213\320\274 \320\270\320\267\320\262\320\265\321\201\321\202\320\275\321\213\320\274 \320\277\320\265\321\202\320\265\321\200\320\261\321\203\321\200\320\263\321\201\320\272"
                        "\320\270\320\274 \320\264\320\276\321\201\321\202\320\276\320\277\321\200\320\270\320\274\320\265\321\207\320\260\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\217\320\274, \320\267\320\275\320\260\320\272\320\276\320\274\321\201\321\202\320\262\320\276 \321\201 \321\200\320\276\321\201\320\272\320\276\321\210\320\275\321\213\320\274\320\270 \320\277\321\200\320\270\320\263\320\276\321\200\320\276\320\264\320\260\320\274\320\270 \320\241\320\265\320\262\320\265\321\200\320\275\320\276\320\271 \321\201\321\202\320\276\320\273\320\270\321\206\321\213, \321\202\320\265\320\277\320\273\320\276\321\205\320\276\320\264\320\275\321\213\320\265 \320\277\321\200\320\276\320\263\321\203\320\273\320\272\320\270, \320\277\320\276\321\201\320\265\321\211\320\265\320\275\320\270\320\265 \320\274\321\203\320\267\320\265\320\265\320\262 \342\200\223 \320\262\321\201\320\265 \321\215\321\202\320\276 \320\277\321\200\320\265\320\264\321\203\321\201\320\274\320\276\321\202\321\200\320\265\320\275\320\276 \320"
                        "\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\276\320\271 \321\202\321\203\321\200\320\260. \320\227\320\260\320\265\320\267\320\264 \320\262\320\276\320\267\320\274\320\276\320\266\320\265\320\275 \320\262 \320\273\321\216\320\261\320\276\320\271 \320\264\320\265\320\275\321\214 \320\275\320\265\320\264\320\265\320\273\320\270. \320\255\320\272\321\201\320\272\321\203\321\200\321\201\320\270\320\276\320\275\320\275\320\260\321\217 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\277\320\276\320\262\321\202\320\276\321\200\321\217\320\265\321\202\321\201\321\217 \320\265\320\266\320\265\320\275\320\265\320\264\320\265\320\273\321\214\320\275\320\276, \320\270 \320\262\321\213 \321\202\320\276\321\207\320\275\320\276 \320\275\320\270\321\207\320\265\320\263\320\276 \320\275\320\265 \321\203\320\277\321\203\321\201\321\202\320\270\321\202\320\265.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:16px; margin-bottom:16px; margin-left:0px; margin-right:0px; -q"
                        "t-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Roboto','sans-serif'; font-weight:400; color:#ffffff;\">\320\242\321\203\321\200 \320\264\320\265\320\271\321\201\321\202\320\262\321\203\320\265\321\202 </span><span style=\" font-family:'inherit'; color:#ffffff;\">\321\201 01.05.2023 \320\277\320\276 </span></p>\n"
"<p align=\"justify\" style=\" margin-top:16px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'inherit'; color:#ffffff;\">27.08.2023</span></p>\n"
"<p align=\"justify\" style=\" margin-top:16px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Roboto','sans-serif'; font-weight:400; color:#ffffff;\">\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214: </span><span style=\" font-family:'inherit'; color:#ffffff;\">\320\276\321\202 2 \320\264\320\276 7 </span"
                        "></p>\n"
"<p align=\"justify\" style=\" margin-top:16px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'inherit'; color:#ffffff;\">\320\264\320\275\320\265\320\271 \320\275\320\260 \320\262\320\260\321\210 \320\262\321\213\320\261\320\276\321\200</span><span style=\" font-family:'Roboto','sans-serif'; font-weight:400; color:#ffffff;\">.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:16px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'inherit'; color:#ffffff;\">\320\237\320\270\321\202\320\260\320\275\320\270\320\265: </span><span style=\" font-family:'Roboto','sans-serif'; font-weight:400; color:#ffffff;\">\320\267\320\260\320\262\321\202\321\200\320\260\320\272\320\270 \321\201\320\276 \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \320\264\320\275\321\217 \321\202\321\203\321\200\320\260. </span></p>\n"
"<p align=\"justify\" style=\" margin-"
                        "top:16px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'inherit'; font-size:13pt; color:#ffffff;\">\320\227\320\260\320\262\321\202\321\200\320\260\320\272 \320\262 \320\263\320\276\321\201\321\202\320\270\320\275\320\270\321\206\320\265 (\320\272\321\200\320\276\320\274\320\265 \320\264\320\275\321\217 \320\267\320\260\320\265\320\267\320\264\320\260).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'inherit'; font-size:13pt; color:#ffffff;\">08:30 \342\200\223 09:00 \320\262\321\201\321\202\321\200\320\265\321\207\320\260 \320\262 \321\205\320\276\320\273\320\273\320\265 \320\263\320\276\321\201\321\202\320\270\320\275\320\270\321\206\321\213 \302\253\320\236\320\272\321\202\321\217\320\261\321\200\321\214\321\201\320\272\320\260\321\217\302\273 (\320\262 1-\320\271 \320\264\320\265\320\275\321\214 \321\215\320\272\321\201"
                        "\320\272\321\203\321\200\321\201\320\270\320\270).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'inherit'; font-size:13pt; color:#ffffff;\">09:00 \320\236\321\202\321\212\320\265\320\267\320\264 \320\276\321\202 \320\263\320\276\321\201\321\202\320\270\320\275\320\270\321\206\321\213 \302\253\320\236\320\272\321\202\321\217\320\261\321\200\321\214\321\201\320\272\320\260\321\217\302\273.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'inherit'; font-size:13pt; color:#ffffff;\">\320\220\320\262\321\202\320\276\320\261\321\203\321\201\320\275\320\260\321\217 \320\260\321\203\320\264\320\270\320\276-\321\215\320\272\321\201\320\272\321\203\321\200\321\201\320\270\321\217 \320\262 \320\237\320\265\321\202\320\265\321\200\320\263\320\276\321\204. \320\220\321\203\320\264\320\270\320\276"
                        "-\321\215\320\272\321\201\320\272\321\203\321\200\321\201\320\270\321\217 \320\262 \320\237\320\265\321\202\320\265\321\200\320\263\320\276\321\204 \320\277\320\276\320\267\320\275\320\260\320\272\320\276\320\274\320\270\321\202 \320\262\320\260\321\201 \321\201 \320\276\320\264\320\275\320\270\320\274 \320\270\320\267 \320\277\321\200\320\276\321\201\320\273\320\260\320\262\320\273\320\265\320\275\320\275\321\213\321\205 \320\277\321\200\320\270\320\263\320\276\321\200\320\276\320\264\320\276\320\262 \320\241\320\260\320\275\320\272\321\202-\320\237\320\265\321\202\320\265\321\200\320\261\321\203\321\200\320\263\320\260, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\275\320\260 \320\277\321\200\320\276\321\202\321\217\320\266\320\265\320\275\320\270\320\270 \320\264\320\262\321\203\321\205 \321\201\321\202\320\276\320\273\320\265\321\202\320\270\320\271 \321\217\320\262\320\273\321\217\320\273\321\201\321\217 \320\261\320\273\320\265\321\201\321\202\321\217\321\211\320\265\320\271 \320\267\320"
                        "\260\320\263\320\276\321\200\320\276\320\264\320\275\320\276\320\271 \320\270\320\274\320\277\320\265\321\200\320\260\321\202\320\276\321\200\321\201\320\272\320\276\320\271 \321\200\320\265\320\267\320\270\320\264\320\265\320\275\321\206\320\270\320\265\320\271. \320\237\321\200\320\276\321\204\320\265\321\201\321\201\320\270\320\276\320\275\320\260\320\273\321\214\320\275\321\213\320\271 \320\263\320\276\320\273\320\276\321\201 \320\264\320\270\320\272\321\202\320\276\321\200\320\260 \321\200\320\260\321\201\321\201\320\272\320\260\320\266\320\265\321\202 \320\276 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\320\270 \302\253\320\240\321\203\321\201\321\201\320\272\320\276\320\263\320\276 \320\222\320\265\321\200\321\201\320\260\320\273\321\217\302\273, \320\276 \321\201\321\202\321\200\320\276\320\270\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\265 \321\204\320\276\320\275\321\202\320\260\320\275\320\276\320\262 \320\270 \320\272\320\260\321\201\320\272\320\260\320\264\320\276\320"
                        "\262 \320\235\320\270\320\266\320\275\320\265\320\263\320\276 \320\277\320\260\321\200\320\272\320\260 \320\270 \320\222\320\265\321\200\321\205\320\275\320\265\320\263\320\276 \321\201\320\260\320\264\320\260. \320\222\321\213 \321\203\320\262\320\270\320\264\320\270\321\202\320\265 \321\201\320\276\321\205\321\200\320\260\320\275\320\270\320\262\321\210\320\270\320\265\321\201\321\217 \320\260\321\200\320\270\321\201\321\202\320\276\320\272\321\200\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \321\203\321\201\320\260\320\264\321\214\320\261\321\213, \320\277\320\276\320\267\320\275\320\260\320\272\320\276\320\274\320\270\321\202\320\265\321\201\321\214 \321\201 \320\270\321\205 \320\270\321\201\321\202\320\276\321\200\320\270\320\265\320\271 \320\270 \321\203\320\266\320\265 \321\207\320\265\321\200\320\265\320\267 \321\207\320\260\321\201 \320\276\320\272\320\260\320\266\320\265\321\202\320\265\321\201\321\214 \320\262 \320\276\320\264\320\275\320\276\320\274 \320\270\320\267 \320"
                        "\272\321\200\320\260\321\201\320\270\320\262\320\265\320\271\321\210\320\270\321\205 \320\274\320\265\321\201\321\202 \320\225\320\262\321\200\320\276\320\277\321\213.<br />\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213: ~ 8,5 \321\207\320\260\321\201\320\276\320\262 (\320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\320\265 ~ \320\262 17:30).</span></p></body></html>", nullptr));
        label_6->setText(QString());
        label_2->setText(QCoreApplication::translate("DashboardWindow", "\320\230\320\274\321\217:", nullptr));
        label_3->setText(QCoreApplication::translate("DashboardWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217:", nullptr));
        label_4->setText(QCoreApplication::translate("DashboardWindow", "Email:", nullptr));
        label_5->setText(QCoreApplication::translate("DashboardWindow", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DashboardWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashboardWindow: public Ui_DashboardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDWINDOW_H
