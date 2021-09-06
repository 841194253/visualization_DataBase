#include "widget.h"
#include "ui_widget.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QtSql>
#include <QSqlQuery>
#include <QVariantList>
#include <QSqlTableModel>
#include <QSqlRecord>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //打印QT支持的数据库驱动
    //qDebug() << QSqlDatabase::drivers();
    //"QSQLITE", "QMYSQL", "QMYSQL3", "QPSQL", "QPSQL7"

    ui->ButtonAdd->setEnabled(false);
    ui->ButtonFind->setEnabled(false);
    ui->ButtonSure->setEnabled(false);
    ui->ButtonCancel->setEnabled(false);
    ui->ButtonDelete->setEnabled(false);

//    //添加mysql数据库
//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

////    SQLIP = "127.0.0.1";

////    SQLUserName = "root";

////    SQLPassword = "1234567890";

////    SQLDatabaseName = "test";

////    Tablename = "Person";

//    //连接数据库
//    db.setHostName(SQLIP);

//   db.setUserName(SQLUserName);

//    db.setPassword(SQLPassword);

//    db.setDatabaseName(SQLDatabaseName);

//    //打开数据库
//    if(!db.open())
//    {
//        QMessageBox::warning(this,"error","无法链接数据库");
//        return;
//    }

//    //设置模型
//    model = new QSqlTableModel(this);

//    model->setTable(Tablename);

//    ui->tableView->setModel(model);

//    model->select();

//    //model->setHeaderData(0,::Qt::Horizontal,"学号");

//    //设置model的编辑模式 手动提交
//    model->setEditStrategy(QSqlTableModel::OnManualSubmit);

//    //非管理员情况的话无法修改
//    //ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_ButtonAdd_clicked()
{
    //添加空记录
    QSqlRecord record = model->record();

    //行号
    int row = model->rowCount();

    model->insertRecord(row,record);

}

void Widget::on_ButtonSure_clicked()
{
    model->submitAll();//提交动作
}

void Widget::on_ButtonCancel_clicked()
{
    model->revertAll();//取消动作
    model->submitAll();//提交动作
}

void Widget::on_ButtonDelete_clicked()
{
    QItemSelectionModel *sModel = ui->tableView->selectionModel();

    //取出模型中的索引
    QModelIndexList list =  sModel->selectedRows();

    //删除选择行
    for (int i = 0; i < list.size(); i++) {
        model->removeRow(list.at(i).row());
    }
}

void Widget::on_ButtonFind_clicked()
{
    QString name = ui->lineEdit->text();

    QString sql = QString(name);

    model->setFilter(sql);
    model->select();
}

bool Widget::isset()
{
    bool ip = ui->lineEditIP->text().isEmpty();
    bool pass = ui->lineEditPassWord->text().isEmpty();
    bool username = ui->lineEditUserName->text().isEmpty();
    bool tablename = ui->lineEditTableName->text().isEmpty();
    bool basename = ui->lineEditDataBaseName->text().isEmpty();

    //return ip & pass & username & tablename & basename;

    if(ip == true && pass == true && username == true && tablename == true && basename == true)
    {
        return true;
    }
    return false;
}

void Widget::on_pushButton_clicked()
{
    if(isset())
    {
        QMessageBox::warning(this,"error","参数不完整");
        return;
    }

    SQLIP = ui->lineEditIP->text();

    qDebug() << SQLIP;

    SQLPassword = ui->lineEditPassWord->text();

    SQLUserName = ui->lineEditUserName->text();

    SQLDatabaseName = ui->lineEditDataBaseName->text();

    Tablename = ui->lineEditTableName->text();

    //添加mysql数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

//    SQLIP = "127.0.0.1";

//    SQLUserName = "root";

//    SQLPassword = "1234567890";

//    SQLDatabaseName = "test";

//    Tablename = "Person";

    //连接数据库
    db.setHostName(SQLIP);

    db.setUserName(SQLUserName);

    db.setPassword(SQLPassword);

    db.setDatabaseName(SQLDatabaseName);

    //打开数据库
    if(!db.open())
    {
        QMessageBox::warning(this,"error","无法链接数据库");
        return;
    }
    //设置模型
    model = new QSqlTableModel(this);

    model->setTable(Tablename);

    ui->tableView->setModel(model);

    model->select();

    //model->setHeaderData(0,::Qt::Horizontal,"学号");

    //设置model的编辑模式 手动提交
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    //非管理员情况的话无法修改
    //ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->ButtonAdd->setEnabled(true);
    ui->ButtonFind->setEnabled(true);
    ui->ButtonSure->setEnabled(true);
    ui->ButtonCancel->setEnabled(true);
    ui->ButtonDelete->setEnabled(true);
}
