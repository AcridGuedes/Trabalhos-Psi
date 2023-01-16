#include <iostream>
#include <cmath>

using namespace std;

void formulaResolvente(float a, float b, float c)
{
    float x1,x2;
    x1=(-b+sqrt(pow(b,2)-4*a*c)) / (2*a);
    x2=(-b-sqrt(pow(b,2)-4*a*c)) / (2*a);
    cout<< "x1=" << x1 <<endl<< "x2=" << x2; 
}

int main() {
    float a,b,c;
    cout<<"ax^2=";
    cin>>a;
    cout<<endl;
    cout<<"bx=";
    cin>>b;
    cout<<endl;
    cout<<"cx=";
    cin>>c;
    formulaResolvente(a,b,c);
}
