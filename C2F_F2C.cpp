//Elabore um programa que tenha duas funçoes, c2f(...) e f2c(...), que sejam caoazs de:
//-c2f(temp) - converte uma temperatura em fahrenheit para graus Celcius pela formúla C=5/9
#include "main.h"
#include <iostream>

using namespace std;
float c2f(float temp)
{
    return temp*9/5+32;
}

float f2c(float temp)
{
    return (temp-32)*5/9;
}

int main() 
{
 float temp;
    int opcao=-1;
    while(opcao!=0)
    {
        cout<<"1 - Converter C2F\n";
        cout<<"2 - Converter F2C\n";
        cout<<"0 - Terminar\n";
        cout<<"Intoduza a sua opcao:";
        cin>>opcao;
        switch(opcao)
        {
        case 1:
            cout<<"Qual a temperatura em graus Celsius:";
            cin>>temp;
            cout<<"A temperatura em Fahrenheit é "<<c2f(temp);
        break;
        case 2:
            cout<<"Qual a temperatura em graus Fahrenheit:";
            cin>>temp;
            cout<<"A temperatura em Celcius é "<<f2c(temp);
        break;    
            
        }
    }
}
