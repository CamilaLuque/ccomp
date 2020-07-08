#include "MotorVehicle.h"
#include <iostream>
#include <string>
using namespace std;

MotorVehicle::MotorVehicle(){
    hacer = "";
    tipoCombustible = "";
    anioManufactura = 0;
    color = "";
    capacidadMotor = 0;
}

MotorVehicle::MotorVehicle(string _hacer, string _tipoCombustible, int _anioManufactura, string _color, int _capacidadMotor){
    this->hacer = _hacer;
    this->tipoCombustible = _tipoCombustible;
    this->anioManufactura = _anioManufactura;
    this->color = _color;
    this->capacidadMotor = _capacidadMotor;
}

void MotorVehicle::setHacer(string _hacer){
    this->hacer=_hacer;
}

void MotorVehicle::setTipoCombustible(string _tipoCombustible){
    this->tipoCombustible=_tipoCombustible;
}

void MotorVehicle::setAnioManufactura(int _anioManufactura){
    this->anioManufactura=_anioManufactura;
}

void MotorVehicle::setColor(string _color){
    this->color=_color;
}

void MotorVehicle::setCapacidadMotor(int _capacidadMotor){
    this->capacidadMotor=_capacidadMotor;
}

string MotorVehicle::getHacer(){
    return hacer;
}

string MotorVehicle::getTipoCombustible(){
    return tipoCombustible;
}

int MotorVehicle::getAnioManufactura(){
    return anioManufactura;
}

string MotorVehicle::getColor(){
    return color;
}

int MotorVehicle::getCapacidadMotor(){
    return capacidadMotor;
}

void MotorVehicle::datosVehiculo(){
    cout<< "Hacer: " << getHacer() << endl;
    cout<< "Tipo de combustible: " << getTipoCombustible() << endl;
    cout<< "Anio de manufactura: " << getAnioManufactura() << endl;
    cout<< "Color: " << getColor() << endl;
    cout<< "Capacidad del motor: " << getCapacidadMotor() << endl;
}

bool MotorVehicle::operator==(const MotorVehicle &o){
    return this->hacer==o.hacer && this->tipoCombustible==o.tipoCombustible && this->anioManufactura==o.anioManufactura && this->color==o.color && this->capacidadMotor==o.capacidadMotor;
}

bool MotorVehicle::operator!=(const MotorVehicle &o){
    return !(this->hacer==o.hacer && this->tipoCombustible==o.tipoCombustible && this->anioManufactura==o.anioManufactura && this->color==o.color && this->capacidadMotor==o.capacidadMotor);
}

bool MotorVehicle::operator>(const MotorVehicle &o){
    return anioManufactura > o.anioManufactura;
}

