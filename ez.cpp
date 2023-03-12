#include <iostream>

using namespace std;

int main()
{
   int m[4][4]={{1,2,3,4},{5,6,7,8},{9,0,1,2},{3,4,5,6}}, v[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, soma = 0, total = 0, s = 0;

    for (int i = 0; i<4; i++){
        for (int j = 0; j < 4; j++){
          total += soma + m[i][j]; 
        }
        v[0 + s][0 + s] = total;
        total = 0;
        s++;
    }
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<"   ";
        }
        cout<<endl;
     }

    return 0;
}
