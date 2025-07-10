#include <iostream>
#include <string>
using namespace std;

//Professor e o seguinte a demostracao entre int e float e que quando trocar os valores o float recebe int so que int nao recebe float logo ele corta as casas decimais

void troca(int *pt, float *pt2){
    float tr;
    tr = *pt;
    *pt = *pt2;
    *pt2 = tr;
    cout << "Os valores trocados " << *pt << " " << *pt2;
}    


int main()
{
    int n1;
    float n2; 
    cout << "Informe um valor inteiro e outro real: ";
    cin >> n1 >> n2;
    int *ptr1 = &n1;
    float *ptr2 = &n2;
    troca(ptr1, ptr2);

    return 0
}
