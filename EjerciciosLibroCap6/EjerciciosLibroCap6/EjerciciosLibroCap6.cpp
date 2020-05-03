// EjerciciosLibroCap6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
int calcularCargo(int horas) {
	int cargo;
	while (horas <= 3) {
		cargo = 20;
	}
}
int potencia(int base, int exponente) {
	int resultado = 1;
	for (int i = 0; i < exponente; i++) {
		resultado *= base;
	}
	return resultado;
}
int factor(int primero, int segundo) {
	if (primero % segundo) {
		return false;
	}
	else {
		return true;
	}
}
/*int esPrimo(int num) {
	int x = num / 2;
	for (int i = 2; i < x; i++) {
		if (num % i == 0) {
			cout << "no es primo" << endl;
		}
	}
}*/
int revertir(int x) {
	for (; x > 0; x /= 10) {
		int y = x % 10;
		cout << y;
	}
}
int potenciaRecursiva(int base, int exponente) {
	if (exponente != 0) {
		return base * potenciaRecursiva(base, exponente - 1);
	}
	else {
		return 1;
	}
}
int mcd(int x, int y) {
	if (x > y) {
		if (y == 0) {
			return x;
		}
		else {
			return mcd(y, x % y);
		}
	}
	else {
		return 0;
	}
}
using namespace std;
int main()
{
	//6.12 Calcular cargos en un estacionamiento
	//6.18 Funcion potencia //LISTO
	cout << potencia(2, 4) << endl;
	//6.20 Factor de un numero //LISTO
	cout << factor(30, 15) << endl;
	//6.25 Numero de minutos
	//6.29 Numeros primos
	//6.30 Revertir digitos //LISTO
	revertir(1234);
	//6.36 Funcion recursiva de potencia //LISTO
	cout << potenciaRecursiva(2, 5);
	//6.37 Fibonacci iterativo
	//6.39 Torres de Hannoi
	//6.41 Maximo Comun Divisor recursivo //LISTO
	cout << mcd(2310, 98);

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
