#include "datos.h"

Datos::Datos()
{

}

void Datos::setPrioridad(const QString &newPrioridad)
{
    m_prioridad = newPrioridad;
}

const QString &Datos::prioridad() const
{
    return m_prioridad;
}

Datos::Datos(const QString &prioridad) : m_prioridad(prioridad)
{}
