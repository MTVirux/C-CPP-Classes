#include <iostream>

using namespace std;

int main(){

    int array[20];
    int soma_impares = 0;
    int soma_pares = 0;
    int valor;

    cout << "Insira 20 valores: " << endl;

    for (int i = 0; i < 20 ; i++){
        cin >> array[i]; cin.ignore();
    }

    for (int i : array){
        if(i % 2 == 1)
            soma_impares = soma_impares + i;
    }

    for (int i : array){
        if(i % 2 == 0)
            soma_pares = soma_pares +i;
    }

    valor = soma_impares - soma_pares;

    if(valor > 0)
        cout << "Valor:" << valor << endl;

    if(soma_impares - soma_pares < 0)
        cout << "Valor abaixo de 0"  << endl;

    if(soma_impares - soma_pares == 0)
        cout << "JACKPOT, vais receber mais um valor" << endl;
}