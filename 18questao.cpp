// Example program
#include <iostream>
#include <string>
using namespace std;

void incremento(int *num1, int *inc){
    *num1 = *num1 + *inc;
    cout << "O numero com incremento fica: " << *num1 << endl;
}

int main()
{
   int val;
   int incre;
   cout << "Digite o valor do numero e do incremento a ser colocado nele: ";
   cin >> val >> incre;
   incremento(&val, &incre);

}


