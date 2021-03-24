#include <iostream>

using namespace std;

int main()
{

    string nome;

    cout << "Insira o seu nome: " << endl;
    
    getline(cin, nome);

    for (int i = 0; i != 4; i++)
    {
        cout << nome[i];
    }

    cout << endl;

}
