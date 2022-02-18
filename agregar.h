#ifndef AGREGAR_H
#define AGREGAR_H

#include <QDialog>
#include <QDate>

namespace Ui {
class agregar;
}

class agregar : public QDialog
{
    Q_OBJECT

public:
    explicit agregar(QWidget *parent = nullptr);
    ~agregar();

private slots:
    void on_btnCancelar_released();

private:
    Ui::agregar *ui;
    int m_numero;
    QString m_nombre;
    QDate m_fecha;
    char m_prioridad;
    QString m_tipo;
    bool m_finalizado;

};

#endif // AGREGAR_H
