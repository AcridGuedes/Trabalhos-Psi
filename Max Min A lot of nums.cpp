//Crie um programa que contenha duas funções:
// uma para calcular o máximo de 2 valores inteiros
// uma para calcular o minimo de 2 valores inteiros
// Que seja capaz de calcular o maximo e o minimo de unma sequencia de N numeros.
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float minimo(int x, int y) {
	int min;
	if (x < y) min = x;
	else min = y;
	return min;
}
float maximo(int x, int y) {
	int max;
	if (x > y) max = x;
	else max = y;
	return max;
}
int main() {
	int x, y, n, maxi, mini;
	cout << "Quantos numeros vai utilizar: ";
	cin >> n;
	cout << "Introduza os numero: \n";
	cin >> x; cin >> y;
	maxi = max(x, y);
	mini = min(x, y);
	for (int i = 1; i <= n - 2; i++) {
		cout << "Introduza os numero: \n";
		cin >> x;
		if (max(x, maxi) > maxi) maxi = x;
		if (min(x, mini) < mini) mini = x;
	}
		cout << "Maior: " << maxi << endl;
		cout << "Menor: " << mini << endl;

	return 0;
}
