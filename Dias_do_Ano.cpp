#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	int dias = 0, dd, mm, aa;

	cout << "Digite o dia!\n->";
	cin >> dd;
	cout << "Digite o mês!\n->";
	cin >> mm;
	cout << "Digite o ano!\n->";
	cin >> aa;
	for (int i = 1; i < mm; i++) {
		if (i == 2) {
			if (aa % 4 == 0) {
				dias = dias + 29;
			}
			else {
				dias = dias + 28;
			}
		}
		if (i == 4 || i == 6 || i == 9 || i == 11) {
			dias = dias + 30;
		}
		else {
			dias = dias + 31;
		}

	}
	dias = dias + dd;
	cout << "Passaram-se " << dias << " desde o inicio do ano!";
}
