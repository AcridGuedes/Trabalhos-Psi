#include <iostream>
#include <cmath>

using namespace std;

int conta(int x)
{
    if(x<10) return 1;
    else return conta(x/10)+1;
}
int invert(int x)
{
   int resto, expoente = conta(x)-1;
    if(x<10) return x;
    else
    {
        resto=x%10;
        return resto*pow(10, expoente)+invert(x/10);
    }
}

int main()
{
    int num;
    cout<<"Introduza o numero a ser utilizado!\n>";
    cin >> num;
    cout<<"Numero de algarismos "<<conta(num)<<endl;
    cout<<"Numero invertido "<<invert(num);
}
