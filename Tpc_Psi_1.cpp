#include <iostream>

using namespace std;

int main()
{
    int pos = 0, maior = -9999999999999999, menor = 9999999999999999;
    float soma = 0, media = 0, nums[5];
    for (int i = 0; i < 5; i++) {
        cout << "Escolha os numeros.\n> ";
        cin >> nums[i];
        if (nums[i] > maior) {
            maior = nums[i];
        }
        if (nums[i] < menor) {
            menor = nums[i];
        }
        if (nums[i] >= 0) {
            pos = pos + 1;
        }
        soma = soma + nums[i];
        media = soma / 5;
    }

    cout << "Maximo > " << maior << "\n";
    cout << "Menor > " << menor << "\n";
    cout << "Positivos > " << pos << "\n";
    cout << "Media  > " << media << "\n\n";

    return 0;

}
