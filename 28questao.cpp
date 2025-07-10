#include <iostream>
#include <string>
using namespace std;

void dados(std:: string *pes, int quant){
    cout << "O seu nome e: " << pes[0] << " a sua idade e " << pes[1] << " a sua altura e " << pes[2] << endl;
}


int main()
{
    std:: string pessoa[3] = {"Ana", "16", "1.65"};
    dados(pessoa, 3);

    return 0;
}
