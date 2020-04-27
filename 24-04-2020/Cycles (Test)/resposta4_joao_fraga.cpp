#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main(){
    
    string nome;
    int idade;
    char input = 'z';

    cout << "Insira o seu nome:" << endl;
    getline(cin, nome);
    cout << "Insira a sua idade: " << endl;
    cin >> idade; cin.ignore();

    if(idade > 18){

        while(input == 'z'){
            cout << "A- Lamborghini" << endl;
            cout << "B- Ferrari" << endl;
            cout << "C- Fiat" << endl;

            input = getch();

            switch(input){

                case 'a':
                    cout << "estas a sonhar" << endl;
                    break;
                case 'b':
                    cout << "continua a sonhar" << endl;
                    break;
                case 'c':
                    cout << "Excelente escolha" << endl;
                    break;
                default:
                    input = 'z';
                    break;

            }

        }

    }
}