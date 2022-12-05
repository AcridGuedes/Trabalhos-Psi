//O valor de PI é calculado pela seguinte sequência infinita. Elabore um algoritmo que seja capaz de ler um nr inteiro N e calcule a soma dos N primeiro termos da sequencia.

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n;
	float soma = 0, termo = 1, x = 0, y = 0, final = 0;
	cout << "Nao sei para ser sincero: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		x = pow(-1, i + 1);
		y = 2 * i - 1;
		termo = x / y;
		soma = termo + soma;
	}
	final = 4 * soma;
	cout << "\nResult: " <<4 * soma;
	return 0;
}
