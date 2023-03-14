/******************************************************************************
Escreva um programa em C++ que seja capaz de representar numa matriz as notas
obtidas por um turno de PSI (13 alunos) nos 7 módulos que constituem o 10º ano
da disciplina, tendo um menu com as seguintes opções:
1 - Inserir a classificação de um aluno num dado módulo
2 - Inserir todas as classificações do aluno
3 - Inserir todas as classificações num dado módulo
4 - Calcular a média de um dado aluno
5 - Calcular a média de um dado módulo
6 - Determinar melhor aluno num dado módulo
7 - Apresentar classificações de um dado aluno
8 - Apresentar as classificações obtidas pelos alunos num dado módulo
9 - Apresentar todas as classificações de todos os módulos
0 - Terminar
A matriz deve ser inicializada com valor 0 em todas as posições. Quando um
aluno tiver reprovado num dado módulo, na matriz vai ser guardado o valor 0.
*******************************************************************************/
#include <iostream>

using namespace std;

int main(){
    int y, p, e, m[7][13]= {0,0,0,0,0,0,0,0,0,0,0,0,0};
    while(e != 1) {
    cout<<"1 - Inserir a classificação de um aluno num dado módulo\n";
    cout<<"2 - Inserir todas as classificações do aluno\n";
    cout<<"3 - Inserir todas as classificações num dado módulo\n";
    cout<<"4 - Calcular a média de um dado aluno\n";
    cout<<"5 - Calcular a média de um dado módulo\n";
    cout<<"6 - Determinar melhor aluno num dado módulo\n";
    cout<<"7 - Apresentar classificações de um dado aluno\n";
    cout<<"8 - Apresentar as classificações obtidas pelos alunos num dado módulo\n";
    cout<<"9 - Apresentar todas as classificações de todos os módulos\n";
    cout<<"0 - Terminar\n";
    cin>>p;
    
        switch (p)
        {
        case 1:
        cout<<"O numero dos alunos: ";
            for(int i = 0; i < 8; i++){
                for (int j = 0; j < 13; j++){
                    cout<<"\n->";
                    cin>>y;
                    m[i][j] = y;
                }
                for(int i = 0; i < 7; i++){
                    for(int j = 0; j < 13; j++){
                        cout<<m[i][j]<<"   ";
                        
                    }
                    cout<<endl;
                }
            }
            break;
        case 3:
            cout<<"hello world";
            break;
        case 4:
            cout<<"hello world";
            break;
        case 5:
            cout<<"hello world";
            break;
        case 6:
            cout<<"hello world";
            break;             
        case 7:
            cout<<"hello world";
            break;
        case 8:
            cout<<"hello world";
            break;
        case 9:
            cout<<"hello world";
            break;
        case 0:
            e = 1;
            break;          
        default:
            cout<<"Pls try again.";
            break;
        }
    }
}
