#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include "Empleado.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class PieceWorker:public Empleado
{
    private:
        int pieza;
        int pago;
        int total;
        int cont=0;
    public:
        PieceWorker(string Nombre,string Apellido,int Pieza,int Pago):Empleado(Nombre,Apellido),pieza(Pieza),pago(Pago){}
        int getPieza(){return pieza;}
        int getPago(){return pago;}
        int ObtenerSueldo()
        {
            total = pieza*pago;

            return total;
        }
        virtual const string obtenerInformacion() const {
            ostringstream output;
            output << "Nombre del trabajador: " << nombre << endl << "Apellido del trabajador: " << apellido << endl <<"Sueldo total: ";
            return output.str();
        }

};

#endif // PIECEWORKER_H
