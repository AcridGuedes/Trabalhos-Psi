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

int menu() {
    int op;
    cout << "1 - Inserir a classificação de um aluno num dado modulo\n";
    cout << "2 - Inserir todas as classificações do aluno\n";
    cout << "3 - Inserir todas as classificações num dado modulo\n";
    cout << "4 - Calcular a media de um dado aluno\n";
    cout << "5 - Calcular a media de um dado modulo\n";
    cout << "6 - Determinar melhor aluno num dado modulo\n";
    cout << "7 - Apresentar classificacoes de um dado aluno\n";
    cout << "8 - Apresentar as classificações obtidas pelos alunos num dado modulo\n";
    cout << "9 - Apresentar todas as classificações de todos os modulos\n";
    cout << "0 - Terminar\n";
    cout << "Introuduza a opção\n";
    cin >> op;
    return op;
}
int main(){

    int  cl[13][7] = { 0,0,0,0,0,0,0,0,0,0,0,0,0 }, i, j, aluno, modulo, nota, opcao= -1, max = -99999;
    while (opcao != 0) {
        opcao = menu();
        switch (opcao) {
        case 1:
            cout << "Qual o número do aluno?";
            cin >> aluno;
            cout << "Qual o modulo?";
            cin >> modulo;
            cout << "Qual a classificação obtida?";
            cin >> nota;
            if (nota >= 0 && nota <= 20 && aluno >= 1 && aluno <= 13 && modulo >= 1 && modulo <= 7) {
                if (nota < 10) nota = 0;
                cl[aluno - 1][modulo - 1] = nota;
            }
            break;

        case 2:
            cout << "Qual o numero do aluno da turma?";
            cin >> aluno;
            for (i = 0; i < 7; i++) {
                cout << "Qual a classificaçao obitda no modulo" << i + 1 << "?";
                    if (nota < 10) nota = 0;
                cl[aluno - 1][i] = nota;
            }
            break;

        case 3:
            cout << "Qual é o modulo";
            cin >> modulo;
            for (i = 0; i < 13; i++) {
                cout << "Qual a classificacao obtida pelo o aluno N" << i + 1 << "?";
                cin >> nota;
                if (nota < 10) nota = 0;
                cl[i][modulo - 1] = nota;

            }
            break;
        case 4:
            cout<<"Qual é o aluno: ";
            cin>>aluno;
            modulo = 7; 
            for (i = 0; i < 7; i++){
              nota += cl[aluno-1][i];
              if(i != 0){
                j++;
              }
              nota = nota/j;
              cout<<"A média do aluno é "<<nota;
            }
            break;
        case 5:
            cout<<"Qual é o numero do modulo: ";
            cin>>modulo;
            for(i = 0; i < 13; i++){
              nota += cl[i][modulo-1];
            if(i != 0){
                j++;
              }
            }
            nota /= j;
            cout<<"A media do modulo é "<<nota;
            break;
        case 6:
          	  cout<<"O numero do modulo: ";
              cin>>modulo;
              for(i = 0; i < 13; i++){
                if(cl[i][modulo-1] > max){
                  max = cl[i][modulo-1];
                  aluno = cl[i+1][modulo-1];
                }
              }
              cout<<"O melhor aluno no dado modulo é o número, "<<aluno<<" , com a nota de, "<<nota;
            break;
          

        case 7:
            cout << "Qual o numero do aluno da turma?";
            cin >> aluno;
            for (i = 0; i < 7; i++) {
                cout << "Modulo" << i + i << ":";
                if (cl[aluno - 1][i]) cout << "Modulo nao realizado\n";
                else cout << cl[aluno - 1][i] << endl;
            }
            break;
        case 8:
            cout << "Qual é o modulo";
            cin >> modulo;
            for (i = 0; i < 13; i++) {
                cout << "Aluno N" << i + 1;
                cin >> nota;
                if (cl[i][modulo - 1] < 10) cout << "Modulo nao realizado\n";
                else cout << cl[i][modulo - 1] << endl;
            }
            break;

        case 9:
            for (i = 0; i <= 13; i++) {
                for (j = 0; j < 7; j++) {
                    cout.width(2);
                    cout << cl[i][j] << "  ";

                }
                cout << endl;
            }
            break;
        case 0:
            opcao=0;
            //I love this case short and simple <3
            break;


        }
    }
    return 0;
}
