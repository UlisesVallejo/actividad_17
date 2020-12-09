#include "civilizacion.h"

Civilizacion::Civilizacion()
{

}

Civilizacion::Civilizacion(const string &nombre, int x, int y, int puntuacion)
{
    this->nombre = nombre;
    this->x = x;
    this->y = y;
    this->puntuacion = puntuacion;
}

void Civilizacion::setNombre(const string &v)
{
    nombre = v;
}
void Civilizacion::setX(int v)
{
    x = v;
}
void Civilizacion::setY(int v)
{
    y = v;
}
void Civilizacion::setPuntuacion(int v)
{
    puntuacion = v;
}



string Civilizacion::getNombre()
{
    return nombre;
}
int Civilizacion::getX()
{
    return x;
}
int Civilizacion::getY()
{
    return y;
}
int Civilizacion::getPuntuacion()
{
    return puntuacion;
}