#ifndef MOTORVEHICLE_H
#define MOTORVEHICLE_H
#include <iostream>
#include <string>
using namespace std;

class MotorVehicle
{
    private:

        string hacer;
        string tipoCombustible;
        int anioManufactura;
        string color;
        int capacidadMotor;

    public:

        MotorVehicle();
        MotorVehicle(string ,string,int,string,int);
        void setHacer(string);
        void setTipoCombustible(string);
        void setAnioManufactura(int);
        void setColor(string);
        void setCapacidadMotor(int);
        string getHacer();
        string getTipoCombustible();
        int getAnioManufactura();
        string getColor();
        int getCapacidadMotor();
        void datosVehiculo();
        bool operator==(const MotorVehicle &o);
        bool operator!=(const MotorVehicle &o);
        bool operator>(const MotorVehicle &o);
        friend ostream& operator<<(ostream &output, const MotorVehicle &o);

};

#endif // MOTORVEHICLE_H
