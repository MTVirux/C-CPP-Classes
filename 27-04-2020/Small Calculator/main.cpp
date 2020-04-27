#include <iostream>
#include <conio.h>

using namespace std;


float somar(int a, int b, int c){
    return (float) a+b+c;
}

float subtrair(int a, int b, int c){
    return (float)a-b-c;
}

float multiplicar (int a, int b){
    return (float) a*b;
}

float dividir (int a, int b){
    return (float) a/b;
}

int main(){

    float numeros[3];
    int menu;

    cout << "1- Somar" << endl;
    cout << "2- Subtrair" << endl;
    cout << "3- Multiplicar" << endl;
    cout << "4- Dividir" << endl;
    cout << "5- Sair" << endl;

    cin >> menu; cin.ignore();

    switch(menu){

        case 1:
        case 2:
            cout << "Insira o primeiro numero" << endl;
            cin >> numeros[0]; cin.ignore();
            cout << "Insira o segundo numero" << endl;
            cin >> numeros[1]; cin.ignore();
            cout << "Insira o terceiro numero" << endl;
            cin >> numeros[2]; cin.ignore();
            switch (menu){
                case 1:
                    cout << "Resultado: " << somar(numeros[0], numeros[1], numeros[2]) << endl;
                    break;
                case 2:
                    cout << "Resultado: " << subtrair(numeros[0], numeros[1], numeros[2]) << endl;
                    break;
            }
            break;

        case 3:
        case 4:
            cout << "Insira o primeiro numero" << endl;
            cin >> numeros[0]; cin.ignore();
            cout << "Insira o segundo numero" << endl;
            cin >> numeros[1]; cin.ignore();
            switch (menu){
                case 3:
                    cout << "Resultado: " << multiplicar(numeros[0], numeros[1]) << endl;
                    break;
                case 4:
                    cout << "Resultado: " << dividir(numeros[0], numeros[1]) << endl;
                    break;
            }
            break;

        case 5:
            break;

    }
    

}