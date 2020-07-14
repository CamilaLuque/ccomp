#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Empleado
{
protected:
    string nombre;
    string apellido;
public:
    Empleado(string Nombre,string Apellido):nombre(Nombre),apellido(Apellido){}
    string getNombre(){return nombre;}
    string getApellido(){return apellido;}
    virtual int ObtenerSueldo()=0;
    virtual const string obtenerInformacion() const {
            ostringstream output;
            output << "Nombre del trabajador: "<< nombre << endl << "Apellido del trabajador: " << apellido;
            return output.str();
        }
};

#endif // EMPLEADO_H
