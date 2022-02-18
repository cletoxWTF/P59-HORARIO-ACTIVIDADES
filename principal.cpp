#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
    QStringList cabecera = {tr("Numero"), tr("Nombre"),tr("Tipo"),tr( "Fecha")};
    ui->outActividades->setColumnCount(4);
    ui->outActividades->setHorizontalHeaderLabels(cabecera);
}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_actionSalir_triggered()
{
    QApplication::quit();
}

/*
void Principal::crearArchivo()
{
    m_ubicacion=QDir::homePath();
    bool existente=QFile::exists(m_ubicacion + "/registro.txt");
    if(existente==false){
        QFile archivo(m_ubicacion + "/registro.txt");
        if(archivo.open(QFile::WriteOnly | QFile::Truncate)){
            QTextStream salida(&archivo);
            salida.operator<<("----------------------REGISTRO DE DATOS----------------------");
        }else{
            // CUANDO TENGA LOS DATOS
        }
    }
}
*/

void Principal::on_btnAgregar_released()
{
    // CREAR UN OBJETO DE LA VENTANA QUE QUEREMOS INVOCAR
    agregar *ventana = new agregar(this);

    // MOSTRAR LA VENTANA
    ventana->exec();
}

