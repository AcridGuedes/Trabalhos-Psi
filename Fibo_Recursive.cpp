#include <iostream>

using namespace std;

#include <iostream>
using namespace std;
int fibo(int x) {
    if(x==0||x==1) return 1;
    else return fibo(x-1)+fibo(x-2);
}
int main() {
    int n;
    cout<<"Introduza o n do termo que quer calcular: ";
    cin >> n;
    cout<< "O valor do termo e " <<fibo(n)<<endl;
    return 0;
}
