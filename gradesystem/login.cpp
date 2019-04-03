#include "login.h"
#include <QVBoxLayout>
extern int baocun;
login::login(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	
	model = new QSqlTableModel(this);
	model->setEditStrategy(QSqlTableModel::OnManualSubmit);
	setWindowTitle("������");
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
				QString str1 = "��¼�ɹ�";
				QString str2 = record.value(1).toString();
				QString str3 = "ѧ��";
				QMessageBox::information(this, "��ʾ", str3 + str2 + str1);
				//����ѧ���ɼ�������
				studentmanagement *student = new studentmanagement;
				student->show();
				this->close();
				return;
			}
			else if (record.value(0) == ui.IDLineEdit->text() &&
				record.value(5) != ui.passwordLineEdit->text())
			{
				QMessageBox::information(this, "��ʾ", "������������");
				return;
			}
		}
		QMessageBox::warning(this, "��ʾ", "�û�������,��ע��");
		return;
	}
	//��ʦ��¼
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
				QString str1 = "��¼�ɹ�";
				QString str2 = record.value(1).toString();
				QString str3 = "��ʦ";
				QMessageBox::information(this, "��ʾ", str3 + str2 + str1);
				//������ʦ�ɼ�������
				teachermanagement *teacher = new teachermanagement;
				teacher->show();
				this->close();
				return;
			}
			else if (record.value(0) == ui.IDLineEdit->text() &&
				record.value(2) != ui.passwordLineEdit->text())
			{
				QMessageBox::information(this, "��ʾ", "������������", QMessageBox::Yes);
				return;
			}
		}
		QMessageBox::warning(this, "��ʾ", "�û�������,��ע��", QMessageBox::Yes);
		return;
	}
	else
		QMessageBox::warning(this, "����", "��ѡ���¼��ʽ", QMessageBox::Yes);
}
void login::registerSlot()
{
	this->hide();
	zhuce *z = new zhuce;
	z->show();

}
