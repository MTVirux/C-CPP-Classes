#include <iostream>
#include <string>

using namespace std;

int main()
{

    string nome;

    int a = 0;

    int count = 0;

    cout << "Insira o seu nome: " << endl;
    getline(cin, nome);

    for (int i = 0; i != nome.length(); i++)
    {
        if(nome[i] != ' ')
            cout << nome << endl;
    }

    cout << endl;
}