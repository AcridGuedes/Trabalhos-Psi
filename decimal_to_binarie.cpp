/*Escreva um algoritmo em c++ que transforme um numero decimal em binario */
#include <iostream>

using namespace std;

int main() {
	long bin, numero, mult, resto;
	bin = 0;
	mult = 1;
	cout << "Introduza o numero que vai converter:";
	cin >> numero;
	while (numero != 0) {
		resto = numero % 2;
		bin = bin + resto * mult;
		mult = mult * 10;
		numero = numero / 2;
	}
	cout << "O  em binario e " << bin << endl;
	return 0;
}
