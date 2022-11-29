//Um numero multiplo de 9 é aquele cuja soma de todos os seus algarismos dá 9
//sabendo isso crie um programa que verifique se o numero escolhido é multiplo de 9
#include <iostream>

using namespace std;

int main()
{
	int n, final = 0, resto = 0, soma = 0;
	while (true) {
	cout << "Escolha o numero a verificar: ";
	cin >> n;
	
		while (n != 0) {
			resto = n % 10;
			soma = soma + resto;
			n = n / 10;

		}
		resto = 0;
		while (soma != 0) {
			resto = soma % 10;
			final = final + resto;
			soma = soma / 10;
		}

		if (final == 9) {
			cout << "\nO numero e multiplo de 9!\n";
			cout << "Obrigado por usar o programa <3\n\n";
		}
		else {
			cout << "\nO numero nao e multiplo de 9!\n";
			cout << "Obrigado por usar o programa <3\n\n";
		}
	}
	return 0;
}
