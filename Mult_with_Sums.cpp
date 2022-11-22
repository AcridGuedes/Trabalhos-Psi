/*Elabore um algoritmo que seja capaz de simular uma multiplicação dos nºs inteiros com somas.*/
#include <iostream>

using namespace std;

int main() {
	int n1, n2, final = 0;
	cout << "Escolha os numeros!\n";
	cout << "Primeiro nr: ";
	cin >> n1;
	cout << "Segundo nr: ";
	cin >> n2;
	for (int i = 0; i < n2; i++) {
		final = final + n1;
}
	cout << final;
	return 0;
}
