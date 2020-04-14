// UsoIf.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    /*int x;
    cout << "Ingrese un numero: ";
    cin >> x;
    if (x % 2) {
        cout << "Es impar" << endl;
    }
    else {
        cout << "Es par" << endl;
    }*/

    //comprobar si un numero es multiplo de otro
    /*int x,y; 
    cout << "Ingrese un numero: ";
    cin >> x;
    cout << "Ingrese otro numero: ";
    cin >> y;
    if (x % y) {
        cout << "No es multiplo" << endl;
    }
    else {
        cout << "Es multiplo" << endl;
    }*/

    /*int x, y, z;

    cout << "Ingrese un numero: ";
    cin >> x;
    cout << "Ingrese otro numero: ";
    cin >> y;
    cout << "Ingrese otro numero: ";
    cin >> z; 

    if (x > y && x > z) {
        cout << x << " es el numero mayor"<< endl;
    }
    else {
        if (y > x && y > z) {
            cout << y << " es el numero mayor" << endl;
        }
        else {
            cout << z << " es el numero mayor" << endl;
        }
    }*/

    int x, y, z;

    cout << "Ingrese un numero: ";
    cin >> x;
    cout << "Ingrese otro numero: ";
    cin >> y;
    cout << "Ingrese otro numero: ";
    cin >> z;

    if (x > y && x > z) {
        cout << x << " es el numero mayor" << endl;
        if (y < z) {
            cout << y << " es el numero menor" << endl;
        }
        else {
            cout << z << " es el numero menor" << endl;
        }
    }
    else {
        if (y > x && y > z) {
            cout << y << " es el numero mayor" << endl;
            if (x < z) {
                cout << x << " es el numero menor" << endl;
            } 
            else {
                cout << z << " es el numero menor" << endl;
            }
        }
        else {
            cout << z << " es el numero mayor" << endl;
            if (y < x) {
                cout << y << " es el numero menor" << endl;
            }
            else {
                cout << x << " es el numero menor" << endl;
            }
        }
    }

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln