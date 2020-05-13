#include <iostream>
#include <array>

using namespace std;

int print(array<int, 1000>primo) {
    for (int i = 0; i < 1000; i++) {
        if (primo[i] == 1) {
            cout << i << endl;
        }
    }
}

int main()
{
    array<int, 1000>primo;

    for (int i = 2; i < 1000; i++) {
        primo[i] = 1;
    }

    //traté de hacer un for hasta el 10, en lugar de lo que aparece abajo, pero imprimia numeros que no son primos

    for (int i = 2; i < 1000; i += 2) {
        primo[i] = 0;
    }
    for (int i = 3; i < 1000; i += 3) {
        primo[i] = 0;
    }
    for (int i = 4; i < 1000; i += 4) {
        primo[i] = 0;
    }
    for (int i = 5; i < 1000; i += 5) {
        primo[i] = 0;
    }
    for (int i = 6; i < 1000; i += 6) {
        primo[i] = 0;
    }
    for (int i = 7; i < 1000; i += 7) {
        primo[i] = 0;
    }
    for (int i = 8; i < 1000; i += 8) {
        primo[i] = 0;
    }
    for (int i = 9; i < 1000; i += 9) {
        primo[i] = 0;
    }
    for (int i = 10; i < 1000; i += 10) {
        primo[i] = 0;
    }
    for (int i = 0; i < 1000; i++) {
        if (i == 2 || i == 3 || i == 5 || i == 7) {
            primo[i] = 1;
        }
    }

    print(primo);
}

