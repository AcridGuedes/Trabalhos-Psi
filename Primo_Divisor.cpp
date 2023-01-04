//Crie um programa que contenha duas funções:
// uma para calcular o máximo de 2 valores inteiros
// uma para calcular o minimo de 2 valores inteiros
// Que seja capaz de calcular o maximo e o minimo de unma sequencia de N numeros.
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int division(int x) {
	int cont = 0, k = 1;
	while (x >= k) {
		if (x % k == 0) cont++;
		k++;
	}
	
	return cont;
}

int primo(int x) {
	if (division(x) <= 2) return true;
	else return false;

}

int main() {
	int input;
	cout << "Introduza o numero: ";
	
	cin >> input;

	cout << "O numero " << input << " tem " << division(input) << " Divisores!";

	if (primo(input)) cout << "\nO numero e primo!";
	else cout << "\nO numero e primo!";

	return 0;
}
