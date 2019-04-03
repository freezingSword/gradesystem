#include "login.h"
#include <QVBoxLayout>
extern int baocun;
login::login(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	
	model = new QSqlTableModel(this);
	model->setEditStrategy(QSqlTableModel::OnManualSubmit);
	setWindowTitle("西工大");
	QObject::connect(ui.loginBtn, SIGNAL(clicked()), this, SLOT(loginSlot()));
	QObject::connect(ui.registerBtn, SIGNAL(clicked()), this, SLOT(registerSlot()));
	radiogroup = new QButtonGroup(this);
	radiogroup->addButton(ui.studentRadio,0);
	radiogroup->addButton(ui.teacherRadio,1);
	connect(ui.IDLineEdit, SIGNAL(textChanged(QString)), this, SLOT(loginbtnSetSlot(QString)));
	connect(ui.passwordLineEdit , SIGNAL(textChanged(QString)), this, SLOT(loginbtnSetSlot(QString)));
}
login::~login()
{
}
bool login::judgeEmpty()
{
	return false;
}
void login::loginSlot()
{
	if (radiogroup->checkedId() == 0)
	{
		model->setTable("student");
		model->select();
		int i;
		for (i = 0; i < model->rowCount(); i++)
		{
			QSqlRecord record = model->record(i);

			if (record.value(0) == ui.IDLineEdit->text() &&
				record.value(5) == ui.passwordLineEdit->text())
			{
				baocun = i;
				QString str1 = "登录成功";
				QString str2 = record.value(1).toString();
				QString str3 = "学生";
				QMessageBox::information(this, "提示", str3 + str2 + str1);
				//创建学生成绩管理窗口
				studentmanagement *student = new studentmanagement;
				student->show();
				this->close();
				return;
			}
			else if (record.value(0) == ui.IDLineEdit->text() &&
				record.value(5) != ui.passwordLineEdit->text())
			{
				QMessageBox::information(this, "提示", "密码输入有误");
				return;
			}
		}
		QMessageBox::warning(this, "提示", "用户不存在,请注册");
		return;
	}
	//教师登录
	else if (radiogroup->checkedId() == 1)
	{
		model->setTable("teacher");
		model->select();
		int i;
		for (i = 0; i < model->rowCount(); i++)
		{
			QSqlRecord record = model->record(i);
			if (record.value(0) == ui.IDLineEdit->text() &&
				record.value(2) == ui.passwordLineEdit->text())
			{
				QString str1 = "登录成功";
				QString str2 = record.value(1).toString();
				QString str3 = "教师";
				QMessageBox::information(this, "提示", str3 + str2 + str1);
				//创建教师成绩管理窗口
				teachermanagement *teacher = new teachermanagement;
				teacher->show();
				this->close();
				return;
			}
			else if (record.value(0) == ui.IDLineEdit->text() &&
				record.value(2) != ui.passwordLineEdit->text())
			{
				QMessageBox::information(this, "提示", "密码输入有误", QMessageBox::Yes);
				return;
			}
		}
		QMessageBox::warning(this, "提示", "用户不存在,请注册", QMessageBox::Yes);
		return;
	}
	else
		QMessageBox::warning(this, "警告", "请选择登录方式", QMessageBox::Yes);
}
void login::registerSlot()
{
	this->hide();
	zhuce *z = new zhuce;
	z->show();

}
