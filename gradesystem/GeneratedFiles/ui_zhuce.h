/********************************************************************************
** Form generated from reading UI file 'zhuce.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUCE_H
#define UI_ZHUCE_H

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

class Ui_zhuce
{
public:
    QLineEdit *userline;
    QLabel *yanzhenglabel;
    QRadioButton *teacherradio;
    QLineEdit *studentnumline;
    QLineEdit *passwordline;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *yanzhengline;
    QRadioButton *studentradio;
    QLineEdit *passwordline1;
    QPushButton *registerBtn;
    QPushButton *returnBtn;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *zhuce)
    {
        if (zhuce->objectName().isEmpty())
            zhuce->setObjectName(QStringLiteral("zhuce"));
        zhuce->resize(400, 300);
        userline = new QLineEdit(zhuce);
        userline->setObjectName(QStringLiteral("userline"));
        userline->setGeometry(QRect(108, 62, 211, 20));
        yanzhenglabel = new QLabel(zhuce);
        yanzhenglabel->setObjectName(QStringLiteral("yanzhenglabel"));
        yanzhenglabel->setGeometry(QRect(40, 180, 36, 16));
        yanzhenglabel->setStyleSheet(QString::fromUtf8("font: 14pt \"\344\273\277\345\256\213\";"));
        teacherradio = new QRadioButton(zhuce);
        teacherradio->setObjectName(QStringLiteral("teacherradio"));
        teacherradio->setGeometry(QRect(258, 221, 47, 16));
        studentnumline = new QLineEdit(zhuce);
        studentnumline->setObjectName(QStringLiteral("studentnumline"));
        studentnumline->setGeometry(QRect(108, 90, 211, 20));
        passwordline = new QLineEdit(zhuce);
        passwordline->setObjectName(QStringLiteral("passwordline"));
        passwordline->setGeometry(QRect(108, 118, 211, 20));
        label = new QLabel(zhuce);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(168, 0, 101, 51));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\226\260\345\256\213\344\275\223\";"));
        label_3 = new QLabel(zhuce);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 90, 36, 16));
        yanzhengline = new QLineEdit(zhuce);
        yanzhengline->setObjectName(QStringLiteral("yanzhengline"));
        yanzhengline->setGeometry(QRect(108, 174, 211, 20));
        studentradio = new QRadioButton(zhuce);
        studentradio->setObjectName(QStringLiteral("studentradio"));
        studentradio->setGeometry(QRect(118, 221, 47, 16));
        passwordline1 = new QLineEdit(zhuce);
        passwordline1->setObjectName(QStringLiteral("passwordline1"));
        passwordline1->setGeometry(QRect(106, 146, 211, 20));
        registerBtn = new QPushButton(zhuce);
        registerBtn->setObjectName(QStringLiteral("registerBtn"));
        registerBtn->setGeometry(QRect(98, 250, 75, 23));
        returnBtn = new QPushButton(zhuce);
        returnBtn->setObjectName(QStringLiteral("returnBtn"));
        returnBtn->setGeometry(QRect(248, 250, 75, 23));
        label_2 = new QLabel(zhuce);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 62, 36, 16));
        label_4 = new QLabel(zhuce);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 120, 36, 16));
        label_5 = new QLabel(zhuce);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 150, 60, 16));
        label_6 = new QLabel(zhuce);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(-10, -10, 421, 311));
        label_6->setStyleSheet(QStringLiteral("border-image:url(:/gradesystem/Resources/registerbk.jpg)"));
        label_6->raise();
        userline->raise();
        yanzhenglabel->raise();
        teacherradio->raise();
        studentnumline->raise();
        passwordline->raise();
        label->raise();
        label_3->raise();
        yanzhengline->raise();
        studentradio->raise();
        passwordline1->raise();
        registerBtn->raise();
        returnBtn->raise();
        label_2->raise();
        label_4->raise();
        label_5->raise();

        retranslateUi(zhuce);

        QMetaObject::connectSlotsByName(zhuce);
    } // setupUi

    void retranslateUi(QWidget *zhuce)
    {
        zhuce->setWindowTitle(QApplication::translate("zhuce", "zhuce", Q_NULLPTR));
        yanzhenglabel->setText(QString());
        teacherradio->setText(QApplication::translate("zhuce", "\346\225\231\345\270\210", Q_NULLPTR));
        label->setText(QApplication::translate("zhuce", "\346\263\250\345\206\214", Q_NULLPTR));
        label_3->setText(QApplication::translate("zhuce", "\345\267\245\345\217\267\357\274\232", Q_NULLPTR));
        studentradio->setText(QApplication::translate("zhuce", "\345\255\246\347\224\237", Q_NULLPTR));
        registerBtn->setText(QApplication::translate("zhuce", "\346\263\250\345\206\214", Q_NULLPTR));
        returnBtn->setText(QApplication::translate("zhuce", "\350\277\224\345\233\236", Q_NULLPTR));
        label_2->setText(QApplication::translate("zhuce", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("zhuce", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("zhuce", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class zhuce: public Ui_zhuce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUCE_H
