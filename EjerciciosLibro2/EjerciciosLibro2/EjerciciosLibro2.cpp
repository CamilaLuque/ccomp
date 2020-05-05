// EjerciciosLibro2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	//4.26 Imprimir un cuadrado hueco de asteriscos, el usuario debe indicar el tamaño del lado //LISTO
	/*int x;
	cout << "Ingrese el tamanio del cuadrado, este sera hueco: ";
	cin >> x;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			if (j==0||j==(x-1)||i==0||i==(x-1)){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout << endl;
	}*/


	//4.27 Indicar si un numero de cinco digitos es palindromo //LISTO
	/*int x, num, aux1;
	int aux = 0;
	int b = 10;
	cout << "Ingrese un numero de cinco digitos: ";
	cin >> x;
	num = x;
	while (x != 0) {
		aux1 = (aux * b) + (x % 10);
		aux = aux1;
		x /= 10;
	}
	if (aux == num) {
		cout << "Es palindromo " << 5 * * << endl;
	}
	else {
		cout << "No es palindromo" << endl;
	}*/



	//4.28 Convertir un binario a decimal
	/*int binario;
	cout << "Ingrese un numero binario: ";
	cin >> binario;
	int resultado = 1;
	int suma = 0;
	while (binario != 0) {
		int c = (binario % 10);
		for (int i = 0; binario != 0; i++) {
			for (int j = 0; j <= i; j++) {
				resultado *= 2;
			}
			suma += resultado * c;
			binario = binario / 10;
		}
	}
	cout << suma;*/



	//4.30 Fibonacci //LISTO
	/*double fib = 0;
	double x = 1;
	double y;
	while (1) {
		y = fib;
		fib = fib + x;
		x = y;
		cout << fib << endl;
	}*/


}
