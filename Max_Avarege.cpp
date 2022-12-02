//Uma agencia bancaria emplementou um estudo estatistico sobre os valores de levantamentos realizados na agencia com o objectivo de saber qual o valor do levantamento mais elevado bem como o valor medio o problema é que não é conhecido o número de levantamentos efetuados sendo só conhecida lista de valores crie um programa que realize esses calculos sabendo que após o ultimo levantamento irá aparecer o numero -1
#include <iostream>

using namespace std;

int main() {
	int n = 0, cont = -1, soma = 1,media = 0, max = -99999999;
	while (n != -1) {
		cout << "Escreva os levantamentos para acabar escreva -1: ";
		cin >> n;
		cont = cont + 1;
		soma = soma + n;
		if (n > max) {
			max = n;
		}

		}
	media = soma / cont;
	cout << "Tens "<<cont<< " levantamentos!";
	cout << "\nA media e " << media<<"!";
	cout << "\nO maior levantamento e " << max<<"!";
}
