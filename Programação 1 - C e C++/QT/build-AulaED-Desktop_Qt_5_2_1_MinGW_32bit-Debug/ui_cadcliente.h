/********************************************************************************
** Form generated from reading UI file 'cadcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADCLIENTE_H
#define UI_CADCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadCliente
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *CadCliente)
    {
        if (CadCliente->objectName().isEmpty())
            CadCliente->setObjectName(QStringLiteral("CadCliente"));
        CadCliente->resize(400, 300);
        formLayoutWidget = new QWidget(CadCliente);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(50, 20, 311, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_2);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        pushButton = new QPushButton(CadCliente);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 170, 81, 23));

        retranslateUi(CadCliente);

        QMetaObject::connectSlotsByName(CadCliente);
    } // setupUi

    void retranslateUi(QDialog *CadCliente)
    {
        CadCliente->setWindowTitle(QApplication::translate("CadCliente", "Dialog", 0));
        label->setText(QApplication::translate("CadCliente", "Nome", 0));
        lineEdit_2->setInputMask(QApplication::translate("CadCliente", "999.999.999-99", 0));
        label_2->setText(QApplication::translate("CadCliente", "CPF", 0));
        pushButton->setText(QApplication::translate("CadCliente", "Salvar", 0));
    } // retranslateUi

};

namespace Ui {
    class CadCliente: public Ui_CadCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADCLIENTE_H
