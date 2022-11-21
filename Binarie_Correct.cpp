/*Escreva um algoritmo que leia um nº em binario e verifique se esta correto*/
#include <iostream>

using namespace std;

int main() {
	int bin, sim;
	cout << "Introduza o numero binario a ser verificado\n> ";
	cin >> bin;
	while (bin != 0) {
		sim = bin % 10;
		if (sim > 1) {
			cout << "O numero nao e binario!";
			return 0;
		}
		bin = bin / 10;

	}
	cout << "O numero e binario!";
}
