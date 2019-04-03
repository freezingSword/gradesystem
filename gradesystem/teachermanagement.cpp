#include "teachermanagement.h"
#include "QAbstractItemView"
teachermanagement::teachermanagement(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.registerBox->hide();
	ui.inputLine->setPlaceholderText("请输入学生学号或者学生姓名");
	connect(ui.backBtn, &QPushButton::clicked, this, &teachermanagement::backSlot);
	model = new QSqlTableModel(this);
	model->setTable("student");
	model->setEditStrategy(QSqlTableModel::OnManualSubmit);
	model->setHeaderData(0, Qt::Horizontal, "学号");
	model->setHeaderData(1, Qt::Horizontal, "学生姓名");
	model->setHeaderData(2, Qt::Horizontal, "组合数学");
	model->setHeaderData(3, Qt::Horizontal, "数理统计");
	model->setHeaderData(4, Qt::Horizontal, "分布式系统");
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
	ui.searchView->setEditTriggers(QAbstractItemView::AllEditTriggers);       ////////////////极度重要！！！！！！！！！！
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
		QMessageBox::warning(this, "警告", "用户不存在");
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
		QMessageBox::information(this, "提示", "学生用户已经存在", QMessageBox::Yes);
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
		QMessageBox::information(this, "提示", "学生成绩信息添加成功", QMessageBox::Yes);
	}
}

void teachermanagement::showSlot()
{
	ui.searchView->hide();
	ui.registerBox->show();
	//设置lineedit提示字段
	ui.numLine->setPlaceholderText("请输入学生学号");
	ui.nameLine->setPlaceholderText("请输入学生姓名");
	ui.zuheLine->setPlaceholderText("请输入组合数学成绩");
	ui.shuliLine->setPlaceholderText("请输入数理统计成绩");
	ui.fenbuLine->setPlaceholderText("请输入分布式系统成绩");
}


void teachermanagement::delbtnSlot()
{
	if (ui.inputLine->text().isEmpty())
	{
		QMessageBox::warning(this, "警告", "删除输入框不能为空");
		return;
	}
	model->select();
	int i;
	for (i = 0; i < model->rowCount(); i++)
	{
		if (model->data(model->index(i, 0)).toString() == ui.inputLine->text())
		{
			if (QMessageBox::question(this, "提示", "确定要删除吗？", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
			{
				model->removeRow(i);
				model->submitAll();
				return;
			}
			else
				return;
		}
	}
	QMessageBox::information(this, "提示", "学生用户不存在，删除失败!");
}

void teachermanagement::changeSlot()
{
	if (model->submitAll())
		QMessageBox::information(this, "提示", "修改成功", QMessageBox::Yes);
	else
	{
		QMessageBox::information(this, "提示", "修改失败", QMessageBox::Yes);
		model->revertAll();
	}

}
