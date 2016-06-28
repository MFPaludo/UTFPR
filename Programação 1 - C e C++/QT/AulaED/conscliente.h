#ifndef CONSCLIENTE_H
#define CONSCLIENTE_H

#include <QDialog>

namespace Ui {
class ConsCliente;
}

class ConsCliente : public QDialog
{
    Q_OBJECT
    
public:
    explicit ConsCliente(QWidget *parent = 0);
    ~ConsCliente();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ConsCliente *ui;
};

#endif // CONSCLIENTE_H
