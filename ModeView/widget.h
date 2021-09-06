#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlTableModel>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    bool isset();

private slots:
    void on_ButtonAdd_clicked();

    void on_ButtonSure_clicked();

    void on_ButtonCancel_clicked();

    void on_ButtonDelete_clicked();

    void on_ButtonFind_clicked();

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;

    QSqlTableModel *model;

    QString SQLIP;

    QString SQLUserName;

    QString SQLPassword;

    QString SQLDatabaseName;

    QString Tablename;

};
#endif // WIDGET_H
