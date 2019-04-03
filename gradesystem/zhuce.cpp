#include "zhuce.h"
zhuce::zhuce(QDialog *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.registerBtn->setEnabled(false);

	QTime t;
	t = QTime::currentTime();
	qsrand(t.msec() + t.second() * 1000);
	this->setyanzheng();
	radiogroup = new QButtonGroup(this);
	radiogroup->addButton(ui.studentradio, 0);
	radiogroup->addButton(ui.teacherradio, 1);
	connect(ui.userline, SIGNAL(textChanged(QString)), this, SLOT(registerbtnSetSlot(QString)));
	connect(ui.passwordline, SIGNAL(textChanged(QString)), this, SLOT(registerbtnSetSlot(QString)));
	connect(ui.studentnumline, SIGNAL(textChanged(QString)), this, SLOT(registerbtnSetSlot(QString)));
	connect(ui.registerBtn, SIGNAL(clicked()), this, SLOT(registerbtnSlot()));
	connect(ui.returnBtn, SIGNAL(clicked()), this, SLOT(returnbtnSlot()));
}

zhuce::~zhuce()
{
}



void zhuce::registerbtnSlot()
{
	int i;
	//判断lineedit是否为空
	if (!this->judgeEmpty())
	{
		ui.passwordline->clear();
		ui.passwordline1->clear();
		ui.yanzhengline->clear();
		return;
	}
	//判断两次密码输入是否一致
	if (ui.passwordline->text() != ui.passwordline1->text())
	{
		QMessageBox::warning(this, "警告", "两次密码输入不一致", QMessageBox::Yes);
		ui.passwordline->clear();
		ui.passwordline1->clear();
		ui.yanzhengline->clear();
		this->setyanzheng();
		return;
	}
	//判断验证码输入是否正确
	if (ui.yanzhenglabel->text() != ui.yanzhengline->text())
	{
		QMessageBox::warning(this, "警告", "验证码输入错误", QMessageBox::Yes);
		ui.passwordline->clear();
		ui.passwordline1->clear();
		ui.yanzhengline->clear();
		this->setyanzheng();
		return;
	}

	if (radiogroup->checkedId() == 0)
	{
		//判断是否学生注册

				//设置table为student表
		model = new QSqlTableModel(this);   //////////////被你妈逼的搞死了，无意中解决，(┬＿┬)
		model->setTable("student");
		model->select();
		for (i = 0; i < model->rowCount(); i++)
		{
			QSqlRecord record = model->record(i);
			//判断学生信息已经存在
			if ((record.value(0) == ui.studentnumline->text() && record.value(5) != ""))
			{
				QMessageBox::warning(this, "警告", "用户已存在", QMessageBox::Yes);
				this->clearAll();
				this->setyanzheng();
				return;
			}
		}
		//如果学生信息不存在,添加学生信息进数据库
		if (i == model->rowCount())
		{
			QSqlRecord record1 = model->record();
			record1.setValue("studentnum", ui.studentnumline->text());
			record1.setValue("name", ui.userline->text());
			record1.setValue("password", ui.passwordline->text());
			model->insertRecord(-1, record1);
		}
		//判断学生信息是否上传数据库成功
		if (model->submitAll())
		{
			QMessageBox::information(this, "提示", "恭喜你注册成功^*^", QMessageBox::Yes);
			this->accept();
		}
	}
//该教师了
	if (radiogroup->checkedId() == 1)
	{
		//判断是否学生注册

		//设置table为teacher表
		model = new QSqlTableModel(this);   //////////////被你妈逼的搞死了，无意中解决，(┬＿┬)
		model->setTable("teacher");
		model->select();
		for (i = 0; i < model->rowCount(); i++)
		{
			QSqlRecord record = model->record(i);
			//判断老师信息已经存在
			if ((record.value(0) == ui.studentnumline->text() && record.value(2) != ""))
			{
				QMessageBox::warning(this, "警告", "用户已存在", QMessageBox::Yes);
				this->clearAll();
				this->setyanzheng();
				return;
			}
		}
		//如果学生信息不存在,添加学生信息进数据库
		if (i == model->rowCount())
		{
			QSqlRecord record1 = model->record();
			record1.setValue("teachernum", ui.studentnumline->text());
			record1.setValue("name", ui.userline->text());
			record1.setValue("password", ui.passwordline->text());
			model->insertRecord(-1, record1);
		}
		//判断学生信息是否上传数据库成功
		if (model->submitAll())
		{
			QMessageBox::information(this, "提示", "恭喜你注册成功^*^", QMessageBox::Yes);
			this->accept();
		}

	}
		this->clearAll();
		this->setyanzheng();
	
}

void zhuce::returnbtnSlot()
{
	this->hide();
	login *log = new login;
	log->show();
}
void zhuce::registerbtnSetSlot(QString)
{
	ui.registerBtn->setEnabled(true);
}
//清空lineedit的上的文本
void zhuce::clearAll()
{
	ui.userline->clear();
	ui.passwordline->clear();
	ui.passwordline1->clear();
	ui.studentnumline->clear();
	ui.yanzhengline->clear();
}
//设置验证码
void zhuce::setyanzheng()
{
	QPalette p1;
	p1.setColor(QPalette::WindowText, Qt::blue);
	yanzheng = qrand() % 10000;
	while (yanzheng < 1000)
		yanzheng = qrand() % 10000;
	ui.yanzhenglabel->setText(QString::number(yanzheng));
	ui.yanzhenglabel->setPalette(p1);
}
//判断lineedit是否为空
bool zhuce::judgeEmpty()
{
	if (ui.userline->text().isEmpty())
	{
		QMessageBox::warning(this, "警告", "用户名不能为空");
		return false;
	}
	else if (ui.studentnumline->text().isEmpty())
	{
		QMessageBox::warning(this, "警告", "用户工作号不能为空");
		return false;
	}
	else if (ui.passwordline->text().isEmpty() ||
		ui.passwordline1->text().isEmpty())
	{
		QMessageBox::warning(this, "警告", "用户密码不能为空");
		return false;
	}
	else if (ui.yanzhengline->text().isEmpty())
	{
		QMessageBox::warning(this, "警告", "验证码不能为空");
		return false;
	}
	else
		return true;
}