#include <iostream>
#include "MotorVehicle.h"
#include <string>

using namespace std;

ostream& operator<<(ostream &output, const MotorVehicle &o){
    output << "Hacer: " << o.hacer << endl << "Tipo de combustible: " << o.tipoCombustible << endl << "Anio de manufactura: " << o.anioManufactura << endl << "Color: " << o.color<< endl << "Capacidad del motor: " << o.capacidadMotor;
    return output;
}

int main()
{
    MotorVehicle m("avanzar","gas",2016,"rojo",1600);
    MotorVehicle v("avanzar","gas",2012,"azul",2000);
    cout<<"¿Son iguales?"<<endl;
    cout<< (m==v) <<endl;
    cout<<"¿Son distintos?"<<endl;
    cout<< (m!=v) <<endl;
    cout<<"¿El anio de manufactura del primero es mayor?"<<endl;
    cout<< (m>v) <<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Usando la funcion datosVehiculo(): "<<endl;
    cout<<endl;
    m.datosVehiculo();
    cout<<endl;
    cout<<endl;
    cout<<"Sobrecargando el operador << : "<<endl;
    cout<<endl;
    cout<<m<<endl;
    return 0;
}
