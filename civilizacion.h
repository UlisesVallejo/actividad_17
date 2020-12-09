#ifndef CIVILIZACION_H
#define CIVILIZACION_H
#include <iostream>
#include <iomanip>
using namespace std;

class Civilizacion
{
    string nombre;
    int x;
    int y;
    int puntuacion;

public:
     Civilizacion();
     Civilizacion(const string &nombre, int x, int y, int puntuacion);

     void setNombre(const string &v);
     void setX(int v);
     void setY(int v);
     void setPuntuacion(int v);

    string getNombre();
    int getX();
    int getY();
    int getPuntuacion();


    friend ostream& operator<<(ostream &out, const Civilizacion &c)
    {
        out << left;
        out << setw(10) << c.nombre;
        out << setw(12) << c.x;
        out << setw(12) << c.y;
        out << setw(12) << c.puntuacion;
        out << endl;

        return out;
    }

    friend istream& operator>>(istream &in, Civilizacion &c)
    {
        cout << "Nombre: ";
        getline(cin, c.nombre);

        cout << "Ubicacion en x: ";
        cin >> c.x;

        cout << "Ubicacion en y: ";
        cin >> c.y;

        cout << "Puntuacion: ";
        cin >> c.puntuacion;

        return in;
    }

    bool operator==(const Civilizacion& c)
    {
        return nombre == c.nombre;
    }
    bool operator==(const Civilizacion& c) const
    {
        return nombre == c.nombre;
    }

    bool operator<(const Civilizacion& c)
    {
        return nombre < c.nombre;
    }
    bool operator<(const Civilizacion& c) const
    {
        return nombre < c.nombre;
    }
};

#endif