#include <iostream>

using namespace std;

int main()
{

    string nome;

    cout << "Insira o seu nome: " << endl;
    
    getline(cin, nome);

    for (int i = 0; i != 10; i++)
    {
        cout << i+1 << " - " << nome << endl;
    }

    cout << endl;

}
