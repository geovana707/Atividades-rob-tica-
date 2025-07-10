
#include <iostream>
#include <string>
using namespace std;

void consulta(int *co){
    cout << "O saldo na sua conta e: " << *co << endl;
}

void  saque(int *sa){
    int s;
    const int sal = *sa;
    cout << "Informe o valor a ser sacado: ";
    cin >> s;
    if (s < sal){
        *sa = *sa - s;
        cout << "O saque realizado foi de: " << s << endl;
    }else{
        cout << "Operacao invalida \n" << endl;
    }
    consulta(sa);
}

void deposito(int *d){
    int des;
    const int veri = 50000;
    cout << "Qual sera o valor a ser depositado: ";
    cin >> des;
    if (des < veri){
        *d = *d + des;
        cout << "O valor depositado foi: " << des << endl;
    } else{
        cout << "Valor invalido \n";
    }
    consulta(d);
}


int main()
{
    int saldo = 10000;
    int val;
    cout << "O que voce desja fazer na sua conta \n 1.Saque \n 2.Deposito \n 3.Consulta de saldo \n :";
    cin >> val;
    if (val == 1){
    saque(&saldo);
    }else if(val == 2){
        deposito(&saldo);
    }else if(val == 3){
        consulta(&saldo);
    }
}
