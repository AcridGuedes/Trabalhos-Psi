//Crie um programa em C++ que seja capaz de ler as coordenadas de um ponto e
//contenha uma função chamada quadrante e que retorne o quadrante a qual pertence 
//esse ponto

#include <iostream>
#include <string>

using namespace std;

string quadrante(int x, int y) {
	if (x > 0 && y > 0) return 1;
	if (x < 0 && y > 0) return 2;
	if (x < 0 && y < 0) return 3;
	if (x > 0 && y < 0) return 4;
} 

int main() {
	int x, y;
	cout << "Coordenada 'X': ";
	cin >> x;
	cout << "Coordenada 'Y': ";
	cin >> y;
	cout << "O ponto situa-se no " << quadrante(x, y) << " quadrante!";
}
