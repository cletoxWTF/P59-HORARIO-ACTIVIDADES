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

