#include "principal.h"

#include <QApplication>
/*https://www.flaticon.es/iconos-gratis/eliminar iconos creados por Freepik
 * https://www.flaticon.es/iconos-gratis/salida  iconos creados por Freepik
 * https://www.flaticon.es/iconos-gratis/anadir  iconos creados por Smashicons
 * https://www.flaticon.es/iconos-gratis/final iconos creados por Freepik
 * https://www.flaticon.es/iconos-gratis/lista  iconos creados por Freepik
 * https://www.flaticon.es/iconos-gratis/anadir  iconos creados por Freepik
 * https://www.flaticon.es/iconos-gratis/visto  iconos creados por Freepik
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Principal w;
    w.show();
    return a.exec();
}
