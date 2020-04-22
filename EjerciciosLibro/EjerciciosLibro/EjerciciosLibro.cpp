// EjerciciosLibro.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>
using namespace std;
//Funcion para el ejercicio 2.29
/*int potencia(int base, int exponente){
        int mult=1;
        for (int i = 0; i < exponente; i++) {
            mult = mult * base;
        }
        return mult;
}*/

int main()
{
    /*//Ejercicio 2.16
    //Suma, producto, diferencia y cociente de dos numeros

    float x, y;
    cout << "Ingrese un numero: ";
    cin >> x;
    cout << "Ingrese otro numero: ";
    cin >> y;
    float suma = x + y;
    float producto = x * y;
    float diferencia = x - y;
    float cociente = x / y;
    cout << "La suma de los dos numeros es: " << suma << endl;
    cout << "El producto de los dos numeros es: " << producto << endl;
    cout << "La diferencia de los dos numeros es: " << diferencia << endl;
    cout << "El cociente de los dos numeros es: " << cociente << endl;*/

    //Ejercicio 2.17
    //Imprimir caracteres

    //a)
    cout << "VX" << " YZ \n";
    //b
    cout << "V" << "X" << " Y" << "Z \n";
    //c
    cout << "VX ";
    cout << "YZ \n";




    /*//Ejercicio 2.18
     //Evaluar el mayor
     int x, y;
     cout << "Ingrese un numero: ";
     cin >> x;
     cout << "Ingrese otro numero: ";
     cin >> y;
     if (x > y) {
         cout << "El mayor es: " << x << endl ;
     }
     if (x == y) {
         cout << "Son iguales" << endl;
     }
     if (y > x) {
         cout << "El mayor es: " << y << endl;
     }*/

     //Ejercicio 2.19
     //Suma, promedio, producto, encontrar el mayor y menor de tres numeros
     /*int x, y, z;
     cout << "Ingrese un numero: ";
     cin >> x;
     cout << "Ingrese otro numero: ";
     cin >> y;
     cout << "Ingrese otro numero: ";
     cin >> z;
     int suma = x + y + z;
     int promedio = (x + y + z) / 3;
     int producto = x * y * z;
     cout << "La suma es: " << suma << endl;
     cout << "El promedio es: " << promedio << endl;
     cout << "El producto es: " << producto << endl;

     if (x < y && x < z) {
         cout << x << " es el menor" << endl;
         if (y > z) {
             cout << y << " es el mayor " << endl;
         }
         else {
             cout << z << " es el mayor" << endl;
         }
     }
     else {
         if (y < x && y < z) {
             cout << y << " es el menor" << endl;
             if (x > z) {
                 cout << x << " es el mayor" << endl;
             }
             else {
                 cout << z << " es el mayor" << endl;
             }
         }
         else {
             cout << z << " es el mayor" << endl;
             if (y < x) {
                 cout << y << " es el menor" << endl;
             }
             else {
                 cout << x << " es el menor" << endl;
             }
         }
     }*/

     //Ejercicio 2.27
    //static cast
    /*char x;
    cout << "Ingrese un caracter: " << endl;
    cin >> x;
    cout << static_cast<int>(x) << endl;*/

    //Ejercicio 2.28
    //Separar digitos e invertir
    /*short x;
    cout << "Ingrese un numero de cuatro digitos: ";
    cin >> x;
    int y = x%10;
    x = x/10;
    int z = x%10;
    x = x/10;
    int w = x%10;
    int v = x/10;
    cout << setw(2)<< y << setw(2)<< z << setw(2)<< w << setw(2)<< v <<endl;*/


    //Ejercicio 2.29
    //Area y volumen de un cubo

    /*cout << "Lado" <<'\t';
    cout << "Area" <<'\t';
    cout << "Volumen" << '\t' << endl;

    for (int i = 0; i < 5; i++) {
        cout << i << '\t';
        cout << potencia(i, 2) << '\t';
        cout << potencia(i, 3) << '\t'<<endl;
    }*/

    return 0;
}
