/********************************************************************************
** Form generated from reading UI file 'teachermanagement.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERMANAGEMENT_H
#define UI_TEACHERMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teachermanagement
{
public:
    QGroupBox *groupBox;
    QPushButton *changeBtn;
    QPushButton *setBtn;
    QPushButton *backBtn;
    QTableView *searchView;
    QLineEdit *inputLine;
    QPushButton *searchBtn;
    QGroupBox *registerBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *registerBtn;
    QLineEdit *numLine;
    QLineEdit *nameLine;
    QLineEdit *zuheLine;
    QLineEdit *shuliLine;
    QLineEdit *fenbuLine;
    QPushButton *delBtn;
    QLabel *label_6;

    void setupUi(QWidget *teachermanagement)
    {
        if (teachermanagement->objectName().isEmpty())
            teachermanagement->setObjectName(QStringLiteral("teachermanagement"));
        teachermanagement->resize(462, 335);
        groupBox = new QGroupBox(teachermanagement);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 120, 251));
        changeBtn = new QPushButton(groupBox);
        changeBtn->setObjectName(QStringLiteral("changeBtn"));
        changeBtn->setGeometry(QRect(10, 120, 91, 23));
        setBtn = new QPushButton(groupBox);
        setBtn->setObjectName(QStringLiteral("setBtn"));
        setBtn->setGeometry(QRect(10, 40, 91, 23));
        backBtn = new QPushButton(groupBox);
        backBtn->setObjectName(QStringLiteral("backBtn"));
        backBtn->setGeometry(QRect(10, 210, 91, 23));
        searchView = new QTableView(teachermanagement);
        searchView->setObjectName(QStringLiteral("searchView"));
        searchView->setGeometry(QRect(140, 20, 301, 221));
        inputLine = new QLineEdit(teachermanagement);
        inputLine->setObjectName(QStringLiteral("inputLine"));
        inputLine->setGeometry(QRect(140, 260, 191, 20));
        searchBtn = new QPushButton(teachermanagement);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        searchBtn->setGeometry(QRect(350, 260, 91, 23));
        registerBox = new QGroupBox(teachermanagement);
        registerBox->setObjectName(QStringLiteral("registerBox"));
        registerBox->setGeometry(QRect(160, 30, 271, 201));
        label = new QLabel(registerBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 54, 12));
        label_2 = new QLabel(registerBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 54, 12));
        label_3 = new QLabel(registerBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 54, 12));
        label_4 = new QLabel(registerBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 120, 54, 12));
        label_5 = new QLabel(registerBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 140, 71, 16));
        registerBtn = new QPushButton(registerBox);
        registerBtn->setObjectName(QStringLiteral("registerBtn"));
        registerBtn->setGeometry(QRect(150, 170, 75, 23));
        numLine = new QLineEdit(registerBox);
        numLine->setObjectName(QStringLiteral("numLine"));
        numLine->setGeometry(QRect(90, 30, 113, 20));
        nameLine = new QLineEdit(registerBox);
        nameLine->setObjectName(QStringLiteral("nameLine"));
        nameLine->setGeometry(QRect(90, 60, 113, 20));
        zuheLine = new QLineEdit(registerBox);
        zuheLine->setObjectName(QStringLiteral("zuheLine"));
        zuheLine->setGeometry(QRect(90, 80, 113, 20));
        shuliLine = new QLineEdit(registerBox);
        shuliLine->setObjectName(QStringLiteral("shuliLine"));
        shuliLine->setGeometry(QRect(90, 110, 113, 20));
        fenbuLine = new QLineEdit(registerBox);
        fenbuLine->setObjectName(QStringLiteral("fenbuLine"));
        fenbuLine->setGeometry(QRect(90, 130, 113, 20));
        delBtn = new QPushButton(teachermanagement);
        delBtn->setObjectName(QStringLiteral("delBtn"));
        delBtn->setGeometry(QRect(350, 290, 91, 23));
        label_6 = new QLabel(teachermanagement);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, -10, 471, 351));
        label_6->setStyleSheet(QStringLiteral("border-image:url(:/gradesystem/Resources/teacherbk.jpg)"));
        label_6->raise();
        groupBox->raise();
        searchView->raise();
        inputLine->raise();
        searchBtn->raise();
        registerBox->raise();
        delBtn->raise();

        retranslateUi(teachermanagement);

        QMetaObject::connectSlotsByName(teachermanagement);
    } // setupUi

    void retranslateUi(QWidget *teachermanagement)
    {
        teachermanagement->setWindowTitle(QApplication::translate("teachermanagement", "teachermanagement", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("teachermanagement", "\347\256\241\347\220\206\351\200\211\351\241\271", Q_NULLPTR));
        changeBtn->setText(QApplication::translate("teachermanagement", "\344\277\256\346\224\271\346\210\220\347\273\251", Q_NULLPTR));
        setBtn->setText(QApplication::translate("teachermanagement", "\347\231\273\350\256\260\346\210\220\347\273\251", Q_NULLPTR));
        backBtn->setText(QApplication::translate("teachermanagement", "\350\277\224\345\233\236", Q_NULLPTR));
        searchBtn->setText(QApplication::translate("teachermanagement", "\346\237\245\350\257\242", Q_NULLPTR));
        registerBox->setTitle(QApplication::translate("teachermanagement", "\346\210\220\347\273\251\347\231\273\350\256\260", Q_NULLPTR));
        label->setText(QApplication::translate("teachermanagement", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("teachermanagement", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("teachermanagement", "\347\273\204\345\220\210\346\225\260\345\255\246\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("teachermanagement", "\346\225\260\347\220\206\347\273\237\350\256\241\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("teachermanagement", "\345\210\206\345\270\203\345\274\217\347\263\273\347\273\237\357\274\232", Q_NULLPTR));
        registerBtn->setText(QApplication::translate("teachermanagement", "\347\231\273\350\256\260", Q_NULLPTR));
        delBtn->setText(QApplication::translate("teachermanagement", "\345\210\240\351\231\244\346\210\220\347\273\251", Q_NULLPTR));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class teachermanagement: public Ui_teachermanagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERMANAGEMENT_H
