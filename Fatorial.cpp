/*Escreva um algoritmo que seja capaz de ler um número inteiro N e calcule o seu fatorial (N!) de acordo com a formula.*/
#include <iostream>

using namespace std;

int main()
{
	int n, mult = 0;
	cout << "Escolha o número a ser fatorizado: ";
	cin >> n;
		for (int i = n - 1; i > 0; i=i-1) {
			mult = n * i;
			n = mult;
		}
		cout << n;
		return 0;
}
