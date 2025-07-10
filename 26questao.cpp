#include <iostream>
#include <string>
using namespace std;

int soma(int e1, int e2){
    int s = e1 + e2;
    return s;
}

int sub (int s1, int s2){
    int su = s1 - s2;
    return su;
}

int multi(int m1, int m2){
    int m = m1 * m2;
    return m;
}

int divi(int d1, int d2){
    double d = d1 / d2;
    return d;
}

void  menu(int num1, int num2){
    int elem;
    double res;
    cout << "Qual operacao voce desja realizar: \n" << "Digite 1 para Soma \n" << "Digite 2 para subtracao \n" << "Digte 3 pra multiplicacao \n" << "Digite 4 pra divisao \n :" ;
    cin >> elem;
    if (elem == 1){
       int res = soma(num1, num2);
       cout << res << endl;
    } else if (elem == 2){
       int res = sub(num1, num2);
       cout << res << endl;
    }else if (elem == 3){
       int res = multi(num1, num2);
       cout << res << endl;
    }else if (elem == 4){
       int res = divi(num1, num2);
       cout << res << endl;
    }
}


int main()
{
    int n1;
    int n2;
    cout << "informe dois numeros inteiros: ";
    cin >> n1 >> n2;
    menu(n1, n2);
    return 0;
}
