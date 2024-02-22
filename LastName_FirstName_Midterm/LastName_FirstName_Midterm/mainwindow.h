#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "person.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Submit_clicked();

    void on_pushButton_SaveAllData_clicked();

private:
    Ui::MainWindow *ui;

    // pointer with the type Person
    Person *person;

    //QList of people with the type Person
    QList<Person> people;

    // function checking if email entered is valid
    bool validateEmail(const QString& email);
};
#endif // MAINWINDOW_H
