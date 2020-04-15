#include <iostream>
#include <math.h>

using namespace std;

int main(){


    int primeiro;
    int segundo;

    cout << "Insira o primeiro numero: "  << endl;
    cin >> primeiro; cin.ignore();

    cout << "Insira o segundo numero: " << endl;
    cin >> segundo; cin.ignore();

    cout << "Soma: "<< primeiro + segundo << endl;
    cout << "Produto do primeiro pelo quadrado do segundo: " << primeiro * pow(segundo,2) << endl;
    cout << "O quadrado do primeiro: " << pow(primeiro, 2) << endl;
    cout << "Raiz quadrada da soma dos quadrados: " << sqrt( pow(primeiro,2) + pow(segundo,2) ) << endl;
    cout << "Seno da diferença do primeiro pelo segundo: " << sin(primeiro-segundo) << endl;
}