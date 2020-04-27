#include <iostream>

using namespace std;

int main()
{

    string nome;
    string endereco;
    string telefone;

    cout << "Insira o seu nome: " << endl;
    getline(cin, nome);

    cout << "Insira o seu endereco: " << endl;
    getline (cin, endereco);

    cout << "Insira o seu numero de telefone" << endl;
    getline (cin, telefone);

    cout << endl << endl << endl;

    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl;
    cout << "Telefone: " << telefone << endl;

}
