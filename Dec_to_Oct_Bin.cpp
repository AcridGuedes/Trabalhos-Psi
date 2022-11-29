//Escreva um algoritmo/Pseudocodigo/C++ que seja capaz de ler u numero  em decimal e o converta para binario ou octal , conforme a escolha do utilizador
using namespace std;
#include <iostream>

int main()
{
    int n, bin, oct, esc, rest, mult;
    bin = 0;
    mult = 1;
    oct = 0;
    cout << "Escolha de que maneira deseja colocar o numero decimal\n";
    cout << "1-Binario\n";
    cout << "2-Octal\n";
    cin >> esc;
    switch (esc) {
    case 1:
        cout << "Escolha o numero a utilizar para transformar em binario\n-->";
        cin >> n;
        while (n != 0) {
            rest = n % 2;
            bin = bin + rest * mult;
            mult = mult * 10;
            n = n / 2;
        }
        cout << bin;
        break;
    case 2:
        cout << "Escolha o numero a utilizar para transformar o octal\n-->";
        cin >> n;
        while (n != 0) {
            rest = n % 8;
            oct = oct + rest * mult;
            mult = mult * 10;
            n = n / 8;
        }
        cout << oct;
    }
    return 0;
}
