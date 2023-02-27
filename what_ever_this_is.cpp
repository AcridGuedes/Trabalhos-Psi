#include <iostream>

using namespace std;

int main()
{
    int opcao = -1, c = 0, fim = 1, b = 0, k;
    string nomes[10] ={"batata"}, add;
    while(fim == 0)
    {
        for(auto i: nomes)
        {
            if(i.empty())
            {
                c++;
            }
            cout<<c;
        }
        cout<<"Escolha!";
        cout<<"Tamanho da string = 10\nEspaço disponivel "<<c<<".";
        cout<<"\n1 - Acrescentar um nome a String.\n";
        cout<<"2 - Retirar o ultimo nome da String.\n";
        cout<<"3 - Mostrar nomes guardados na String.\n";
        cout<<"4 - Procurar um nome na String.\n";
        cout<<"0 - Terminar.\n";
        cin>>opcao;
        switch (opcao)
        {
        case 1:
            if(c>0)
            {
                cin>>add;
                nomes[10-c]=add;
            }else
            {
                cout<<"No space in the Array!";
                break;
            }
            break;
        case 2:
            nomes[10-c-1];
            break;
        case 3:
            for(int i = 0;i<c;i++)
            {
                cout<<nomes[i];
            }
            break;
        case 4:
            int count = 0, i = 0;
            string search;
            if(c==0)
            {
                cout<<"The array is empty"; 
            }else
            {
                cout<<"Introduza um nome para procurar: ";
                while(search!=nomes[i]&& i<c)
                {
                    i++;
                    if(i<c)
                    {
                        cout<<"O nome foi encontrado na posição ,"<<i<<"!";
                    }else
                    {
                        cout<<"O nome não foi encontrado na Array.";
                    }
                }
            }
            break;
        case 0:
            fim = 1;
            break;
        }
    }
}
