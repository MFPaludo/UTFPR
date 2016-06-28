#include "conscliente.h"
#include "ui_conscliente.h"
#include "cliente.h"

int indice;
cliente cli;

ConsCliente::ConsCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConsCliente)
{
    ui->setupUi(this);
}

ConsCliente::~ConsCliente()
{
    delete ui;
}

void ConsCliente::on_pushButton_clicked()
{
    cli = PesquisaBinaria(ui->lineEdit_2->text().toStdString(),indice);
    if (cli.cpf!="")
    {
        ui->lineEdit->setText(QString::fromStdString(cli.nome));
    }
}

void ConsCliente::on_pushButton_2_clicked()
{
    cli.cpf = ui->lineEdit_2->text().toStdString();
    cli.nome = ui->lineEdit->text().toStdString();
    alterar(cli,indice);
}

void ConsCliente::on_pushButton_3_clicked()
{
    remover(indice);
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}
