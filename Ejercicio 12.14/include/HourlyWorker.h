#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include "Empleado.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class HourlyWorker : public Empleado
{
    private:
        int pago;
        int total;
        int pagoExtra=0;
        int horas;
        int normal=0;
        int extra=0;
    public:
        HourlyWorker(string Nombre,string Apellido,int Horas,int Pago):Empleado(Nombre,Apellido),horas(Horas),pago(Pago){}
        int getPago(){return pago;}
        int getHoras(){return horas;}
        int ObtenerSueldo()
        {
            extra=horas-40;
            if(extra>0)
            {
                for(int i=horas;i>40;i--)
                {
                    pagoExtra+=pago*1.5;
                }
                total=(normal*pago)+pagoExtra;

            }
            else
            {
                total=horas*pago;
            }

            return total;
        }
        virtual const string obtenerInformacion() const {
            ostringstream output;
            output << "Nombre del trabajador: "<< nombre << endl << "Apellido del trabajador: " << apellido << endl <<"Sueldo total: " ;
            return output.str();
        }

};

#endif // HOURLYWORKER_H
