// Example program
#include <iostream>
#include <string>
using namespace std;



int main()
{
  int num1;
  int num2;
  cout << "Digite dois valores inteiros: ";
  cin >> num1 >> num2;
  int *ptr1 = &num1;
  int *ptr2 = &num2;
  *ptr1 = 20;
  *ptr2 = 400;
  cout << "Os valores trocado: " << num1 << " o segundo  " << num2 << endl;
}
