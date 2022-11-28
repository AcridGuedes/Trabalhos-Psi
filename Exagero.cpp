//Escreva um algoritmo que seja capaz de calcular um dos termos de uma série matemática muito conhecida chamada série de fibonacci,
//cujos os termos são calculados da seguinte forma: f(0)=1; f(1)=1; f(2)=2; f(3)= 3; f(4)= 5; f(5)= 8; f(6)= 13
#include <iostream>

using namespace std;

int main()
{
	int n, ant_1 = 1, ant_2 = 1, result = 0 ;
	cout << "Escolha o numero a ser utilizado: ";
	cin >> n;
	for(int i = 1; i < n ; i++){
		result = ant_1 + ant_2;
		ant_2 = ant_1;
			ant_1 = result;
	}
	cout << result;
}
