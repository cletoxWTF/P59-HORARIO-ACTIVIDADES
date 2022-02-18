#ifndef DATOS_H
#define DATOS_H

#include <QString>
class Datos
{
public:
    Datos();
    Datos(const QString &prioridad);

    void setPrioridad(const QString &newPrioridad);

    const QString &prioridad() const;

private:
    QString m_prioridad;


};

#endif // DATOS_H
