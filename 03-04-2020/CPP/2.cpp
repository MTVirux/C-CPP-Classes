#include <iostream>
#include <string>

using namespace std;

int main()
{

    string nome;

    cout << "Insira o seu nome: " << endl;
    getline(cin,nome);
    cin.ignore();

    for (int i = 0; i < nome.length() ; i= i+2)
    {
        cout << nome[i];
    }
    
    cout << endl;

}
