/********************************************************************************
** Form generated from reading UI file 'zakupy.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZAKUPY_H
#define UI_ZAKUPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Zakupy
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_info;
    QTableWidget *zakubyTable;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_Brutto;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_netto;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *main_tab;
    QGridLayout *gridLayout;
    QPushButton *pushButton_nr7;
    QPushButton *pushButton_nr8;
    QPushButton *pushButton_escape;
    QPushButton *pushButton_nr9;
    QPushButton *pushButton_nr0;
    QPushButton *pushButton_down;
    QPushButton *pushButton_up;
    QPushButton *pushButton_nr1;
    QPushButton *pushButton_nr3;
    QPushButton *pushButton_nr2;
    QPushButton *pushButton_nr5;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_nr6;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_nr4;
    QPushButton *pushButton_nr00;
    QLineEdit *codeNumber;
    QPushButton *pushButton_przecinek;
    QPushButton *pushButton_zaplac;
    QPushButton *pushButton_enter;
    QPushButton *pushButton_ilosc;
    QPushButton *pushButton;
    QWidget *promocje_tab;
    QGridLayout *gridLayout_3;

    void setupUi(QDialog *Zakupy)
    {
        if (Zakupy->objectName().isEmpty())
            Zakupy->setObjectName(QStringLiteral("Zakupy"));
        Zakupy->resize(1156, 648);
        Zakupy->setLayoutDirection(Qt::LeftToRight);
        Zakupy->setStyleSheet(QLatin1String("#Zakupy {background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));}\n"
""));
        verticalLayout = new QVBoxLayout(Zakupy);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 40, 20, 50);
        label_info = new QLabel(Zakupy);
        label_info->setObjectName(QStringLiteral("label_info"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_info->setFont(font);
        label_info->setStyleSheet(QStringLiteral("color: white"));

        verticalLayout_2->addWidget(label_info);

        zakubyTable = new QTableWidget(Zakupy);
        zakubyTable->setObjectName(QStringLiteral("zakubyTable"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(zakubyTable->sizePolicy().hasHeightForWidth());
        zakubyTable->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        zakubyTable->setFont(font1);
        zakubyTable->setStyleSheet(QLatin1String("gridline-color: white; \n"
"background-color: rgba(0, 0, 0, 50);\n"
"background-image: url(:/img/Img/white_40_small.png);\n"
" background-repeat: no-repeat;\n"
" background-position: center;\n"
"background-opacity: 153;\n"
"gridline-color:white;\n"
"color:white\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        zakubyTable->setRowCount(0);
        zakubyTable->setColumnCount(0);

        verticalLayout_2->addWidget(zakubyTable);

        widget = new QWidget(Zakupy);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 50));
        widget->setStyleSheet(QStringLiteral("#widget{background-color: rgba(0, 0, 0, 50)}"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        groupBox->setFont(font2);
        groupBox->setStyleSheet(QStringLiteral("color:white"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(12);
        gridLayout_4->setVerticalSpacing(0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 1, 1, 1);

        label_Brutto = new QLabel(groupBox);
        label_Brutto->setObjectName(QStringLiteral("label_Brutto"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Brutto->sizePolicy().hasHeightForWidth());
        label_Brutto->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        label_Brutto->setFont(font3);
        label_Brutto->setLayoutDirection(Qt::LeftToRight);
        label_Brutto->setStyleSheet(QLatin1String("color:white\n"
""));
        label_Brutto->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_Brutto, 1, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(20, 0));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        label_2->setFont(font4);
        label_2->setStyleSheet(QLatin1String("color:white\n"
""));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_2, 1, 1, 1, 2);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        QFont font5;
        font5.setFamily(QStringLiteral("FontAwesome"));
        font5.setPointSize(11);
        font5.setBold(false);
        font5.setWeight(50);
        label_7->setFont(font5);
        label_7->setStyleSheet(QStringLiteral("color:white"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_7, 2, 2, 1, 1);

        label_netto = new QLabel(groupBox);
        label_netto->setObjectName(QStringLiteral("label_netto"));
        label_netto->setFont(font);
        label_netto->setStyleSheet(QLatin1String("color:white\n"
""));
        label_netto->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_netto, 2, 3, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setMinimumSize(QSize(0, 50));
        label->setBaseSize(QSize(0, 0));
        label->setStyleSheet(QStringLiteral("border-image: url(:/img/Img/long_shoppedOUT_logo_white.png);"));

        gridLayout_4->addWidget(label, 2, 0, 1, 1);

        label_Brutto->raise();
        label_2->raise();
        label_7->raise();
        label_netto->raise();
        label->raise();

        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);


        verticalLayout_2->addWidget(widget);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, 20, 0, -1);
        tabWidget = new QTabWidget(Zakupy);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setStyleSheet(QLatin1String("\n"
"QTabBar::tab {height: 70px; width: 120px};\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));\n"
"\n"
"\n"
""));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(64, 64));
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        main_tab = new QWidget();
        main_tab->setObjectName(QStringLiteral("main_tab"));
        gridLayout = new QGridLayout(main_tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_nr7 = new QPushButton(main_tab);
        pushButton_nr7->setObjectName(QStringLiteral("pushButton_nr7"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(100);
        sizePolicy5.setHeightForWidth(pushButton_nr7->sizePolicy().hasHeightForWidth());
        pushButton_nr7->setSizePolicy(sizePolicy5);
        pushButton_nr7->setMinimumSize(QSize(0, 70));
        pushButton_nr7->setBaseSize(QSize(0, 0));
        pushButton_nr7->setFont(font4);
        pushButton_nr7->setFocusPolicy(Qt::NoFocus);
        pushButton_nr7->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.75, stop:0 rgba(109, 109, 109, 255), stop:1 rgba(0, 0, 0, 255));\n"
"color: white\n"
""));

        gridLayout->addWidget(pushButton_nr7, 1, 0, 1, 1);

        pushButton_nr8 = new QPushButton(main_tab);
        pushButton_nr8->setObjectName(QStringLiteral("pushButton_nr8"));
        sizePolicy5.setHeightForWidth(pushButton_nr8->sizePolicy().hasHeightForWidth());
        pushButton_nr8->setSizePolicy(sizePolicy5);
        pushButton_nr8->setMinimumSize(QSize(0, 70));
        pushButton_nr8->setBaseSize(QSize(0, 0));
        pushButton_nr8->setFont(font4);
        pushButton_nr8->setFocusPolicy(Qt::NoFocus);
        pushButton_nr8->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.75, stop:0 rgba(109, 109, 109, 255), stop:1 rgba(0, 0, 0, 255));\n"
"color: white\n"
""));

        gridLayout->addWidget(pushButton_nr8, 1, 1, 1, 1);

        pushButton_escape = new QPushButton(main_tab);
        pushButton_escape->setObjectName(QStringLiteral("pushButton_escape"));
        sizePolicy5.setHeightForWidth(pushButton_escape->sizePolicy().hasHeightForWidth());
        pushButton_escape->setSizePolicy(sizePolicy5);
        pushButton_escape->setMinimumSize(QSize(0, 70));
        pushButton_escape->setBaseSize(QSize(0, 0));
        pushButton_escape->setFont(font4);
        pushButton_escape->setFocusPolicy(Qt::NoFocus);
        pushButton_escape->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));\n"
"color: white\n"
""));

        gridLayout->addWidget(pushButton_escape, 1, 3, 1, 1);

        pushButton_nr9 = new QPushButton(main_tab);
        pushButton_nr9->setObjectName(QStringLiteral("pushButton_nr9"));
        sizePolicy5.setHeightForWidth(pushButton_nr9->sizePolicy().hasHeightForWidth());
        pushButton_nr9->setSizePolicy(sizePolicy5);
        pushButton_nr9->setMinimumSize(QSize(0, 70));
        pushButton_nr9->setBaseSize(QSize(0, 0));
        pushButton_nr9->setFont(font4);
        pushButton_nr9->setFocusPolicy(Qt::NoFocus);
        pushButton_nr9->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.75, stop:0 rgba(109, 109, 109, 255), stop:1 rgba(0, 0, 0, 255));\n"
"color: white\n"
""));

        gridLayout->addWidget(pushButton_nr9, 1, 2, 1, 1);

        pushButton_nr0 = new QPushButton(main_tab);
        pushButton_nr0->setObjectName(QStringLiteral("pushButton_nr0"));
        sizePolicy5.setHeightForWidth(pushButton_nr0->sizePolicy().hasHeightForWidth());
        pushButton_nr0->setSizePolicy(sizePolicy5);
        pushButton_nr0->setMinimumSize(QSize(0, 70));
        pushButton_nr0->setBaseSize(QSize(0, 0));
        pushButton_nr0->setFont(font4);
        pushButton_nr0->setFocusPolicy(Qt::NoFocus);
        pushButton_nr0->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.75, stop:0 rgba(109, 109, 109, 255), stop:1 rgba(0, 0, 0, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_nr0, 4, 0, 1, 1);

        pushButton_down = new QPushButton(main_tab);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        sizePolicy5.setHeightForWidth(pushButton_down->sizePolicy().hasHeightForWidth());
        pushButton_down->setSizePolicy(sizePolicy5);
        pushButton_down->setMinimumSize(QSize(0, 70));
        pushButton_down->setBaseSize(QSize(0, 0));
        pushButton_down->setFont(font4);
        pushButton_down->setFocusPolicy(Qt::NoFocus);
        pushButton_down->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(93, 0, 165, 255), stop:1 rgba(168, 73, 255, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_down, 6, 0, 1, 1);

        pushButton_up = new QPushButton(main_tab);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        sizePolicy5.setHeightForWidth(pushButton_up->sizePolicy().hasHeightForWidth());
        pushButton_up->setSizePolicy(sizePolicy5);
        pushButton_up->setMinimumSize(QSize(0, 70));
        pushButton_up->setBaseSize(QSize(0, 0));
        pushButton_up->setFont(font4);
        pushButton_up->setFocusPolicy(Qt::NoFocus);
        pushButton_up->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(93, 0, 165, 255), stop:1 rgba(168, 73, 255, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_up, 5, 0, 1, 1);

        pushButton_nr1 = new QPushButton(main_tab);
        pushButton_nr1->setObjectName(QStringLiteral("pushButton_nr1"));
        sizePolicy5.setHeightForWidth(pushButton_nr1->sizePolicy().hasHeightForWidth());
        pushButton_nr1->setSizePolicy(sizePolicy5);
        pushButton_nr1->setMinimumSize(QSize(0, 70));
        pushButton_nr1->setBaseSize(QSize(0, 0));
        pushButton_nr1->setFont(font4);
        pushButton_nr1->setFocusPolicy(Qt::NoFocus);
        pushButton_nr1->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.75, stop:0 rgba(109, 109, 109, 255), stop:1 rgba(0, 0, 0, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_nr1, 3, 0, 1, 1);

        pushButton_nr3 = new QPushButton(main_tab);
        pushButton_nr3->setObjectName(QStringLiteral("pushButton_nr3"));
        sizePolicy5.setHeightForWidth(pushButton_nr3->sizePolicy().hasHeightForWidth());
        pushButton_nr3->setSizePolicy(sizePolicy5);
        pushButton_nr3->setMinimumSize(QSize(0, 70));
        pushButton_nr3->setBaseSize(QSize(0, 0));
        pushButton_nr3->setFont(font4);
        pushButton_nr3->setFocusPolicy(Qt::NoFocus);
        pushButton_nr3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.75, stop:0 rgba(109, 109, 109, 255), stop:1 rgba(0, 0, 0, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_nr3, 3, 2, 1, 1);

        pushButton_nr2 = new QPushButton(main_tab);
        pushButton_nr2->setObjectName(QStringLiteral("pushButton_nr2"));
        sizePolicy5.setHeightForWidth(pushButton_nr2->sizePolicy().hasHeightForWidth());
        pushButton_nr2->setSizePolicy(sizePolicy5);
        pushButton_nr2->setMinimumSize(QSize(0, 70));
        pushButton_nr2->setBaseSize(QSize(0, 0));
        pushButton_nr2->setFont(font4);
        pushButton_nr2->setFocusPolicy(Qt::NoFocus);
        pushButton_nr2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.75, stop:0 rgba(109, 109, 109, 255), stop:1 rgba(0, 0, 0, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_nr2, 3, 1, 1, 1);

        pushButton_nr5 = new QPushButton(main_tab);
        pushButton_nr5->setObjectName(QStringLiteral("pushButton_nr5"));
        sizePolicy5.setHeightForWidth(pushButton_nr5->sizePolicy().hasHeightForWidth());
        pushButton_nr5->setSizePolicy(sizePolicy5);
        pushButton_nr5->setMinimumSize(QSize(0, 70));
        pushButton_nr5->setBaseSize(QSize(0, 0));
        pushButton_nr5->setFont(font4);
        pushButton_nr5->setFocusPolicy(Qt::NoFocus);
        pushButton_nr5->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.75, stop:0 rgba(109, 109, 109, 255), stop:1 rgba(0, 0, 0, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_nr5, 2, 1, 1, 1);

        pushButton_delete = new QPushButton(main_tab);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        sizePolicy5.setHeightForWidth(pushButton_delete->sizePolicy().hasHeightForWidth());
        pushButton_delete->setSizePolicy(sizePolicy5);
        pushButton_delete->setMinimumSize(QSize(0, 70));
        pushButton_delete->setBaseSize(QSize(0, 0));
        pushButton_delete->setFont(font4);
        pushButton_delete->setFocusPolicy(Qt::NoFocus);
        pushButton_delete->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_delete, 2, 3, 1, 1);

        pushButton_nr6 = new QPushButton(main_tab);
        pushButton_nr6->setObjectName(QStringLiteral("pushButton_nr6"));
        sizePolicy5.setHeightForWidth(pushButton_nr6->sizePolicy().hasHeightForWidth());
        pushButton_nr6->setSizePolicy(sizePolicy5);
        pushButton_nr6->setMinimumSize(QSize(0, 70));
        pushButton_nr6->setBaseSize(QSize(0, 0));
        pushButton_nr6->setFont(font4);
        pushButton_nr6->setFocusPolicy(Qt::NoFocus);
        pushButton_nr6->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.75, stop:0 rgba(109, 109, 109, 255), stop:1 rgba(0, 0, 0, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_nr6, 2, 2, 1, 1);

        pushButton_clear = new QPushButton(main_tab);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        sizePolicy5.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy5);
        pushButton_clear->setMinimumSize(QSize(0, 70));
        pushButton_clear->setBaseSize(QSize(0, 0));
        pushButton_clear->setFont(font4);
        pushButton_clear->setFocusPolicy(Qt::NoFocus);
        pushButton_clear->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_clear, 3, 3, 1, 1);

        pushButton_nr4 = new QPushButton(main_tab);
        pushButton_nr4->setObjectName(QStringLiteral("pushButton_nr4"));
        sizePolicy5.setHeightForWidth(pushButton_nr4->sizePolicy().hasHeightForWidth());
        pushButton_nr4->setSizePolicy(sizePolicy5);
        pushButton_nr4->setMinimumSize(QSize(0, 70));
        pushButton_nr4->setBaseSize(QSize(0, 0));
        pushButton_nr4->setFont(font4);
        pushButton_nr4->setFocusPolicy(Qt::NoFocus);
        pushButton_nr4->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.75, stop:0 rgba(109, 109, 109, 255), stop:1 rgba(0, 0, 0, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_nr4, 2, 0, 1, 1);

        pushButton_nr00 = new QPushButton(main_tab);
        pushButton_nr00->setObjectName(QStringLiteral("pushButton_nr00"));
        sizePolicy5.setHeightForWidth(pushButton_nr00->sizePolicy().hasHeightForWidth());
        pushButton_nr00->setSizePolicy(sizePolicy5);
        pushButton_nr00->setMinimumSize(QSize(0, 70));
        pushButton_nr00->setBaseSize(QSize(0, 0));
        pushButton_nr00->setFont(font4);
        pushButton_nr00->setFocusPolicy(Qt::NoFocus);
        pushButton_nr00->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.75, stop:0 rgba(109, 109, 109, 255), stop:1 rgba(0, 0, 0, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_nr00, 4, 1, 1, 1);

        codeNumber = new QLineEdit(main_tab);
        codeNumber->setObjectName(QStringLiteral("codeNumber"));
        codeNumber->setMinimumSize(QSize(0, 80));
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setPointSize(36);
        font6.setBold(true);
        font6.setWeight(75);
        codeNumber->setFont(font6);
        codeNumber->setStyleSheet(QStringLiteral("color:white"));
        codeNumber->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhFormattedNumbersOnly);
        codeNumber->setMaxLength(20);

        gridLayout->addWidget(codeNumber, 0, 0, 1, 4);

        pushButton_przecinek = new QPushButton(main_tab);
        pushButton_przecinek->setObjectName(QStringLiteral("pushButton_przecinek"));
        sizePolicy5.setHeightForWidth(pushButton_przecinek->sizePolicy().hasHeightForWidth());
        pushButton_przecinek->setSizePolicy(sizePolicy5);
        pushButton_przecinek->setMinimumSize(QSize(0, 70));
        pushButton_przecinek->setBaseSize(QSize(0, 0));
        pushButton_przecinek->setFont(font4);
        pushButton_przecinek->setFocusPolicy(Qt::NoFocus);
        pushButton_przecinek->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.75, stop:0 rgba(109, 109, 109, 255), stop:1 rgba(0, 0, 0, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_przecinek, 4, 2, 1, 1);

        pushButton_zaplac = new QPushButton(main_tab);
        pushButton_zaplac->setObjectName(QStringLiteral("pushButton_zaplac"));
        sizePolicy5.setHeightForWidth(pushButton_zaplac->sizePolicy().hasHeightForWidth());
        pushButton_zaplac->setSizePolicy(sizePolicy5);
        pushButton_zaplac->setMinimumSize(QSize(0, 70));
        pushButton_zaplac->setBaseSize(QSize(0, 0));
        pushButton_zaplac->setFont(font4);
        pushButton_zaplac->setFocusPolicy(Qt::NoFocus);
        pushButton_zaplac->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(14, 146, 0, 255), stop:1 rgba(0, 255, 104, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_zaplac, 6, 2, 1, 2);

        pushButton_enter = new QPushButton(main_tab);
        pushButton_enter->setObjectName(QStringLiteral("pushButton_enter"));
        sizePolicy5.setHeightForWidth(pushButton_enter->sizePolicy().hasHeightForWidth());
        pushButton_enter->setSizePolicy(sizePolicy5);
        pushButton_enter->setMinimumSize(QSize(0, 70));
        pushButton_enter->setBaseSize(QSize(0, 0));
        pushButton_enter->setFont(font4);
        pushButton_enter->setFocusPolicy(Qt::NoFocus);
        pushButton_enter->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(44, 43, 156, 255), stop:1 rgba(138, 147, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(35, 34, 126, 255), stop:1 rgba(95, 106, 255, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_enter, 5, 1, 2, 1);

        pushButton_ilosc = new QPushButton(main_tab);
        pushButton_ilosc->setObjectName(QStringLiteral("pushButton_ilosc"));
        sizePolicy5.setHeightForWidth(pushButton_ilosc->sizePolicy().hasHeightForWidth());
        pushButton_ilosc->setSizePolicy(sizePolicy5);
        pushButton_ilosc->setMinimumSize(QSize(0, 70));
        pushButton_ilosc->setBaseSize(QSize(0, 0));
        pushButton_ilosc->setFont(font4);
        pushButton_ilosc->setFocusPolicy(Qt::NoFocus);
        pushButton_ilosc->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));\n"
"color:white;"));

        gridLayout->addWidget(pushButton_ilosc, 5, 2, 1, 1);

        pushButton = new QPushButton(main_tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy6);
        pushButton->setFont(font4);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QLatin1String("color:white;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(61, 196, 47, 255), stop:1 rgba(23, 88, 0, 255));"));

        gridLayout->addWidget(pushButton, 4, 3, 2, 1);

        tabWidget->addTab(main_tab, QString());
        promocje_tab = new QWidget();
        promocje_tab->setObjectName(QStringLiteral("promocje_tab"));
        gridLayout_3 = new QGridLayout(promocje_tab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tabWidget->addTab(promocje_tab, QString());

        horizontalLayout_2->addWidget(tabWidget);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Zakupy);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Zakupy);
    } // setupUi

    void retranslateUi(QDialog *Zakupy)
    {
        Zakupy->setWindowTitle(QApplication::translate("Zakupy", "ShoppedOUT - Zakupy", 0));
        label_info->setText(QString());
        groupBox->setTitle(QApplication::translate("Zakupy", "Podliczenie", 0));
        label_Brutto->setText(QApplication::translate("Zakupy", "0.00z\305\202", 0));
        label_2->setText(QApplication::translate("Zakupy", "Cena:", 0));
        label_7->setText(QApplication::translate("Zakupy", "Cena Netto:", 0));
        label_netto->setText(QApplication::translate("Zakupy", "0.00z\305\202", 0));
        label->setText(QString());
        pushButton_nr7->setText(QApplication::translate("Zakupy", "7", 0));
        pushButton_nr8->setText(QApplication::translate("Zakupy", "8", 0));
        pushButton_escape->setText(QApplication::translate("Zakupy", "[ESC]", 0));
        pushButton_nr9->setText(QApplication::translate("Zakupy", "9", 0));
        pushButton_nr0->setText(QApplication::translate("Zakupy", "0", 0));
        pushButton_down->setText(QApplication::translate("Zakupy", "DOWN", 0));
        pushButton_up->setText(QApplication::translate("Zakupy", "UP", 0));
        pushButton_nr1->setText(QApplication::translate("Zakupy", "1", 0));
        pushButton_nr3->setText(QApplication::translate("Zakupy", "3", 0));
        pushButton_nr2->setText(QApplication::translate("Zakupy", "2", 0));
        pushButton_nr5->setText(QApplication::translate("Zakupy", "5", 0));
        pushButton_delete->setText(QApplication::translate("Zakupy", "[DEL]", 0));
        pushButton_nr6->setText(QApplication::translate("Zakupy", "6", 0));
        pushButton_clear->setText(QApplication::translate("Zakupy", "[C]", 0));
        pushButton_nr4->setText(QApplication::translate("Zakupy", "4", 0));
        pushButton_nr00->setText(QApplication::translate("Zakupy", "00", 0));
        pushButton_przecinek->setText(QApplication::translate("Zakupy", ",", 0));
        pushButton_zaplac->setText(QApplication::translate("Zakupy", "ZAP\305\201A\304\206", 0));
        pushButton_enter->setText(QApplication::translate("Zakupy", "ENTER", 0));
        pushButton_ilosc->setText(QApplication::translate("Zakupy", "[ILO\305\232\304\206]", 0));
        pushButton->setText(QApplication::translate("Zakupy", "INFO", 0));
        tabWidget->setTabText(tabWidget->indexOf(main_tab), QApplication::translate("Zakupy", "Main", 0));
        tabWidget->setTabText(tabWidget->indexOf(promocje_tab), QApplication::translate("Zakupy", "Promocje", 0));
    } // retranslateUi

};

namespace Ui {
    class Zakupy: public Ui_Zakupy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZAKUPY_H
