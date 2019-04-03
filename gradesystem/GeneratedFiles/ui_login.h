/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *loginBtn;
    QPushButton *registerBtn;
    QRadioButton *studentRadio;
    QRadioButton *teacherRadio;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *passwordLineEdit;
    QLineEdit *IDLineEdit;
    QLabel *label_4;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(407, 269);
        loginBtn = new QPushButton(login);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(110, 220, 75, 23));
        registerBtn = new QPushButton(login);
        registerBtn->setObjectName(QStringLiteral("registerBtn"));
        registerBtn->setGeometry(QRect(240, 220, 75, 23));
        studentRadio = new QRadioButton(login);
        studentRadio->setObjectName(QStringLiteral("studentRadio"));
        studentRadio->setGeometry(QRect(150, 180, 89, 16));
        teacherRadio = new QRadioButton(login);
        teacherRadio->setObjectName(QStringLiteral("teacherRadio"));
        teacherRadio->setGeometry(QRect(270, 180, 89, 16));
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(89, 101, 36, 16));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(88, 140, 36, 16));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 30, 251, 31));
        label_3->setStyleSheet(QStringLiteral("font: 20pt \"DFKai-SB\";"));
        passwordLineEdit = new QLineEdit(login);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(130, 140, 191, 20));
        IDLineEdit = new QLineEdit(login);
        IDLineEdit->setObjectName(QStringLiteral("IDLineEdit"));
        IDLineEdit->setGeometry(QRect(131, 101, 191, 20));
        label_4 = new QLabel(login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 411, 271));
        label_4->setStyleSheet(QStringLiteral("border-image:url(:/gradesystem/Resources/loginbk.jpg)"));
        label_4->raise();
        loginBtn->raise();
        registerBtn->raise();
        studentRadio->raise();
        teacherRadio->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        passwordLineEdit->raise();
        IDLineEdit->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", Q_NULLPTR));
        loginBtn->setText(QApplication::translate("login", "\347\231\273\345\275\225", Q_NULLPTR));
        registerBtn->setText(QApplication::translate("login", "\346\263\250\345\206\214", Q_NULLPTR));
        studentRadio->setText(QApplication::translate("login", "\345\255\246\347\224\237", Q_NULLPTR));
        teacherRadio->setText(QApplication::translate("login", "\346\225\231\345\270\210", Q_NULLPTR));
        label->setText(QApplication::translate("login", "\345\267\245\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("login", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
