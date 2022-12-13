//Crie um algoritmo que seja capaz de l"er uma senha de acesso a uma conta de um jogo online, dando 3 tentativas ao utilizador de para acertar.
//Logicamente se o utilizador acertar logo á primeira tentaiva o programa não irás pedir a 2 nem a 3 tentativa.
//Se o utilizador nao acertar ao fim da terceira tentativa, o programa deve informar desse pequeno facto e terminar a introdução de tentativas.
//A palavra passe original (do jogo) fica á sua escolha exemplo:passe="zrubidic"
#include <iostream>
#include <string>

using namespace std;

int main() {

	string password = "";
	int cont = 3;

		while (password != "queijo" && cont != 0) {
			cout << "Escreva a palavra passe: ";
			cin >> password;
			if(password != "queijo" && cont != -1){
				cout << "A palavra passe está errada!\n";
				cout << "Tente novamente!\n";
				cont--;
				cout << cont << " tentativas restantes.\n";
			}
			else {
				cout << "==============================\n";
				cout << "     <3 Bem-Vindo! <3 ";
				cout << "\n==============================";
			}
		
	}
		if (cont == 0) {
			cout << "Conta bloqueada, contacte o suporte!";
		}
		return 0;
}
