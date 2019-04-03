/********************************************************************************
** Form generated from reading UI file 'studentmanagement.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMANAGEMENT_H
#define UI_STUDENTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentmanagement
{
public:
    QPushButton *backBtn;
    QPushButton *changePswBtn;
    QPushButton *queryBtn;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *gradeLabel1;
    QLabel *gradeLabel2;
    QLabel *gradeLabel3;
    QWidget *stackedWidget1Page1;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *checkBtn;
    QLineEdit *psw1lineEdit;
    QLineEdit *psw2lineEdit;
    QLineEdit *psw3lineEdit;
    QLabel *label_7;

    void setupUi(QWidget *studentmanagement)
    {
        if (studentmanagement->objectName().isEmpty())
            studentmanagement->setObjectName(QStringLiteral("studentmanagement"));
        studentmanagement->resize(583, 416);
        backBtn = new QPushButton(studentmanagement);
        backBtn->setObjectName(QStringLiteral("backBtn"));
        backBtn->setGeometry(QRect(41, 280, 75, 23));
        changePswBtn = new QPushButton(studentmanagement);
        changePswBtn->setObjectName(QStringLiteral("changePswBtn"));
        changePswBtn->setGeometry(QRect(41, 180, 75, 23));
        queryBtn = new QPushButton(studentmanagement);
        queryBtn->setObjectName(QStringLiteral("queryBtn"));
        queryBtn->setGeometry(QRect(41, 80, 75, 23));
        stackedWidget = new QStackedWidget(studentmanagement);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(200, 70, 251, 281));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 54, 12));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 100, 54, 12));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 150, 54, 12));
        gradeLabel1 = new QLabel(page);
        gradeLabel1->setObjectName(QStringLiteral("gradeLabel1"));
        gradeLabel1->setGeometry(QRect(110, 40, 54, 12));
        gradeLabel2 = new QLabel(page);
        gradeLabel2->setObjectName(QStringLiteral("gradeLabel2"));
        gradeLabel2->setGeometry(QRect(110, 100, 54, 12));
        gradeLabel3 = new QLabel(page);
        gradeLabel3->setObjectName(QStringLiteral("gradeLabel3"));
        gradeLabel3->setGeometry(QRect(110, 150, 54, 12));
        stackedWidget->addWidget(page);
        stackedWidget1Page1 = new QWidget();
        stackedWidget1Page1->setObjectName(QStringLiteral("stackedWidget1Page1"));
        label_4 = new QLabel(stackedWidget1Page1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 30, 54, 12));
        label_5 = new QLabel(stackedWidget1Page1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 80, 54, 12));
        label_6 = new QLabel(stackedWidget1Page1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 130, 54, 12));
        checkBtn = new QPushButton(stackedWidget1Page1);
        checkBtn->setObjectName(QStringLiteral("checkBtn"));
        checkBtn->setGeometry(QRect(70, 180, 75, 23));
        psw1lineEdit = new QLineEdit(stackedWidget1Page1);
        psw1lineEdit->setObjectName(QStringLiteral("psw1lineEdit"));
        psw1lineEdit->setGeometry(QRect(100, 30, 113, 20));
        psw2lineEdit = new QLineEdit(stackedWidget1Page1);
        psw2lineEdit->setObjectName(QStringLiteral("psw2lineEdit"));
        psw2lineEdit->setGeometry(QRect(100, 80, 113, 20));
        psw3lineEdit = new QLineEdit(stackedWidget1Page1);
        psw3lineEdit->setObjectName(QStringLiteral("psw3lineEdit"));
        psw3lineEdit->setGeometry(QRect(100, 130, 113, 20));
        stackedWidget->addWidget(stackedWidget1Page1);
        label_7 = new QLabel(studentmanagement);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(-10, 0, 591, 421));
        label_7->setStyleSheet(QStringLiteral("border-image:url(:/gradesystem/Resources/studentbk.jpg)"));
        label_7->raise();
        backBtn->raise();
        changePswBtn->raise();
        queryBtn->raise();
        stackedWidget->raise();

        retranslateUi(studentmanagement);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(studentmanagement);
    } // setupUi

    void retranslateUi(QWidget *studentmanagement)
    {
        studentmanagement->setWindowTitle(QApplication::translate("studentmanagement", "studentmanagement", Q_NULLPTR));
        backBtn->setText(QApplication::translate("studentmanagement", "\350\277\224\345\233\236\347\231\273\351\231\206", Q_NULLPTR));
        changePswBtn->setText(QApplication::translate("studentmanagement", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        queryBtn->setText(QApplication::translate("studentmanagement", "\346\237\245\350\257\242\346\210\220\347\273\251", Q_NULLPTR));
        label->setText(QApplication::translate("studentmanagement", "\347\273\204\345\220\210\346\225\260\345\255\246\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("studentmanagement", "\346\225\260\347\220\206\347\273\237\350\256\241\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("studentmanagement", "\345\210\206\345\270\203\345\274\217\357\274\232", Q_NULLPTR));
        gradeLabel1->setText(QApplication::translate("studentmanagement", "TextLabel", Q_NULLPTR));
        gradeLabel2->setText(QApplication::translate("studentmanagement", "TextLabel", Q_NULLPTR));
        gradeLabel3->setText(QApplication::translate("studentmanagement", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("studentmanagement", "\345\216\237\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("studentmanagement", "\346\226\260\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("studentmanagement", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        checkBtn->setText(QApplication::translate("studentmanagement", "\347\241\256\350\256\244", Q_NULLPTR));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class studentmanagement: public Ui_studentmanagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGEMENT_H
