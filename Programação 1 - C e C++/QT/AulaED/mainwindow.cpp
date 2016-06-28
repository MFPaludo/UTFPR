#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cliente.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    leitura();
}

MainWindow::~MainWindow()
{
    salva();
    delete ui;
}

void MainWindow::on_actionCadastro_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_actionConsulta_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
}
