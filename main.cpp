#include "principal.h"

#include <QApplication>
#include <QTranslator>
#include <QInputDialog>
/*https://www.flaticon.es/iconos-gratis/eliminar iconos creados por Freepik
 * https://www.flaticon.es/iconos-gratis/salida  iconos creados por Freepik
 * https://www.flaticon.es/iconos-gratis/anadir  iconos creados por Smashicons
 * https://www.flaticon.es/iconos-gratis/final iconos creados por Freepik
 * https://www.flaticon.es/iconos-gratis/lista  iconos creados por Freepik
 * https://www.flaticon.es/iconos-gratis/anadir  iconos creados por Freepik
 * https://www.flaticon.es/iconos-gratis/visto  iconos creados por Freepik
 * https://www.flaticon.es/iconos-gratis/boton-agregar  iconos creados por MYS Design
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator traducion;
    // Solicitando al usuario que seleccione un idioma
    QStringList idiomas;
    idiomas << "Inglés" << "Español";
    QString idiomaSeleccionado = QInputDialog::getItem(NULL,
                               "IDIOMA",
                               "Seleccione un idioma",
                               idiomas);
    // Dependiendo del idioma seleccionado, carga el archivo de traducción
    if (idiomaSeleccionado == "Inglés"){
        traducion.load(":/examen_olalla_john_en.qm");
    }
    // Si es diferente de español, se instala la traducción en TODA la aplicación
    if (idiomaSeleccionado != "Español"){
        a.installTranslator(&traducion);
    }
    Principal w;
    w.show();
    return a.exec();
}
