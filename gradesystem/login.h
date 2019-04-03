#pragma once
#pragma execution_character_set("utf-8")
#include <QWidget>
#include "ui_login.h"
#include "studentmanagement.h"
#include "teachermanagement.h"
#include "zhuce.h"
#include <QMessageBox>
#include <QSqlTableModel>
#include <QSqlRecord> 

class login : public QWidget
{
	Q_OBJECT

public:
	login(QWidget *parent = Q_NULLPTR);
	~login();
	bool judgeEmpty();

private:
	Ui::login ui;
	QButtonGroup *radiogroup;
	QSqlTableModel *model;
private slots:
    void loginSlot();
	void registerSlot();

};
