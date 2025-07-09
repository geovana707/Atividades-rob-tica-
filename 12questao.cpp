#include <iostream>
using namespace std;

  void  pont (int num){
        cout << "O dobro do numero: " << num *2 << endl;
    }

int main() {
    int num1;
    int *ptr = &num1;
    
    cout<<"informe um valor: "<<endl;
    cin>>num1;
    
    pont(*ptr);
    return 0;
}
