/*Escreva um algoritmo/pseudocodigo ou c++que seja ca+paz de ler 2  o maximo divisor comum entre eles.*/
#include <iostream>

using namespace std;
int main() {
	int num1, num2, max = 0, min = 0, dif = 0;

	cout << "1st num = ";
	cin >> num1;
	cout << "2nd num = ";
	cin >> num2;
	while (num1 != num2) {
		if (num1 > num2) {
			max = num1;
			min = num2;
		}
		else {
			max = num2;
			min = num1;
		}
		dif = max - min;
		num1 = min;
		num2 = dif;
		cout << "\n\n" << max << "-" << min << "=" << dif;
	}
	cout << "\n\nO MDC e => " << dif;

	return 0;
}
