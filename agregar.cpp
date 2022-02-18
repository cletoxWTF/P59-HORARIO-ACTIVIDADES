#include "agregar.h"
#include "ui_agregar.h"

agregar::agregar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregar)
{
    ui->setupUi(this);
    desigPrioridad();
    foreach (Datos *p, m_datitos) {
        ui->inPrioridad->addItem(p->prioridad());
    }
}

agregar::~agregar()
{
    delete ui;
}

void agregar::on_btnCancelar_released()
{
    QDialog::close();
}

void agregar::desigPrioridad()
{
    m_datitos.append(new Datos("Alta"));
    m_datitos.append(new Datos("Media"));
    m_datitos.append(new Datos("Baja"));
}

void agregar::designarDatos()
{
    this->ui->InNombre->setText(m_nombre);
    this->ui->Infecha->setDate(m_fecha);
    if(this->ui->inPrioridad->itemText(0)=="Alta"){
        m_priori = "A";
    }else if(this->ui->inPrioridad->itemText(1)=="Media"){
        m_priori = "M";
    }else if(this->ui->inPrioridad->itemText(2)=="Baja"){
        m_priori = "B";
    }
    this->ui->inTipo->setText(m_tipo);
    this->ui->checkFinalizado->setChecked(m_finalizado);
}

bool agregar::comproDatos()
{
    int flag = 0;
    ui->InNombre->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->inTipo->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->InNombre->setStyleSheet("color: rgb(0, 0, 0);");
    ui->inTipo->setStyleSheet("color: rgb(0, 0, 0);");
    if(this->ui->InNombre->text()==""){
        ui->InNombre->setStyleSheet("background-color: rgb(255, 176, 201)");
        flag = 1;
    }
    if(this->ui->inTipo->text()==""){
        ui->inTipo->setStyleSheet("background-color: rgb(255, 176, 201)");
        flag = 1;
    }
    if(this->ui->checkFinalizado->isChecked()){
        QMessageBox::warning(this,"AVISO","La tarea se agreagara al registro pero no se mostrara en la ventana principal debido a que esta completa.");
    }
    if(flag==1){
        return false;
    }
    return true;

}




agregar::agregar(int numero, const QString &nombre, const QDate &fecha, char *priori, const QString &tipo, bool finalizado, QWidget *parent) : QDialog(parent),
    m_numero(numero),
    m_nombre(nombre),
    m_fecha(fecha),
    m_priori(priori),
    m_tipo(tipo),
    m_finalizado(finalizado)
{}

void agregar::on_btnAgregar_released()
{
    comproDatos();
}

