#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    int n, num, i;
    string nome, l;
    ifstream f;
    f.open("popi.txt");
    if(!f){
        cout<<"Erro o ficheiro nao pode ser aberto.";
        return -1;
    }
    cout<<"Qual é o teu nome";
    cin>>nome;
    while(!f.eof()){
        getline(f,l);
        if(l == nome){
        getline(f,l);
        cout<< nome << " - " << l;
        break;
        }
    }
    f.close();

    return 0;
