/*Elabore um algoritmo que seja capaz de simular uma divisão sem contudo usar divisões.*/
#include <iostream>

using namespace std;

int main() {
	int nr_reb, nr_de_alns = 0, contador = 0;
	cout << "Introduza o numero de alunos: ";
	cin >> nr_de_alns;
	cout << "Introduza o numero de caramelos: ";
	cin >> nr_reb;
	while (nr_reb > nr_de_alns) {
		nr_reb = nr_reb - nr_de_alns;
		contador = contador + 1;
	
	}   
	if (nr_reb > contador) {
		cout << "\nSobraram " << nr_reb << " ,para o corpo feito de carne e ossos em que a minha alma habita : )"<<"\n\n";
	}
	else {
		cout << "\nSobraram " << nr_reb << " ,sobraram poucos ; ("<<"\n\n";
	}
	cout <<"O numero de caramelos que cada aluno vai receber e: "<< contador<<"\n";
}
