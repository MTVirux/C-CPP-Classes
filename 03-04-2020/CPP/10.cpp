#include <iostream>
#include <string>

using namespace std;

int main()
{

    string nome;

    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;

    int count = 0;

    cout << "Insira o seu nome: " << endl;
    getline(cin, nome);

    for (int i = 0; i != nome.length(); i++){
        char letra = nome[i];

        switch(nome[i])
        {
            case 'a':
            case 'A':
                a++;
                break;
            default:
                break;
        }
    }
    cout << "Numeros de letras:" << endl;
    cout << "A: " << a << endl;

}