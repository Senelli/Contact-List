#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <QString>
#include <QFile>
#include <QFileDialog>
#include <regex>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // initializing members
    ui->setupUi(this);
    person = new Person(this);
    people = *new QList<Person>();
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::validateEmail(const QString& email)
{
    // casting QString to a string in order to use the regex_match() function
    string sEmail = email.toStdString();

    // regular expression for checking if email is valid
    const regex reg ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    // checking user input if it is in the form of the regular expression
    // return true if yes, return false if not
    return regex_match(sEmail, reg);
}

void MainWindow::on_pushButton_Submit_clicked()
{
    // getting user input from lineEdit_FirstName, lineEdit_LastName, and
    // lineEdit_Email and storing them in different QString variables,
    // respectively
    QString firstName = ui->lineEdit_FirstName->text();
    QString lastName = ui->lineEdit_LastName->text();
    QString email = ui->lineEdit_Email->text();

    // checking to see if email user entered is valid
    // pass email entered into a function validating email
    bool correctEmail = validateEmail(email);

    // if user entered a firstName, lastName, and a valid email
    if (firstName != "" && lastName != "" && email != "" && correctEmail == true)
    {
        // set up firstName, lastName, and email as members of an object
        // (person) in Person class
        person->setFirstName(firstName);
        person->setLastName(lastName);
        person->setEmail(email);

        // getting user input from lineEdit_PhoneNumber and storing
        // it into a variable of type QString
        QString phoneNumber = ui->lineEdit_PhoneNumber->text();

        // if field phoneNumber is not blank and is valid
        if (phoneNumber == "() -" || phoneNumber.length() == 14)
        {
            // set up phoneNumber as a member of an object
            // (person) in Person class
            person->setPhoneNumber(phoneNumber);

            // getting user input from spinBox_Age
            // and storing it in an int variable
            int age = ui->spinBox_Age->value();

            // set up age as a member of an object
            // (person) in Person class
            person->setAge(age);

            // append person object of type Person on to the
            // QList people of type Person
            people.append(*person);

            this->dumpObjectTree();

            // clearing all fields
            ui->lineEdit_FirstName->clear();
            ui->lineEdit_LastName->clear();
            ui->lineEdit_Email->clear();
            ui->lineEdit_PhoneNumber->clear();
            ui->spinBox_Age->setValue(0);

            // displaying message of successful submission on a label
            ui->label_Status->setText("Submission Successful!");

        } // if there is digits missing in the phone number
        else
        {
            // displaying message invalid phone number on a label
            ui->label_Status->setText("Invalid Phone Number");
        }

    } // if firstName and lastName is entered but the email entered not valid
    else if (firstName != "" && lastName != "" && correctEmail == false)
    {
        // displaying message of invalid email on a label
        ui->label_Status->setText("Invalid Email");

    } // if user did not enter firstName, lastName, and/or valid email
    else
    {
        // displaying message of enter required fields
        // marked with * on a label
        ui->label_Status->setText("Please Enter Required Fields (*)");
    }
}


void MainWindow::on_pushButton_SaveAllData_clicked()
{
    // getting the path to write a text file
    QString path = QFileDialog::getSaveFileName(this, "Save All",
                                                "../", "TXT(*.txt)");

    // checking to see if file path is empty
    if (path.isEmpty() == false)
    {
        // Create a file object
        QFile file;

        // Associate the file name
        file.setFileName(path);

        // open the file, write only
        bool isOK = file.open(QIODevice::WriteOnly);

        if(isOK == true)
        {
            // declare and initialize a new QList of type Person called reg
            // assign this QList to the QList people
            QList<Person> reg = people;

            // loop through the QList reg
            for(int i = 0; i < reg.length(); i++)
            {
                int _num = i + 1;
                QString num = QString::number(_num);

                // get firstname, lastname, email, phone number, age from
                // accessing the member functions getFirstName(), getLastName(),
                // getEmail(), getPhoneNumber(), getAge() in the class Person for
                // each object stored in the QList
                QString name = reg[i].getFirstName() + " " + reg[i].getLastName();
                QString email = reg[i].getEmail();
                QString phone = reg[i].getPhoneNumber();
                if (phone == "() -") // if phone is empty
                {
                    // set the phone to an empty QString
                    phone = "";
                }

                int _age = reg[i].getAge();
                QString age;
                if (_age != 0) // if age is not zero
                {
                    // cast age to a QString
                    age = QString::number(_age);
                }
                else
                {
                    // if age is zero or empty, set it to an empty QString
                    age = "";
                }

                // write data obtained for item on to the QList reg onto text file
                // data will be written for each item on reg as it loops through
                // each item
                file.write(num.toStdString().data());
                file.write(". ");
                file.write(name.toStdString().data());
                file.write("\n");
                file.write("-Email: ");
                file.write(email.toStdString().data());
                file.write("\n");
                file.write("-Phone Number: ");
                file.write(phone.toStdString().data());
                file.write("\n");
                file.write("-Age: ");
                file.write(age.toStdString().data());
                file.write("\n");
                file.write("\n");
            }
        }
        // close the file
        file.close();

        // displaying message of all submissions saved on a label
        ui->label_Status->setText("All Submissions Saved!");

    }// if file path is empty
    else
    {
        // displaying message file path invalid on a label
        ui->label_Status->setText("Invalid File Path");
    }
}

