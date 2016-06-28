/********************************************************************************
** Form generated from reading UI file 'conscliente.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSCLIENTE_H
#define UI_CONSCLIENTE_H

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

class Ui_ConsCliente
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *ConsCliente)
    {
        if (ConsCliente->objectName().isEmpty())
            ConsCliente->setObjectName(QStringLiteral("ConsCliente"));
        ConsCliente->resize(400, 300);
        formLayoutWidget = new QWidget(ConsCliente);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(40, 20, 311, 71));
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

        pushButton = new QPushButton(ConsCliente);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 130, 81, 23));
        pushButton_2 = new QPushButton(ConsCliente);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 130, 81, 23));
        pushButton_3 = new QPushButton(ConsCliente);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 130, 81, 23));

        retranslateUi(ConsCliente);

        QMetaObject::connectSlotsByName(ConsCliente);
    } // setupUi

    void retranslateUi(QDialog *ConsCliente)
    {
        ConsCliente->setWindowTitle(QApplication::translate("ConsCliente", "Dialog", 0));
        label->setText(QApplication::translate("ConsCliente", "Nome", 0));
        lineEdit_2->setInputMask(QApplication::translate("ConsCliente", "999.999.999-99", 0));
        label_2->setText(QApplication::translate("ConsCliente", "CPF", 0));
        pushButton->setText(QApplication::translate("ConsCliente", "Consultar", 0));
        pushButton_2->setText(QApplication::translate("ConsCliente", "Salvar", 0));
        pushButton_3->setText(QApplication::translate("ConsCliente", "Remover", 0));
    } // retranslateUi

};

namespace Ui {
    class ConsCliente: public Ui_ConsCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSCLIENTE_H
