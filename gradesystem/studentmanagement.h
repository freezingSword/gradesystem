#pragma once
#include <QWidget>
#include <QSqlTableModel>
#include <QSqlRecord>
#include "ui_studentmanagement.h"
#include "login.h"
class studentmanagement : public QWidget
{
	Q_OBJECT

public:
	studentmanagement(QWidget *parent = Q_NULLPTR);
	~studentmanagement();

private:
	Ui::studentmanagement ui;
	QSqlTableModel *model;
private slots:
	void gradesystem();
	void changeSlot();
	void back();
	void changePSW();
	void showchangeSlot();
};
