
#include <iostream>
using namespace std;

// Função que recebe um ponteiro para vetor de inteiros
void exibirVetor(int* vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << "Elemento " << i << ": " << *(vetor + i) << endl;
    }
}

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    // Passa o endereço do primeiro elemento (ou só o nome do vetor)
    exibirVetor(numeros, 5);

    return 0;
}
