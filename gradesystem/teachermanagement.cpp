#include "teachermanagement.h"
#include "QAbstractItemView"
teachermanagement::teachermanagement(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.registerBox->hide();
	ui.inputLine->setPlaceholderText("������ѧ��ѧ�Ż���ѧ������");
	connect(ui.backBtn, &QPushButton::clicked, this, &teachermanagement::backSlot);
	model = new QSqlTableModel(this);
	model->setTable("student");
	model->setEditStrategy(QSqlTableModel::OnManualSubmit);
	model->setHeaderData(0, Qt::Horizontal, "ѧ��");
	model->setHeaderData(1, Qt::Horizontal, "ѧ������");
	model->setHeaderData(2, Qt::Horizontal, "�����ѧ");
	model->setHeaderData(3, Qt::Horizontal, "����ͳ��");
	model->setHeaderData(4, Qt::Horizontal, "�ֲ�ʽϵͳ");
	model->removeColumns(5, 5);
	ui.searchView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.searchView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	model->select();

	ui.searchView->setModel(model);         //////////////////////////important
	connect(ui.searchBtn, &QPushButton::clicked, this, &teachermanagement::searchSlot);
	connect(ui.setBtn, &QPushButton::clicked, this, &teachermanagement::showSlot);
	connect(ui.registerBtn, &QPushButton::clicked, this, &teachermanagement::insertSlot);
	connect(ui.delBtn, &QPushButton::clicked, this, &teachermanagement::delbtnSlot);
	connect(ui.changeBtn, &QPushButton::clicked, this, &teachermanagement::changeSlot);
	ui.searchView->setEditTriggers(QAbstractItemView::AllEditTriggers);       ////////////////������Ҫ��������������������
}

teachermanagement::~teachermanagement()
{
}









void teachermanagement::backSlot()
{
	login*fee = new login;
	fee->show();
	this->close();
}

void teachermanagement::searchSlot()
{
	model->setFilter("studentnum=" + ui.inputLine->text());
	model->select();
	if (model->data(model->index(0, 0)).toString().isEmpty())
	{
		QMessageBox::warning(this, "����", "�û�������");
		ui.searchView->setModel(model);
		return;
	}
	ui.searchView->setModel(model);
	
}

void teachermanagement::insertSlot()
{
	model->select();
	int i;
	for (i = 0; i < model->rowCount(); i++)
	{
		if (model->data(model->index(i, 0)).toString() == ui.numLine->text())
		{
			break;
		}
	}
	if (i != model->rowCount())
	{
		QMessageBox::information(this, "��ʾ", "ѧ���û��Ѿ�����", QMessageBox::Yes);
		return;
	}
	QSqlRecord record = model->record();

	record.setValue("studentnum", ui.numLine->text());
	record.setValue("name", ui.nameLine->text());
	record.setValue("chinese", ui.zuheLine->text().toInt());
	record.setValue("math", ui.shuliLine->text().toInt());
	record.setValue("english", ui.fenbuLine->text().toInt());
	model->insertRecord(-1, record);

	if (model->submitAll())
	{
		QMessageBox::information(this, "��ʾ", "ѧ���ɼ���Ϣ��ӳɹ�", QMessageBox::Yes);
	}
}

void teachermanagement::showSlot()
{
	ui.searchView->hide();
	ui.registerBox->show();
	//����lineedit��ʾ�ֶ�
	ui.numLine->setPlaceholderText("������ѧ��ѧ��");
	ui.nameLine->setPlaceholderText("������ѧ������");
	ui.zuheLine->setPlaceholderText("�����������ѧ�ɼ�");
	ui.shuliLine->setPlaceholderText("����������ͳ�Ƴɼ�");
	ui.fenbuLine->setPlaceholderText("������ֲ�ʽϵͳ�ɼ�");
}


void teachermanagement::delbtnSlot()
{
	if (ui.inputLine->text().isEmpty())
	{
		QMessageBox::warning(this, "����", "ɾ���������Ϊ��");
		return;
	}
	model->select();
	int i;
	for (i = 0; i < model->rowCount(); i++)
	{
		if (model->data(model->index(i, 0)).toString() == ui.inputLine->text())
		{
			if (QMessageBox::question(this, "��ʾ", "ȷ��Ҫɾ����", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
			{
				model->removeRow(i);
				model->submitAll();
				return;
			}
			else
				return;
		}
	}
	QMessageBox::information(this, "��ʾ", "ѧ���û������ڣ�ɾ��ʧ��!");
}

void teachermanagement::changeSlot()
{
	if (model->submitAll())
		QMessageBox::information(this, "��ʾ", "�޸ĳɹ�", QMessageBox::Yes);
	else
	{
		QMessageBox::information(this, "��ʾ", "�޸�ʧ��", QMessageBox::Yes);
		model->revertAll();
	}

}
