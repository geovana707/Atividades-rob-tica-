// Example program
#include <iostream>
#include <string>
using namespace std;

float media(float num1, float num2, float  num3){
    float med = (num1 + num2 + num3) / 3;
    return med;
}

int main()
{
    float n1;
    float n2;
    float n3;
    cout << "digite o valor das suas tres notas: ";
    cin >> n1 >> n2 >> n3;
    int res = media(n1, n2, n3);
    cout << "A sua media e: " << res << endl;
}
