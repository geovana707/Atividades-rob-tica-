#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr;    
    ptr = &a;
    
    cout<< " Valor da variavel: "<<a <<endl;
    cout<<" Endereço da variavel: "<<ptr <<endl;
    return 0;
}

