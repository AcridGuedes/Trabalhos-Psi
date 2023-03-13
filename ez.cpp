/**
Escreva um programa C++ que seja capaz de ler uma matriz K de 4x4 números 
inteiros e some todos os números de cada linha no elemento da diagonal, colocando
os restantes elementos a zero.
         coluna 0   1   2   3               coluna 0   1   2   3
            :----------------                  :----------------
ex:  linha 0:   1   2   3   4           linha 0:   10  0   0   0
     linha 1:   5   6   7   8    --->   linha 1:   0  26   0   0
     linha 2:   9   0   1   2           linha 2:   0   0   12  0
     linha 3:   3   4   5   6           linha 3:   0   0   0   18
***/

#include <iostream>

using namespace std;

int main()
{
   int m[4][4]={{1,2,3,4},{5,6,7,8},{9,0,1,2},{3,4,5,6}}, total = 0, s = 0;

    for (int i = 0; i<4; i++){  
        for (int j = 0; j < 4; j++){  
          total += m[i][j]; 
          m[i][j] = 0;
        }
        m[s][s] = total;
        total = 0;
        s++;
    }
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<m[i][j]<<"   ";
        }
        cout<<endl;
     }
    return 0;
}
