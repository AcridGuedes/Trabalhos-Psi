//Um algoritmo que seja capaz de simular o funcionamento de uma caixa registradora de uma loja lendo varios produtos, com os seguintes dados para cada um:
//Nome do produto (string); preço unitario (float); quantidade (float)
//A introduçao termina quando se insere fim no nome do produto. A caixa registadora deve calcular o total a pagar e o nome e preço do produto mais caro.
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
	string nome_prod = "", prodmax = "popi", decoy="";
	float preco_unit, quant, preco_max = -99999, preco_final = 0, total = 0;
	while (nome_prod != "fim"){
		cout << "Nome do produto: ";
		cin >> ws;
		getline(cin, nome_prod);
		if (nome_prod != "fim") {
			cout << "Quantidade: ";
			cin >> quant;
			cout << "Preco do produto: ";
			cin >> preco_unit;
			total = quant * preco_unit;
			preco_final = preco_final + total;
			if (preco_unit > preco_max) {
				preco_max = preco_unit;
				prodmax = nome_prod;
			}
		}
	} 
	cout << "\nO total a pagar e " <<preco_final<<" Euros.";
	cout << "\nO produto mais caro e " << prodmax;
	return 0;
}
