#include <iostream>

using namespace std;

int main(){

    const int constante = 15;
    int num1;
    int num2;

    cout << "Insira o 1o numero:" << endl;
    cin >> num1;cin.ignore();

    cout << "Insira o 2o numero" << endl;
    cin >> num2; cin.ignore();

    if (num1 > num2 && num1> constante){

        cout << num1 << " e maior que " << num2 << " e " << constante << endl;


    }else if (num2 > num1 && num2 > constante){

        cout << num2 << " e maior que " << num1 << " e " << constante << endl;

    }else if(constante > num2 && constante > num1){

        cout << constante << "e maior que " << num1 << " e " << num2 << endl;

    }


}