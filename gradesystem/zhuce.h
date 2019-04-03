#pragma once
#pragma execution_character_set("utf-8")
#include <QDialog>
#include "ui_zhuce.h"
#include "login.h"
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QTime>
#include <QMessageBox>
#include <QButtonGroup>
#include <QDebug>
class zhuce : public QDialog
{
	Q_OBJECT

public:
	zhuce(QDialog *parent = Q_NULLPTR);
	~zhuce();
	void clearAll();
	void setyanzheng();
	bool judgeEmpty();
	
private:
	Ui::zhuce ui;
	QSqlTableModel *model;
	QButtonGroup *radiogroup;
	int yanzheng;
	private slots:
	void registerbtnSlot();
	void returnbtnSlot();
	void registerbtnSetSlot(QString);
};
