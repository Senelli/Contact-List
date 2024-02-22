#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QString>

class Person
{

public:
    Person(QObject *parent = nullptr);

    // setting up input passed from the form
    // setting up members in the object
    void setFirstName(const QString &firstName);
    void setLastName(const QString &lastName);
    void setEmail(const QString &email);
    void setPhoneNumber(const QString &phoneNumber);
    void setAge(int age);

    // getting members of the objects
    QString getFirstName() const;
    QString getLastName() const;
    QString getEmail() const;
    QString getPhoneNumber() const;
    int getAge() const;

private:
    QString _firstName;
    QString _lastName;
    QString _email;
    QString _phoneNumber;
    int _age;

signals:

};

#endif // PERSON_H
