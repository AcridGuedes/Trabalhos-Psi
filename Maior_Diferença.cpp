//Crie um algoritmo que seja capaz de ler uma sequencia de N numeros inteiros e calcule:
//A maior diferenca em valor absoluto entre dois numeros seguidos
//Quais os dois numeros seguidos que deram origem a maior diferença
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int vzs, x2 = 0, nova = 0, anterior = 0, x1 = 0, cont = 1, k = 0, maxdif = -999, dif = 0;
	cout << "Introduza quantos numeros vai utilizar: ";
	cin >> vzs;
	cout << "\nEscolha os numeros: ";
	cin >> anterior;
	while (cont != vzs) {
		cout << "\nEscolha os numeros: ";
		cin >> nova;
	
		dif = abs(nova - anterior);

		if (dif > maxdif) {
			maxdif = dif;
			x1 = nova;
			x2 = anterior;
		}
		cont = cont + 1;
		anterior = nova;
	}
	
	cout << "\nMaxDif: " << maxdif;
	cout << "\nX1: " << x1;
	cout << "\nX2: " << x2;
}
