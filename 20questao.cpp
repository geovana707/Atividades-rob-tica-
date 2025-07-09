// Example program
#include <iostream>
#include <string>
using namespace std;

void test(std:: string name, float n){
    if (n >= 7){
      cout << "Seu nome e " << name << " e sua nota foi " << n << " Com isso Aprovado" << endl;
    } else{
      cout << "Seu nome e " << name << " e sua nota foi " << n << " Com isso Reprovado" << endl;
    }
}

int main()
{
    std:: string nome;
    float nota;
    cout << "Informe seu nome e sua nota: ";
    cin >> nome >> nota;
    test(nome, nota);
}
