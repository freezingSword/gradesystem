#include "studentmanagement.h"
#include "QString"
int baocun;
studentmanagement::studentmanagement(QWidget *parent)
	: QWidget(parent)
{
	
	ui.setupUi(this);
	ui.stackedWidget->hide();
	//test
	model = new QSqlTableModel(this);
	model->setTable("student");
	model->setEditStrategy(QSqlTableModel::OnManualSubmit);
	model->select();
	QSqlRecord record = model->record(baocun);   //极度重要->这句话是选择record括号里的那一行数据；

	connect(ui.queryBtn, &QPushButton::clicked, this, &studentmanagement::gradesystem);
	connect(ui.backBtn, &QPushButton::clicked, this, &studentmanagement::back);
	connect(ui.changePswBtn, &QPushButton::clicked, this, &studentmanagement::showchangeSlot);
	connect(ui.checkBtn, &QPushButton::clicked, this, &studentmanagement::changeSlot);


}

studentmanagement::~studentmanagement()
{
}

void studentmanagement::back()
{
	this->close();
	login *ffsf = new login;
	ffsf->show();

}

void studentmanagement::changePSW()
{
	ui.stackedWidget->setCurrentIndex(1);
	ui.stackedWidget->show();
}

void studentmanagement::showchangeSlot()
{
	ui.stackedWidget->setCurrentIndex(1);
	ui.stackedWidget->show();
}

void studentmanagement::gradesystem()
{
	model = new QSqlTableModel(this);
	model->setTable("student");
	model->setEditStrategy(QSqlTableModel::OnManualSubmit);
	model->select();
	QSqlRecord record = model->record(baocun);
	QString dfsfsdf = record.value(2).toString();
	ui.gradeLabel1->setText(dfsfsdf);
	QString dfsfs32 = record.value(3).toString();
	ui.gradeLabel2->setText(dfsfs32);
	QString dfsfsgr = record.value(4).toString();
	ui.gradeLabel3->setText(dfsfsgr);
	ui.stackedWidget->setCurrentIndex(0);
	ui.stackedWidget->show();
}
void studentmanagement::changeSlot()
{
	model = new QSqlTableModel(this);
	model->setTable("student");
	model->setEditStrategy(QSqlTableModel::OnManualSubmit);
	model->select();
	QSqlRecord record = model->record(baocun);
	
	if (ui.psw1lineEdit->text() == record.value(5))
	{
		if (ui.psw2lineEdit->text()== ui.psw3lineEdit->text());
		{
			model->setData(model->index(baocun, 5), ui.psw2lineEdit->text());
			model->submitAll();
			QMessageBox::information(this, "提示", "密码修改成功！");
		}
	}
}