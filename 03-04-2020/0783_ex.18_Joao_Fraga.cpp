#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){

    string linha;
    int numero = 0;

    while(numero > 10 || numero < 1 || numero % 2 == 0){
    cout << "Insira qual o numero impar que deseja (entre 1 e 10)" << endl;
    cin >> numero;
    }

    cout << "--------------------------------"<< endl;


    for (int i = 1; i <= numero; i++ ){

        linha.append(to_string(i));
        linha.append(" ");

    }

    cout << linha << endl;

    for (int i = 0; i < floor(numero/2); i++){
    
        linha[i*2] = ' ';
        linha[i*2+1] = ' ';
        linha.pop_back();
        linha.pop_back();
        cout << linha << endl;


    }

    

}