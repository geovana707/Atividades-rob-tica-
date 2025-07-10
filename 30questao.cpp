
#include <iostream>
using namespace std;

// Passagem por valor
void exibirValor(int x) {
    std::cout << "Valor recebido por valor: " << x << "\n";
}

// Passagem por referência
void dobrarPorReferencia(int &x) {
    x *= 2;
}

// Ponteiros
void inverterSinal(int* ptr) {
    *ptr = -*ptr;
}

int main() {
    int a = 10;
    int b = 5;

    cout << "Valor original de a: " << a << "\n";
    exibirValor(a); // por valor

    dobrarPorReferencia(a); // por referência
    cout << "Valor de a após dobrarPorReferencia: " << a << "\n";

    inverterSinal(&b); // por ponteiro
    cout << "Valor de b após inverterSinal: " << b << "\n";

    return 0; 
}
