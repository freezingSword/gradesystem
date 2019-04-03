#include "QSqlDatabase"
#include "QApplication"
#include <QtWidgets/QApplication>
#include<login.h>
#include <QDebug>
#include <QMessageBox>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("127.0.0.1");
	db.setUserName("root");
	db.setDatabaseName("data"); //极度重要
	db.setPort(3306);
	login w;		
	/*if (db.open())
	{
		w.show();
		return a.exec();
	}
	else
		QMessageBox::information(NULL, "提示", "没连上数据库");*/
	//w.show();
	studentmanagement *m = new studentmanagement;
	//m->show();
	teachermanagement *t = new teachermanagement;
	t->show();
	return a.exec();
	return 0;
}