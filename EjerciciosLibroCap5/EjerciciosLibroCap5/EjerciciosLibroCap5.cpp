// EjerciciosLibroCap5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>

int main()
{
	//5.11 El menor de varios enteros //LISTO
	int cantidad, menor, numero;
	cout << "Ingrese la cantidad de numeros que desea evaluar: ";
	cin >> cantidad;
	for (int i = 0; i < cantidad; i++) {
		cout << "Ingrese un numero: ";
		cin >> numero;
		if (i == 0) {
			menor = numero;
		}
		if (numero < menor) {
			menor = numero;
		}
	}
	cout << "El numero menor es: " << menor;
	//5.15 Triangulos
	int asterisco = 1;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < asterisco; j++) {
			cout << "*";
		}
		cout << endl;
		asterisco += 1;
	}
	// 5.19 Imprimir el valor de pi //LISTO
	double pi(0.0);
	int x = 0;
	int contador = 0;
	for (int i = 1; i <= 200000; i += 2) {
		if (i == 1 || x == 4) {
			pi += (4 / (double)i);
			x = 2;
		}
		else {
			pi -= (4 / (double)i);
			x += 2;
		}
		if (pi <= 4) {
			contador++;
		}
	}
	cout << setprecision(200000) << pi << endl;
	cout << contador << endl;

	//5.29 Problema de Peter Minuit //LISTO 
	for (int i = 0; i < 2; i++) {
		// set floating-point number format
		cout << fixed << setprecision(2);

		double principal = 24.00; // initial amount before interest
		double rate; // interest rate
		if (i == 0) {
			rate = 0.05;
		}
		else {
			rate = 0.1;
		}

		cout << "Initial principal: " << principal << endl;
		cout << "	Interest rate:	" << rate << endl;

		// display headers
		cout << "\nYear" << setw(20) << "Amount on deposit" << endl;
		//calculate amount on deposit for each of 394 years (since 1626 until 2020)
		for (unsigned int year = 1; year <= 394; year++) {
			//calculate the amount on depost at the end of the specified year
			double amount = principal * pow(1.0 + rate, year);

			//display the year and the amount
			cout << setw(4) << year << setw(20) << amount << endl;
		}
	}
}

