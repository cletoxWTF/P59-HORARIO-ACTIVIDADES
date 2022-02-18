#ifndef AGREGAR_H
#define AGREGAR_H

#include <QDialog>
#include <QDate>
#include <QString>
#include "datos.h"
#include <QMessageBox>


namespace Ui {
class agregar;
}

class agregar : public QDialog
{
    Q_OBJECT

public:
    explicit agregar(QWidget *parent = nullptr);
    agregar(int numero, const QString &nombre, const QDate &fecha, char priori, const QString &tipo, bool finalizado, QWidget *parent = nullptr);
    agregar(int numero, const QString &nombre, const QDate &fecha, char *priori, const QString &tipo, bool finalizado, QWidget *parent = nullptr);
    agregar(const QList<Datos *> &datitos, int numero, const QString &nombre, const QDate &fecha, char *priori, const QString &tipo, bool finalizado, QWidget *parent = nullptr);
    ~agregar();

private slots:
    void on_btnCancelar_released();

    void on_btnAgregar_released();

private:
    Ui::agregar *ui;
    QList<Datos*> m_datitos;
    int m_numero;
    QString m_nombre;
    QDate m_fecha;
    char *m_priori;
    QString m_tipo;
    bool m_finalizado;
    void desigPrioridad();
    void designarDatos();
    bool comproDatos();
};

#endif // AGREGAR_H
