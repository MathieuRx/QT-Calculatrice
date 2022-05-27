/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_26;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_11;
    QLabel *label_5;
    QPushButton *pushButton_6;
    QLabel *label_3;
    QLineEdit *lineEdit_12;
    QLabel *label_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QLineEdit *lineEdit_25;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_27;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_21;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_10;
    QLabel *label_8;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_15;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLineEdit *lineEdit_28;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_31;
    QLineEdit *lineEdit_35;
    QLineEdit *lineEdit_42;
    QLineEdit *lineEdit_40;
    QPushButton *pushButton_15;
    QLineEdit *lineEdit_32;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QLineEdit *lineEdit_30;
    QLineEdit *lineEdit_29;
    QPushButton *pushButton_13;
    QLineEdit *lineEdit_34;
    QLineEdit *lineEdit_36;
    QLineEdit *lineEdit_33;
    QLineEdit *lineEdit_38;
    QLineEdit *lineEdit_43;
    QLineEdit *lineEdit_41;
    QPushButton *pushButton_14;
    QLineEdit *lineEdit_45;
    QLineEdit *lineEdit_39;
    QLineEdit *lineEdit_44;
    QPushButton *pushButton_10;
    QLineEdit *lineEdit_37;
    QLineEdit *lineEdit_46;
    QLineEdit *lineEdit_47;
    QPushButton *pushButton_16;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_18;
    QPushButton *pushButton_17;
    QLineEdit *lineEdit_49;
    QLineEdit *lineEdit_56;
    QLineEdit *lineEdit_55;
    QLineEdit *lineEdit_62;
    QLineEdit *lineEdit_48;
    QLineEdit *lineEdit_52;
    QLineEdit *lineEdit_64;
    QLineEdit *lineEdit_51;
    QPushButton *pushButton_21;
    QLineEdit *lineEdit_65;
    QLineEdit *lineEdit_63;
    QLineEdit *lineEdit_57;
    QLineEdit *lineEdit_54;
    QLineEdit *lineEdit_59;
    QPushButton *pushButton_20;
    QLineEdit *lineEdit_60;
    QLineEdit *lineEdit_53;
    QLineEdit *lineEdit_50;
    QPushButton *pushButton_19;
    QLineEdit *lineEdit_58;
    QPushButton *pushButton_22;
    QLineEdit *lineEdit_66;
    QLineEdit *lineEdit_61;
    QWidget *tab_4;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEdit_67;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_68;
    QLineEdit *lineEdit_69;
    QWidget *tab_5;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEdit_71;
    QLineEdit *lineEdit_72;
    QLabel *label_13;
    QLineEdit *lineEdit_70;
    QPushButton *pushButton_23;
    QLabel *label_14;
    QLabel *label_12;
    QLabel *label_15;
    QLineEdit *lineEdit_73;
    QWidget *tab_6;
    QGridLayout *gridLayout_6;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *lineEdit_77;
    QLabel *label_17;
    QLineEdit *lineEdit_74;
    QLineEdit *lineEdit_76;
    QLineEdit *lineEdit_75;
    QPushButton *pushButton_24;
    QPushButton *pushButton_9;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons/calc.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Sans Serif"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        tabWidget->setFont(font1);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_9 = new QLineEdit(tab);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        gridLayout->addWidget(lineEdit_9, 4, 0, 1, 1);

        lineEdit_26 = new QLineEdit(tab);
        lineEdit_26->setObjectName(QString::fromUtf8("lineEdit_26"));

        gridLayout->addWidget(lineEdit_26, 4, 6, 1, 1);

        lineEdit_17 = new QLineEdit(tab);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));

        gridLayout->addWidget(lineEdit_17, 2, 3, 1, 1);

        lineEdit_7 = new QLineEdit(tab);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 5, 0, 1, 1);

        lineEdit_11 = new QLineEdit(tab);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));

        gridLayout->addWidget(lineEdit_11, 2, 1, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 4, 1, 1);

        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 4, 2, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 4, 1, 1);

        lineEdit_12 = new QLineEdit(tab);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));

        gridLayout->addWidget(lineEdit_12, 3, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 4, 1, 1);

        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 5, 2, 1, 1);

        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 3, 2, 1, 1);

        lineEdit_6 = new QLineEdit(tab);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 3, 0, 1, 1);

        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 0, 1, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 4, 1, 1);

        lineEdit_25 = new QLineEdit(tab);
        lineEdit_25->setObjectName(QString::fromUtf8("lineEdit_25"));

        gridLayout->addWidget(lineEdit_25, 3, 6, 1, 1);

        lineEdit_8 = new QLineEdit(tab);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        gridLayout->addWidget(lineEdit_8, 6, 0, 1, 1);

        lineEdit_4 = new QLineEdit(tab);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 6, 2, 1, 1);

        lineEdit_16 = new QLineEdit(tab);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));

        gridLayout->addWidget(lineEdit_16, 1, 3, 1, 1);

        lineEdit_27 = new QLineEdit(tab);
        lineEdit_27->setObjectName(QString::fromUtf8("lineEdit_27"));

        gridLayout->addWidget(lineEdit_27, 5, 6, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 4, 1, 1);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        lineEdit_22 = new QLineEdit(tab);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));

        gridLayout->addWidget(lineEdit_22, 0, 6, 1, 1);

        lineEdit_14 = new QLineEdit(tab);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

        gridLayout->addWidget(lineEdit_14, 5, 1, 1, 1);

        lineEdit_20 = new QLineEdit(tab);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));

        gridLayout->addWidget(lineEdit_20, 5, 3, 1, 1);

        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 0, 3, 1, 1);

        lineEdit_23 = new QLineEdit(tab);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));

        gridLayout->addWidget(lineEdit_23, 1, 6, 1, 1);

        lineEdit_19 = new QLineEdit(tab);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));

        gridLayout->addWidget(lineEdit_19, 4, 3, 1, 1);

        lineEdit_18 = new QLineEdit(tab);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));

        gridLayout->addWidget(lineEdit_18, 3, 3, 1, 1);

        lineEdit_21 = new QLineEdit(tab);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));

        gridLayout->addWidget(lineEdit_21, 6, 3, 1, 1);

        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 2, 2, 1, 1);

        lineEdit_24 = new QLineEdit(tab);
        lineEdit_24->setObjectName(QString::fromUtf8("lineEdit_24"));

        gridLayout->addWidget(lineEdit_24, 2, 6, 1, 1);

        lineEdit_10 = new QLineEdit(tab);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        gridLayout->addWidget(lineEdit_10, 1, 1, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 6, 4, 1, 1);

        lineEdit_13 = new QLineEdit(tab);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        gridLayout->addWidget(lineEdit_13, 4, 1, 1, 1);

        lineEdit_5 = new QLineEdit(tab);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 2, 0, 1, 1);

        lineEdit_15 = new QLineEdit(tab);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));

        gridLayout->addWidget(lineEdit_15, 6, 1, 1, 1);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 4, 1, 1);

        lineEdit_28 = new QLineEdit(tab);
        lineEdit_28->setObjectName(QString::fromUtf8("lineEdit_28"));

        gridLayout->addWidget(lineEdit_28, 6, 6, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        tab_3->setFont(font2);
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_31 = new QLineEdit(tab_3);
        lineEdit_31->setObjectName(QString::fromUtf8("lineEdit_31"));

        gridLayout_2->addWidget(lineEdit_31, 0, 3, 1, 1);

        lineEdit_35 = new QLineEdit(tab_3);
        lineEdit_35->setObjectName(QString::fromUtf8("lineEdit_35"));

        gridLayout_2->addWidget(lineEdit_35, 2, 1, 1, 1);

        lineEdit_42 = new QLineEdit(tab_3);
        lineEdit_42->setObjectName(QString::fromUtf8("lineEdit_42"));

        gridLayout_2->addWidget(lineEdit_42, 4, 3, 1, 1);

        lineEdit_40 = new QLineEdit(tab_3);
        lineEdit_40->setObjectName(QString::fromUtf8("lineEdit_40"));

        gridLayout_2->addWidget(lineEdit_40, 4, 0, 1, 1);

        pushButton_15 = new QPushButton(tab_3);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        gridLayout_2->addWidget(pushButton_15, 5, 2, 1, 1);

        lineEdit_32 = new QLineEdit(tab_3);
        lineEdit_32->setObjectName(QString::fromUtf8("lineEdit_32"));

        gridLayout_2->addWidget(lineEdit_32, 1, 0, 1, 1);

        pushButton_12 = new QPushButton(tab_3);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout_2->addWidget(pushButton_12, 2, 2, 1, 1);

        pushButton_11 = new QPushButton(tab_3);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout_2->addWidget(pushButton_11, 1, 2, 1, 1);

        lineEdit_30 = new QLineEdit(tab_3);
        lineEdit_30->setObjectName(QString::fromUtf8("lineEdit_30"));

        gridLayout_2->addWidget(lineEdit_30, 0, 1, 1, 1);

        lineEdit_29 = new QLineEdit(tab_3);
        lineEdit_29->setObjectName(QString::fromUtf8("lineEdit_29"));

        gridLayout_2->addWidget(lineEdit_29, 0, 0, 1, 1);

        pushButton_13 = new QPushButton(tab_3);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        gridLayout_2->addWidget(pushButton_13, 3, 2, 1, 1);

        lineEdit_34 = new QLineEdit(tab_3);
        lineEdit_34->setObjectName(QString::fromUtf8("lineEdit_34"));

        gridLayout_2->addWidget(lineEdit_34, 1, 3, 1, 1);

        lineEdit_36 = new QLineEdit(tab_3);
        lineEdit_36->setObjectName(QString::fromUtf8("lineEdit_36"));

        gridLayout_2->addWidget(lineEdit_36, 2, 3, 1, 1);

        lineEdit_33 = new QLineEdit(tab_3);
        lineEdit_33->setObjectName(QString::fromUtf8("lineEdit_33"));

        gridLayout_2->addWidget(lineEdit_33, 1, 1, 1, 1);

        lineEdit_38 = new QLineEdit(tab_3);
        lineEdit_38->setObjectName(QString::fromUtf8("lineEdit_38"));

        gridLayout_2->addWidget(lineEdit_38, 3, 0, 1, 1);

        lineEdit_43 = new QLineEdit(tab_3);
        lineEdit_43->setObjectName(QString::fromUtf8("lineEdit_43"));

        gridLayout_2->addWidget(lineEdit_43, 5, 0, 1, 1);

        lineEdit_41 = new QLineEdit(tab_3);
        lineEdit_41->setObjectName(QString::fromUtf8("lineEdit_41"));

        gridLayout_2->addWidget(lineEdit_41, 4, 1, 1, 1);

        pushButton_14 = new QPushButton(tab_3);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        gridLayout_2->addWidget(pushButton_14, 4, 2, 1, 1);

        lineEdit_45 = new QLineEdit(tab_3);
        lineEdit_45->setObjectName(QString::fromUtf8("lineEdit_45"));

        gridLayout_2->addWidget(lineEdit_45, 5, 3, 1, 1);

        lineEdit_39 = new QLineEdit(tab_3);
        lineEdit_39->setObjectName(QString::fromUtf8("lineEdit_39"));

        gridLayout_2->addWidget(lineEdit_39, 3, 3, 1, 1);

        lineEdit_44 = new QLineEdit(tab_3);
        lineEdit_44->setObjectName(QString::fromUtf8("lineEdit_44"));

        gridLayout_2->addWidget(lineEdit_44, 5, 1, 1, 1);

        pushButton_10 = new QPushButton(tab_3);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_2->addWidget(pushButton_10, 0, 2, 1, 1);

        lineEdit_37 = new QLineEdit(tab_3);
        lineEdit_37->setObjectName(QString::fromUtf8("lineEdit_37"));

        gridLayout_2->addWidget(lineEdit_37, 3, 1, 1, 1);

        lineEdit_46 = new QLineEdit(tab_3);
        lineEdit_46->setObjectName(QString::fromUtf8("lineEdit_46"));

        gridLayout_2->addWidget(lineEdit_46, 6, 1, 1, 1);

        lineEdit_47 = new QLineEdit(tab_3);
        lineEdit_47->setObjectName(QString::fromUtf8("lineEdit_47"));

        gridLayout_2->addWidget(lineEdit_47, 6, 3, 1, 1);

        pushButton_16 = new QPushButton(tab_3);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));

        gridLayout_2->addWidget(pushButton_16, 6, 2, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_18 = new QPushButton(tab_2);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));

        gridLayout_3->addWidget(pushButton_18, 1, 2, 1, 1);

        pushButton_17 = new QPushButton(tab_2);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));

        gridLayout_3->addWidget(pushButton_17, 0, 2, 1, 1);

        lineEdit_49 = new QLineEdit(tab_2);
        lineEdit_49->setObjectName(QString::fromUtf8("lineEdit_49"));

        gridLayout_3->addWidget(lineEdit_49, 0, 1, 1, 1);

        lineEdit_56 = new QLineEdit(tab_2);
        lineEdit_56->setObjectName(QString::fromUtf8("lineEdit_56"));

        gridLayout_3->addWidget(lineEdit_56, 2, 0, 1, 1);

        lineEdit_55 = new QLineEdit(tab_2);
        lineEdit_55->setObjectName(QString::fromUtf8("lineEdit_55"));

        gridLayout_3->addWidget(lineEdit_55, 1, 4, 1, 1);

        lineEdit_62 = new QLineEdit(tab_2);
        lineEdit_62->setObjectName(QString::fromUtf8("lineEdit_62"));

        gridLayout_3->addWidget(lineEdit_62, 3, 3, 1, 1);

        lineEdit_48 = new QLineEdit(tab_2);
        lineEdit_48->setObjectName(QString::fromUtf8("lineEdit_48"));

        gridLayout_3->addWidget(lineEdit_48, 0, 0, 1, 1);

        lineEdit_52 = new QLineEdit(tab_2);
        lineEdit_52->setObjectName(QString::fromUtf8("lineEdit_52"));

        gridLayout_3->addWidget(lineEdit_52, 1, 0, 1, 1);

        lineEdit_64 = new QLineEdit(tab_2);
        lineEdit_64->setObjectName(QString::fromUtf8("lineEdit_64"));

        gridLayout_3->addWidget(lineEdit_64, 4, 1, 1, 1);

        lineEdit_51 = new QLineEdit(tab_2);
        lineEdit_51->setObjectName(QString::fromUtf8("lineEdit_51"));

        gridLayout_3->addWidget(lineEdit_51, 0, 4, 1, 1);

        pushButton_21 = new QPushButton(tab_2);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));

        gridLayout_3->addWidget(pushButton_21, 4, 2, 1, 1);

        lineEdit_65 = new QLineEdit(tab_2);
        lineEdit_65->setObjectName(QString::fromUtf8("lineEdit_65"));

        gridLayout_3->addWidget(lineEdit_65, 4, 3, 1, 1);

        lineEdit_63 = new QLineEdit(tab_2);
        lineEdit_63->setObjectName(QString::fromUtf8("lineEdit_63"));

        gridLayout_3->addWidget(lineEdit_63, 3, 4, 1, 1);

        lineEdit_57 = new QLineEdit(tab_2);
        lineEdit_57->setObjectName(QString::fromUtf8("lineEdit_57"));

        gridLayout_3->addWidget(lineEdit_57, 2, 1, 1, 1);

        lineEdit_54 = new QLineEdit(tab_2);
        lineEdit_54->setObjectName(QString::fromUtf8("lineEdit_54"));

        gridLayout_3->addWidget(lineEdit_54, 1, 3, 1, 1);

        lineEdit_59 = new QLineEdit(tab_2);
        lineEdit_59->setObjectName(QString::fromUtf8("lineEdit_59"));

        gridLayout_3->addWidget(lineEdit_59, 2, 4, 1, 1);

        pushButton_20 = new QPushButton(tab_2);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));

        gridLayout_3->addWidget(pushButton_20, 3, 2, 1, 1);

        lineEdit_60 = new QLineEdit(tab_2);
        lineEdit_60->setObjectName(QString::fromUtf8("lineEdit_60"));

        gridLayout_3->addWidget(lineEdit_60, 3, 0, 1, 1);

        lineEdit_53 = new QLineEdit(tab_2);
        lineEdit_53->setObjectName(QString::fromUtf8("lineEdit_53"));

        gridLayout_3->addWidget(lineEdit_53, 1, 1, 1, 1);

        lineEdit_50 = new QLineEdit(tab_2);
        lineEdit_50->setObjectName(QString::fromUtf8("lineEdit_50"));

        gridLayout_3->addWidget(lineEdit_50, 0, 3, 1, 1);

        pushButton_19 = new QPushButton(tab_2);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));

        gridLayout_3->addWidget(pushButton_19, 2, 2, 1, 1);

        lineEdit_58 = new QLineEdit(tab_2);
        lineEdit_58->setObjectName(QString::fromUtf8("lineEdit_58"));

        gridLayout_3->addWidget(lineEdit_58, 2, 3, 1, 1);

        pushButton_22 = new QPushButton(tab_2);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));

        gridLayout_3->addWidget(pushButton_22, 5, 2, 1, 1);

        lineEdit_66 = new QLineEdit(tab_2);
        lineEdit_66->setObjectName(QString::fromUtf8("lineEdit_66"));

        gridLayout_3->addWidget(lineEdit_66, 5, 3, 1, 1);

        lineEdit_61 = new QLineEdit(tab_2);
        lineEdit_61->setObjectName(QString::fromUtf8("lineEdit_61"));

        gridLayout_3->addWidget(lineEdit_61, 3, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_4 = new QGridLayout(tab_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lineEdit_67 = new QLineEdit(tab_4);
        lineEdit_67->setObjectName(QString::fromUtf8("lineEdit_67"));

        gridLayout_4->addWidget(lineEdit_67, 1, 0, 1, 1);

        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_11, 4, 0, 1, 1);

        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font3;
        font3.setStyleStrategy(QFont::PreferDefault);
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_10, 2, 0, 1, 1);

        lineEdit_68 = new QLineEdit(tab_4);
        lineEdit_68->setObjectName(QString::fromUtf8("lineEdit_68"));

        gridLayout_4->addWidget(lineEdit_68, 3, 0, 1, 1);

        lineEdit_69 = new QLineEdit(tab_4);
        lineEdit_69->setObjectName(QString::fromUtf8("lineEdit_69"));

        gridLayout_4->addWidget(lineEdit_69, 5, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_5 = new QGridLayout(tab_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        lineEdit_71 = new QLineEdit(tab_5);
        lineEdit_71->setObjectName(QString::fromUtf8("lineEdit_71"));

        gridLayout_5->addWidget(lineEdit_71, 2, 1, 1, 1);

        lineEdit_72 = new QLineEdit(tab_5);
        lineEdit_72->setObjectName(QString::fromUtf8("lineEdit_72"));

        gridLayout_5->addWidget(lineEdit_72, 5, 0, 1, 1);

        label_13 = new QLabel(tab_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMaximumSize(QSize(1500, 100));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_13, 4, 0, 1, 1);

        lineEdit_70 = new QLineEdit(tab_5);
        lineEdit_70->setObjectName(QString::fromUtf8("lineEdit_70"));

        gridLayout_5->addWidget(lineEdit_70, 2, 0, 1, 1);

        pushButton_23 = new QPushButton(tab_5);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));

        gridLayout_5->addWidget(pushButton_23, 6, 0, 1, 3);

        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_14, 0, 0, 1, 1);

        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_12, 0, 1, 1, 1);

        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_15, 4, 1, 1, 1);

        lineEdit_73 = new QLineEdit(tab_5);
        lineEdit_73->setObjectName(QString::fromUtf8("lineEdit_73"));

        gridLayout_5->addWidget(lineEdit_73, 5, 1, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_6 = new QGridLayout(tab_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_16 = new QLabel(tab_6);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_16, 0, 0, 1, 1);

        label_18 = new QLabel(tab_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        label_18->setFont(font4);
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_18, 2, 0, 1, 1);

        label_19 = new QLabel(tab_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font4);
        label_19->setTextFormat(Qt::AutoText);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_19, 2, 1, 1, 1);

        lineEdit_77 = new QLineEdit(tab_6);
        lineEdit_77->setObjectName(QString::fromUtf8("lineEdit_77"));

        gridLayout_6->addWidget(lineEdit_77, 3, 1, 1, 1);

        label_17 = new QLabel(tab_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_17, 0, 1, 1, 1);

        lineEdit_74 = new QLineEdit(tab_6);
        lineEdit_74->setObjectName(QString::fromUtf8("lineEdit_74"));

        gridLayout_6->addWidget(lineEdit_74, 1, 0, 1, 1);

        lineEdit_76 = new QLineEdit(tab_6);
        lineEdit_76->setObjectName(QString::fromUtf8("lineEdit_76"));

        gridLayout_6->addWidget(lineEdit_76, 3, 0, 1, 1);

        lineEdit_75 = new QLineEdit(tab_6);
        lineEdit_75->setObjectName(QString::fromUtf8("lineEdit_75"));

        gridLayout_6->addWidget(lineEdit_75, 1, 1, 1, 1);

        pushButton_24 = new QPushButton(tab_6);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));

        gridLayout_6->addWidget(pushButton_24, 4, 0, 1, 2);

        tabWidget->addTab(tab_6, QString());

        verticalLayout->addWidget(tabWidget);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculatrice 2021-2022", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Calculatrice 2021-2022", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "0x", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "addition_INT_NS", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "0x", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "0x", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "addition_INT_S", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "addition_SHORT_S", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "0x", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "module_INT_NS", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "0x", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "addition_CHAR_S", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "addition_SHORT_NS", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "0x", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "addition_CHAR_NS", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "0x", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Entiers", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "ET bit \303\240 bit", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "NON", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "ET", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "OU bit \303\240 bit", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "OU Ex bit \303\240 bit", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "OU", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "NON bit \303\240 bit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Booleens", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "soustraction", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "addition", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "IEEE 754 32 bits", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "division", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "multiplication", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "IEEE 754 64 bits", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "R\303\251els", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "BASE 2", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "BASE 10", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "BASE 16", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Conversions", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Code Utf-8", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "Table ASCII Etendue", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Caract\303\250re", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Code ASCII", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Code Unicode", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "ASCII", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Partie r\303\251elle", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\317\201", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\316\270", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Partie imaginaire", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "Dessin du nombre complexe", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Complexes", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Effacer", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
