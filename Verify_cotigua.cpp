/*Determina se o numero é capicua*/
#include <iostream>

using namespace std;
int main() {
	int num, resto = 0, final = 0, copia = 0;
	cout << "Escolha um numero a vereficar\n> ";
	cin >> num;
	copia = num;
	while (num > 0) {
		resto = num % 10;
		num = num / 10;
		final = final * 10 + resto;
	}
	if (copia == final) {
		cout << "O numero e capicua!";
	}
	else {
		cout << "O numero nao e capicua!";
	}

	return 0;
}
