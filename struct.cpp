#include <iostream>

using namespace std;

typedef struct{
   int numero;
   int idade;
   char nome[100];
}aluno;

typedef struct{
    int numero;
    float nome;
}disciplina;

void output(aluno a){
    cout<<"Número: " <<a.numero<<" idade: "<<a.idade<<" Nome: "<<a.nome;
}
void input(aluno &a){
    cout<<"\nNumero:";
    cin>>a.numero;
    cout<<"\nIdade: ";
    cin>>a.idade;
    cout<<"\nNome: ";
    cin>>a.nome;
}
int main(){
    disciplina psi;
    aluno aluno_1;
    input(aluno_1);
    output(aluno_1);
    
}
