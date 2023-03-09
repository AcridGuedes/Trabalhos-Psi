/**
Escreva um programa C++ que seja capaz de ler uma matriz K de 3x3 números 
inteiros e em cada colunas some todos os números, colocando o resultado na 
4ª linha da matriz.
         coluna 0   1   2
            :-------------
ex:  linha 0:   3   5   6 
     linha 1:   1   0   2
     linha 2:   8   1   5 
     linha 3:   12  6   13     (cada elemento desta linha resulta da soma
                                dos restantes elementos nessa coluna)
***/
#include <iostream>

using namespace std;

int main()
{
    
    int m[4][3],total, s=0;
    for (int i=0;i<3;i++){
        total=0;
        for(int j=0;j<3;j++){
            cout<<"m["<<i<<"]["<<j<<"]:";
            cin>>m[i][j];
            total += m[i][j];
        }
        
        m[3][i] = total;
        cout<<total<<" = "<<i<<"\n";
    }
    for (int i = 0; i < 4;i++){
        
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<m[i][j]<<"   ";
        }
        cout<<endl;
    }
    return 0;
}
