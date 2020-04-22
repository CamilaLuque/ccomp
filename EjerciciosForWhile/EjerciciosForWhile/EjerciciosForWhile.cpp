// EjerciciosForWhile.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Ingrese un numero: ";
    cin >> x;
    for (; x > 0; x = x / 10) {
        int y = x % 10;
        cout << y << " ";
    }
    return 0;
}
