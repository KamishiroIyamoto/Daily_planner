#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dataBase = QSqlDatabase::addDatabase("QSQLITE");
    dataBase.setHostName("127.0.0.1");
    dataBase.setUserName("root");
    dataBase.setDatabaseName("DatabasE.db");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString cb = ui->comboBox->currentText() + ' ' + ui->comboBox_2->currentText() + ' ' + ui->comboBox_3->currentText();
    QString l = ui->lineEdit->text();

    sqlQuery = QSqlQuery(dataBase);
    if(dataBase.open())
    {
        sqlQuery.prepare("INSERT INTO Diary(data, record) VALUES ('"+cb+"', '"+l+"')");
        sqlQuery.exec();
        QMessageBox::information(this, "Состояние:", "Заметка записана!");
    }else
        QMessageBox::critical(this, "БД не открылась", "В принципе, не удивительно");
}

void MainWindow::on_pushButton_2_clicked()
{
    QString cb = ui->comboBox->currentText() + ' ' + ui->comboBox_2->currentText() + ' ' + ui->comboBox_3->currentText();

    sqlQuery = QSqlQuery(dataBase);
    if(dataBase.open())
    {
        sqlQuery.prepare("SELECT * FROM Diary");
        sqlQuery.exec();
        QString temp = "";
        while(sqlQuery.next())
        {
            if(sqlQuery.value(1).toString() == cb)
                temp += sqlQuery.value(2).toString() + '\n';
        }
        if(temp != "")
            QMessageBox::information(this, "Заметки:", temp);
        else
            QMessageBox::warning(this, "Заметки:", "На этот день заметок нет!");
    }else
        QMessageBox::critical(this, "БД не открылась", "В принципе, не удивительно");
}

void MainWindow::on_pushButton_3_clicked()
{
    QString cb = ui->comboBox->currentText() + ' ' + ui->comboBox_2->currentText() + ' ' + ui->comboBox_3->currentText();
    QString l = ui->lineEdit->text();
    QString temp;

    sqlQuery = QSqlQuery(dataBase);
    if(dataBase.open())
    {
        if(l == "")
        {
            sqlQuery.prepare("DELETE FROM Diary WHERE data='"+cb+"'");
            sqlQuery.exec();
        }else
        {
            sqlQuery.prepare("DELETE FROM Diary WHERE data='"+cb+"' AND record='"+l+"'");
            sqlQuery.exec();
        }
        QMessageBox::information(this, "Состояние:", "Заметка удалена!");
    }else
        QMessageBox::critical(this, "БД не открылась", "В принципе, не удивительно");
}

void MainWindow::on_pushButton_4_clicked()
{
    QString cb = ui->comboBox->currentText() + ' ' + ui->comboBox_2->currentText() + ' ' + ui->comboBox_3->currentText();
    QString l = ui->lineEdit->text();

    sqlQuery = QSqlQuery(dataBase);
    if(dataBase.open())
    {
        sqlQuery.prepare("UPDATE Diary set record='"+l+"' WHERE data='"+cb+"'");
        sqlQuery.exec();
        QMessageBox::information(this, "Состояние:", "Заметка изменена!");
    }else
        QMessageBox::critical(this, "БД не открылась", "В принципе, не удивительно");
}

void MainWindow::on_pushButton_5_clicked()
{
    sqlQuery = QSqlQuery(dataBase);
    if(dataBase.open())
    {
        sqlQuery.prepare("SELECT * FROM Diary");
        sqlQuery.exec();
        QString temp = "";

        while(sqlQuery.next())
            temp += sqlQuery.value(1).toString() + '\t' + sqlQuery.value(2).toString() + '\n';

        if(temp != "")
            QMessageBox::information(this, "Заметки:", temp);
        else
            QMessageBox::warning(this, "Заметки:", "Заметок нет!");
    }else
        QMessageBox::critical(this, "БД не открылась", "В принципе, не удивительно");
}

void MainWindow::on_pushButton_6_clicked()
{
    sqlQuery = QSqlQuery(dataBase);
    if(dataBase.open())
    {
        sqlQuery.prepare("DELETE FROM Diary");
        sqlQuery.exec();
        QMessageBox::information(this, "Состояние:", "Все заметки удалены!");
    }else
        QMessageBox::critical(this, "БД не открылась", "В принципе, не удивительно");
}

void MainWindow::on_actionKamishiro_Iyamoto_triggered()
{
    QMessageBox::information(this, "Разработчик и его ВК:", "Собственно, этот человек учится в коледже и сидит дома\nЕго ВК: https://vk.com/kamishiro_iyamoto");
}
