#include <iostream>

using namespace std;

int main(){

    float num1;
    float num2;
    float * ptr1 = &num1;
    float * ptr2 = &num2;
    
    cout << "Insira o primeiro numero:"<< endl;
    cin >> num1; cin.ignore();

    num2 = num1 -1;

    while (num2 < num1){
        cout << "Insira o segundo numero:"<< endl;
        cin >> num2; cin.ignore();

        if(num2 < num1)
            cout << "O segundo numero tera de ser maior que o primeiro\n\n" << endl;
    }

    cout << "Soma: " << *ptr1 + *ptr2 << endl;
    cout << "Subtracao: " << *ptr1 - *ptr2 << endl;
    cout << "Multiplicacao: " << *ptr1 * *ptr2 << endl;
    cout << "Divisao: " << *ptr1 / *ptr2 << endl;

}