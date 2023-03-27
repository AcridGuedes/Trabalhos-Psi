/********************************************************************************
Crie um programa em C++ que seja capaz de ler um vector 5 produtos da lista
de cinoras da Nadane Chiringuita e calcule o valor a pagar por esses 5 produtos.
Cada produto deve ser representado por uma estrutura com os seguintes items:
- nome produto - texto
- preço unitario - número real
- quantidade comprada - número real
- valor produto (preço unitario * quantidade)
No final deve realizar a ordenação do vector de produtos por ordem ascendente de:
- nome;
- preço unitario;
- quantidade comprada;
- valor produto.
O criterio de ordenação vai depender da escolha do utilizador (menu de opções).
********************************************************************************/
#include <iostream>
#include <thread>

using namespace std;

struct madame{
	string produto;
	float preco;
	float quant;
	float final;
};
void imprime(madame p) {
	cout << "Nome :" << p.produto << endl;
	cout << "Preco unitario :" << p.preco << endl;
	cout << "Quantidade comprada :" << p.quant << endl;
	cout << "Valor do Produto :" << p.final << endl;
	cout << endl;
}
int main() {
	madame p[5], temp;
	float max = -9999, min = 9999, total = 0;
	int opc = 1;
	string  maxnome, minnome;
	for (int i = 0; i < 5; i++) {
		cout << "Nome do produto:";
		cin >> p[i].produto;
		cout << endl;
		cout << "PreÃ§o do produto:";
		cin >> p[i].preco;
		cout << endl;
		cout << "Quantidade comprada:";
		cin >> p[i].quant;
		cout << endl;
		p[i].final = p[i].preco * p[i].quant;
		if (p[i].preco > max) {
			max = p[i].preco;
			maxnome = p[i].produto;

		}
		else if (p[i].preco < min) {
			min = p[i].preco;
			minnome = p[i].produto;
		}
		total += p[i].preco * p[i].quant;
	}
	while (opc != 0) {
		cout << "1-Nome\n";
		cout << "2-Preco unitario\n";
		cout << "3-Quantidade comprada\n";
		cout << "4-Valor produto\n";
		cout << "0-Terminar\n";
		cout << "-->";
		cin >> opc;
		cout << endl;
		switch (opc) {
		case 1:
			for (int j = 5; j != 0; j--) {
				for (int i = 0; i < 5 - 1; i++) {
					if (p[i].produto > p[i + 1].produto) {
						temp = p[i];
						p[i] = p[i + 1];
						p[i + 1] = temp;
					}
				}
			}
			for (int i = 0; i < 5; i++) {
				imprime(p[i]);
			}
			break;
		case 2:
			for (int j = 5; j != 0; j--) {
				for (int i = 0; i < 5 - 1; i++) {
					if (p[i].preco > p[i + 1].preco) {
						temp = p[i];
						p[i] = p[i + 1];
						p[i + 1] = temp;
					}
				}
			}
			for (int i = 0; i < 5; i++) {
				imprime(p[i]);
			}
			break;
		case 3:
			for (int j = 5; j != 0; j--) {
				for (int i = 0; i < 5 - 1; i++) {
					if (p[i].quant > p[i + 1].quant) {
						temp = p[i];
						p[i] = p[i + 1];
						p[i + 1] = temp;
					}
				}

			}
			for (int i = 0; i < 5; i++) {
				imprime(p[i]);
			}
			break;
		case 4:
			for (int j = 5; j != 0; j--) {
				for (int i = 0; i < 5 - 1; i++) {
					if (p[i].final > p[i + 1].final) {
						temp = p[i];
						p[i] = p[i + 1];
						p[i + 1] = temp;
					}
				}
			}
			for (int i = 0; i < 5; i++) {
				imprime(p[i]);
			}
			break;
		case 0:
			cout << "3\n";
			this_thread::sleep_for(1000ms);
			cout << "2\n";
			this_thread::sleep_for(1000ms);
			cout << "1\n";
			this_thread::sleep_for(1000ms);
			opc = 0;
		}


	}
}
