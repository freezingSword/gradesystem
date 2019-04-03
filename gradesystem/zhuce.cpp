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
	//�ж�lineedit�Ƿ�Ϊ��
	if (!this->judgeEmpty())
	{
		ui.passwordline->clear();
		ui.passwordline1->clear();
		ui.yanzhengline->clear();
		return;
	}
	//�ж��������������Ƿ�һ��
	if (ui.passwordline->text() != ui.passwordline1->text())
	{
		QMessageBox::warning(this, "����", "�����������벻һ��", QMessageBox::Yes);
		ui.passwordline->clear();
		ui.passwordline1->clear();
		ui.yanzhengline->clear();
		this->setyanzheng();
		return;
	}
	//�ж���֤�������Ƿ���ȷ
	if (ui.yanzhenglabel->text() != ui.yanzhengline->text())
	{
		QMessageBox::warning(this, "����", "��֤���������", QMessageBox::Yes);
		ui.passwordline->clear();
		ui.passwordline1->clear();
		ui.yanzhengline->clear();
		this->setyanzheng();
		return;
	}

	if (radiogroup->checkedId() == 0)
	{
		//�ж��Ƿ�ѧ��ע��

				//����tableΪstudent��
		model = new QSqlTableModel(this);   //////////////������Ƶĸ����ˣ������н����(�Уߩ�)
		model->setTable("student");
		model->select();
		for (i = 0; i < model->rowCount(); i++)
		{
			QSqlRecord record = model->record(i);
			//�ж�ѧ����Ϣ�Ѿ�����
			if ((record.value(0) == ui.studentnumline->text() && record.value(5) != ""))
			{
				QMessageBox::warning(this, "����", "�û��Ѵ���", QMessageBox::Yes);
				this->clearAll();
				this->setyanzheng();
				return;
			}
		}
		//���ѧ����Ϣ������,���ѧ����Ϣ�����ݿ�
		if (i == model->rowCount())
		{
			QSqlRecord record1 = model->record();
			record1.setValue("studentnum", ui.studentnumline->text());
			record1.setValue("name", ui.userline->text());
			record1.setValue("password", ui.passwordline->text());
			model->insertRecord(-1, record1);
		}
		//�ж�ѧ����Ϣ�Ƿ��ϴ����ݿ�ɹ�
		if (model->submitAll())
		{
			QMessageBox::information(this, "��ʾ", "��ϲ��ע��ɹ�^*^", QMessageBox::Yes);
			this->accept();
		}
	}
//�ý�ʦ��
	if (radiogroup->checkedId() == 1)
	{
		//�ж��Ƿ�ѧ��ע��

		//����tableΪteacher��
		model = new QSqlTableModel(this);   //////////////������Ƶĸ����ˣ������н����(�Уߩ�)
		model->setTable("teacher");
		model->select();
		for (i = 0; i < model->rowCount(); i++)
		{
			QSqlRecord record = model->record(i);
			//�ж���ʦ��Ϣ�Ѿ�����
			if ((record.value(0) == ui.studentnumline->text() && record.value(2) != ""))
			{
				QMessageBox::warning(this, "����", "�û��Ѵ���", QMessageBox::Yes);
				this->clearAll();
				this->setyanzheng();
				return;
			}
		}
		//���ѧ����Ϣ������,���ѧ����Ϣ�����ݿ�
		if (i == model->rowCount())
		{
			QSqlRecord record1 = model->record();
			record1.setValue("teachernum", ui.studentnumline->text());
			record1.setValue("name", ui.userline->text());
			record1.setValue("password", ui.passwordline->text());
			model->insertRecord(-1, record1);
		}
		//�ж�ѧ����Ϣ�Ƿ��ϴ����ݿ�ɹ�
		if (model->submitAll())
		{
			QMessageBox::information(this, "��ʾ", "��ϲ��ע��ɹ�^*^", QMessageBox::Yes);
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
//���lineedit���ϵ��ı�
void zhuce::clearAll()
{
	ui.userline->clear();
	ui.passwordline->clear();
	ui.passwordline1->clear();
	ui.studentnumline->clear();
	ui.yanzhengline->clear();
}
//������֤��
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
//�ж�lineedit�Ƿ�Ϊ��
bool zhuce::judgeEmpty()
{
	if (ui.userline->text().isEmpty())
	{
		QMessageBox::warning(this, "����", "�û�������Ϊ��");
		return false;
	}
	else if (ui.studentnumline->text().isEmpty())
	{
		QMessageBox::warning(this, "����", "�û������Ų���Ϊ��");
		return false;
	}
	else if (ui.passwordline->text().isEmpty() ||
		ui.passwordline1->text().isEmpty())
	{
		QMessageBox::warning(this, "����", "�û����벻��Ϊ��");
		return false;
	}
	else if (ui.yanzhengline->text().isEmpty())
	{
		QMessageBox::warning(this, "����", "��֤�벻��Ϊ��");
		return false;
	}
	else
		return true;
}