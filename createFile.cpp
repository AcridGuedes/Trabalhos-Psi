/*Desenvolva um programa em cpp que seja capaz de criar um ficheiro de texto chamadio "dados.txt"
 que ira conter todos os numeros inteiros entre dois limites que o utilizador escolhe.*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int x[2], temp;
    ofstream f;
    f.open("nums.txt");
    cout<<"Escolha 2 números para testar o programa!";
    if(x[0] > x[1]){
        temp = x[1];
        x[1] = x[0];
        x[0] = temp;
    }
    for(int i = 0; i < 2; i++){
        cout<<"\n>";
        cin>>x[i];
    }
    for (x[0]; x[0] <= x[1]; x[0]++){
        f << x[0] <<endl;
    }
    f.close();
}
