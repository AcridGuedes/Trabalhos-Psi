/*Escreva um algoritmo em pseudócodigo ou c++ que leia um número inteiro, de qualquer dimensão, e inverta os seus algoritmos.*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int num, resto = 0, final = 0;
	cout <<"Escolha o numero!\n> ";
	cin >> num;
	while (num > 0) {
		resto = num % 10;
		num = num / 10;
		final = final * 10 + resto;
	}
	cout <<"O numero escolhido invertido e = "<< final;

	return 0;
}
