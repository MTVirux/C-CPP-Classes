#include <iostream>
#include <string>

using namespace std;

int main()
{

    string nome;

    int a = 0;

    int count = 0;

    cout << "Insira o seu nome: " << endl;
    cin >> nome;
    cin.ignore();

    for (int i = 0; i != nome.length(); i++)
    {
        cout << nome;
    }

    cout << endl;
}