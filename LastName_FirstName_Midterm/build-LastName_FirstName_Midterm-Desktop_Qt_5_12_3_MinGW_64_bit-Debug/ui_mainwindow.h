/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_FirstName;
    QLineEdit *lineEdit_FirstName;
    QLabel *label_LastName;
    QLineEdit *lineEdit_LastName;
    QLabel *label_Email;
    QLineEdit *lineEdit_Email;
    QLabel *label_PhoneNumber;
    QLineEdit *lineEdit_PhoneNumber;
    QLabel *label_Age;
    QPushButton *pushButton_Submit;
    QPushButton *pushButton_SaveAllData;
    QLabel *label_Status;
    QSpinBox *spinBox_Age;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(234, 154);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 10, 191, 190));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_FirstName = new QLabel(formLayoutWidget);
        label_FirstName->setObjectName(QString::fromUtf8("label_FirstName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_FirstName);

        lineEdit_FirstName = new QLineEdit(formLayoutWidget);
        lineEdit_FirstName->setObjectName(QString::fromUtf8("lineEdit_FirstName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_FirstName);

        label_LastName = new QLabel(formLayoutWidget);
        label_LastName->setObjectName(QString::fromUtf8("label_LastName"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_LastName);

        lineEdit_LastName = new QLineEdit(formLayoutWidget);
        lineEdit_LastName->setObjectName(QString::fromUtf8("lineEdit_LastName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_LastName);

        label_Email = new QLabel(formLayoutWidget);
        label_Email->setObjectName(QString::fromUtf8("label_Email"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_Email);

        lineEdit_Email = new QLineEdit(formLayoutWidget);
        lineEdit_Email->setObjectName(QString::fromUtf8("lineEdit_Email"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_Email);

        label_PhoneNumber = new QLabel(formLayoutWidget);
        label_PhoneNumber->setObjectName(QString::fromUtf8("label_PhoneNumber"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_PhoneNumber);

        lineEdit_PhoneNumber = new QLineEdit(formLayoutWidget);
        lineEdit_PhoneNumber->setObjectName(QString::fromUtf8("lineEdit_PhoneNumber"));
        lineEdit_PhoneNumber->setMaxLength(14);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_PhoneNumber);

        label_Age = new QLabel(formLayoutWidget);
        label_Age->setObjectName(QString::fromUtf8("label_Age"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_Age);

        pushButton_Submit = new QPushButton(formLayoutWidget);
        pushButton_Submit->setObjectName(QString::fromUtf8("pushButton_Submit"));

        formLayout->setWidget(6, QFormLayout::LabelRole, pushButton_Submit);

        pushButton_SaveAllData = new QPushButton(formLayoutWidget);
        pushButton_SaveAllData->setObjectName(QString::fromUtf8("pushButton_SaveAllData"));

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButton_SaveAllData);

        label_Status = new QLabel(formLayoutWidget);
        label_Status->setObjectName(QString::fromUtf8("label_Status"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, label_Status);

        spinBox_Age = new QSpinBox(formLayoutWidget);
        spinBox_Age->setObjectName(QString::fromUtf8("spinBox_Age"));
        spinBox_Age->setMinimum(0);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBox_Age);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 234, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Information", nullptr));
        label_FirstName->setText(QApplication::translate("MainWindow", "First Name*:", nullptr));
        label_LastName->setText(QApplication::translate("MainWindow", "Last Name*:", nullptr));
        label_Email->setText(QApplication::translate("MainWindow", "Email*:", nullptr));
        label_PhoneNumber->setText(QApplication::translate("MainWindow", "Phone Number:", nullptr));
        lineEdit_PhoneNumber->setInputMask(QApplication::translate("MainWindow", "(999) 999-9999", nullptr));
        label_Age->setText(QApplication::translate("MainWindow", "Age:", nullptr));
        pushButton_Submit->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        pushButton_SaveAllData->setText(QApplication::translate("MainWindow", "Save All Data", nullptr));
        label_Status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
