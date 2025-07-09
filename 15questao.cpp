// Example program
#include <iostream>
#include <string>
using namespace std;

void teste(float *n){
    if (*n >= 7 ){
        cout  << "Aprovado" << endl;
    }else{
        cout << "Reprovado" << endl;
    }
}

int main()
{
  float nota ;
  cout << "Informe sua nota: ";
  cin >> nota;
  teste(&nota);
}
