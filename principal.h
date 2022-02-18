#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QFileDialog>
#include "agregar.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private slots:
    void on_actionSalir_triggered();

    void on_btnAgregar_released();

private:
    Ui::Principal *ui;
    QString m_ubicacion;
    //QString m_datos;
    void crearArchivo();
};
#endif // PRINCIPAL_H
