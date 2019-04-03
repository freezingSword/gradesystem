#pragma once
#pragma execution_character_set("utf-8")
#include <QWidget>
#include "ui_teachermanagement.h"
#include <QSqlTableModel>
#include <QDebug>
#include <QStringList>
#include <QMessageBox>
#include <QButtonGroup>
#include "login.h"
#include "QSqlQuery"
class teachermanagement : public QWidget
{
	Q_OBJECT

public:
	teachermanagement(QWidget *parent = Q_NULLPTR);
	~teachermanagement();

private:
	Ui::teachermanagement ui;
	QSqlTableModel *model;
private slots:
void backSlot();
void searchSlot();
void insertSlot();
void showSlot();
void delbtnSlot();
void changeSlot();

};