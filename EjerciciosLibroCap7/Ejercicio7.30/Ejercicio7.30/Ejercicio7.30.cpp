// Ejercicio7.30.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Función printArray

#include <iostream>
#include <array>

using namespace std;


//7.30

void printArray(array <int, 5> arr, int i = 0) {
    if (i == arr.size()) {
        for (int j = 0; j < arr.size(); j++) {
            cout << arr[j] << endl;
        }
        return;
    }
    return printArray(arr, i + 1);
}

int main()
{
    array <int, 5> arr{ 1,2,3,4,5 };
    printArray(arr);


}

