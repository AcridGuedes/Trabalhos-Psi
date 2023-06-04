/**********************************************************************************************************
 Crie um programa que seja capaz de criar dois ficheiros, relativos a um clube de futebol:
 - um ficheiro de texto com os nomes das posições possíveis num plantel(Guarda Redes, defesa centrar,
 Defesa Esquerdo, Defesa Direito, médio, extremo, ext.)
 - um ficheiro binário com os dados de cada jogador do plantel:
    . nº da camisola -inteiro
    . nome - vetor de 20 chars (char nome[20];)
    . codposição - inteiro - corresponde ao nº linha que contém nome da posição do jogador (ex: para Diogo
      Costa, codposicao=1, pois 1ª linha do ficheiro de texto tem a posição "Guarda Redes").
    . numgolos - inteiro
    . numamarelos - inteiro
    . numvermelhos - inteiro

O programa deverá ter um menu com as operações 1-acrescentar jogador; 2-listar todos os jogadores; 3- Listar
um jogador(pelo nº da camisola).
***********************************************************************************************************/
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

struct player{
    char name[30];
    int num;
    int codpos;
    int goals;
    int red;
    int yellow;
};

int main(){
ofstream bw;
ifstream br;
player info[25];
if(bw || br){
int opt = -1, n, x, i;
    while(opt != 0){
        cout<<"\n|-----------------------------|\n";
        cout<<"1 - Add Player\n";
        cout<<"2 - List Player by Number\n";
        cout<<"3 - List all Players\n";
        cout<<"0 - Leave\n";
        cout<<"|-----------------------------|\n> ";
        cin>>opt;
        if(opt >= 0 && opt <= 3){
            switch (opt)
            {
            case 1:
                bw.open("team.bin", ios::binary | ios::app);
                cout<<"How many players do you want to add?\n>";
                    cin>>n;
                for(i = x; i < n; i++){
                    cout<<"\nPlayer nº "<<i + 1<<endl;
                    cout<<"Name: ";
                    cin.ignore();
                    cin.getline(info[i].name, 30);
                    cout<<"\nNum: ";
                    cin>> info[i].num;
                    cout<<"\nPosition Code: ";
                    cin>>info[i].codpos;
                    cout<<"\nGoals: ";
                    cin>> info[i].goals;
                    cout<<"\nRed Cards: ";
                    cin>> info[i].red;
                    cout<<"\nYellow Cards: ";
                    cin>> info[i].yellow;
                    bw.write((char*) &info[i], sizeof(player));
                    x = i;  
                }
                bw.close();
                break;
            case 2:
                br.open("team.bin", ios::binary);
                cout<<"Number of the Player you are looking for: ";
    	        cin>>n;
               for(int i = 0; i < sizeof(br); i++){
                    br.read((char *) &info[i], sizeof(player));
                    if(info[i].num == n){
                        cout<<"\nName: "<<info[i].name;
                        cout<<"\nNumber: "<<info[i].num;
                        cout<<"\nPosition: "<<info[i].codpos;
                        cout<<"\nGoals: "<<info[i].goals;
                        cout<<"\nRed Cards: "<<info[i].red;
                        cout<<"\nYellow Cards: "<<info[i].yellow;
                        break;
                    }else{
                        cout<<info[i].num<<endl;
                    }
               } 
               br.close();
                break;
            case 3:
            br.open("team.bin", ios::binary);
            for(int i = 0; i < sizeof(br); i++){
             br.read((char *) &info[i], sizeof(player));
                        cout<<"\n|--------------------------|";
                        cout<<"\nName: "<<info[i].name;
                        cout<<"\nNumber: "<<info[i].num;
                        cout<<"\nPosition: "<<info[i].codpos;
                        cout<<"\nGoals: "<<info[i].goals;
                        cout<<"\nRed Cards: "<<info[i].red;
                        cout<<"\nYellow Cards: "<<info[i].yellow;
                        }
                        cout<<"\n|--------------------------|\n";
                    br.close();
                 break;
            case 0:
                return 0;
                break;
            default:
                break;
            }
        }else{
            cout<<"The number given does not correspond to any choice.\nPlease try again!";
        }
    }
    }else{
        cout<<"File did not open correctly!";
        return 1;
    }
    return 0;
}
