#include <iostream>

using namespace std;

void troca( int * num1, int * num2){

    int temp = *num1;
    *num1 = *num2; 
    *num2 = temp;

    return;

}

int main(){


    int num1;
    int num2;

    cout << "Insira o primeiro numero: " << endl;
    cin >> num1; cin.ignore();
    cout << "Insira o segundo numero: " << endl;
    cin >> num2; cin.ignore();

    cout << "Antes: "   << num1<< ", " << num2 << endl;
    troca( &num1, &num2);
    cout << "Depois: " << num1 << ", " << num2 << endl;
}