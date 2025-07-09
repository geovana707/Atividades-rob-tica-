// Example program
#include <iostream>
#include <string>
using namespace std;

void troca(int &num1, int &num2){
    int muda = num1;
    num1 = num2;
    num2 = muda;
    cout << "os valores trocados: " << num1 << " O segundo "  << num2 << endl;
}

int main()
{
    int a;
    int b;
    cout << "Digite dois valores interios: ";
    cin >> a >> b;
    troca(a, b);

}
