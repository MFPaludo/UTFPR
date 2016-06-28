#include "ui_cadcliente.h"
#include "cadcliente.h"
#include "cliente.h"


CadCliente::CadCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadCliente)
{
    ui->setupUi(this);

}

CadCliente::~CadCliente()
{
    delete ui;
}

void CadCliente::on_pushButton_clicked()
{
    cliente novo_cli;
    novo_cli.cpf = ui->lineEdit_2->text().toStdString();
    novo_cli.nome = ui->lineEdit->text().toStdString();
    cadastro(novo_cli);
}
