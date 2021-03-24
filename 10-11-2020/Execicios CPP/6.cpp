#include <iostream>
#include <string>

using namespace std;

int main()
{

    string nome;
    string sexo;
    int idade;

    cout << "Insira o seu nome: " << endl;
    getline(cin, nome);

    cout << "Insira o seu endereco: " << endl;
    getline (cin, sexo);

    cout << "Insira o seu numero de telefone" << endl;
    cin >> idade;
    cin.ignore();

    if(sexo == "feminino" && idade < 25)
    {
        cout << "ACEITA" << endl;
    } 
    else 
    {
        cout << "NAO ACEITA" << endl;
    }

}
