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

    for (int i = nome.length(); i != -1; i--){
        cout << nome[i] << endl;
    }
    cout << "Numeros de letras:" << endl;
    cout << "A: " << a << endl;

}