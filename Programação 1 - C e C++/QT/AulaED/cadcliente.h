#ifndef CADCLIENTE_H
#define CADCLIENTE_H

#include <QDialog>

namespace Ui {
class CadCliente;
}

class CadCliente : public QDialog
{
    Q_OBJECT
    
public:
    explicit CadCliente(QWidget *parent = 0);
    ~CadCliente();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::CadCliente *ui;
};

#endif // CADCLIENTE_H
