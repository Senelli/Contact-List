#include "person.h"

Person::Person(QObject *parent)
{

}

void Person::setFirstName(const QString &firstName)
{
    _firstName = firstName;
}

void Person::setLastName(const QString &lastName)
{
    _lastName = lastName;
}

void Person::setEmail(const QString &email)
{
    _email = email;
}

void Person::setPhoneNumber(const QString &phoneNumber)
{
    _phoneNumber = phoneNumber;
}

void Person::setAge(int age)
{
    _age = age;
}

QString Person::getFirstName() const
{
    return _firstName;
}

QString Person::getLastName() const
{
    return _lastName;
}

QString Person::getEmail() const
{
    return _email;
}

QString Person::getPhoneNumber() const
{
    return _phoneNumber;
}

int Person::getAge() const
{
    return _age;
}
