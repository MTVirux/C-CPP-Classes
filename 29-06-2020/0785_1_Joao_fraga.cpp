#include <iostream>

using namespace std;

int main(){

    struct pessoas{

        string nome;
        string morada;
        int idade;
        string data_de_nascimento;

    };

    struct pessoas pessoa;

    cout << "Insira o seu nome: " << endl;
    getline(cin, pessoa.nome);
    cout << "Insira a sua morada: " << endl;
    getline (cin, pessoa.morada);
    cout << "Insira a sua idade: " << endl;
    cin >> pessoa.idade; cin.ignore();
    cout << "Insira a sua data de nascimento (dd-mm-aaaa): " << endl;
    getline(cin, pessoa.data_de_nascimento);

    cout << "--------------------" << endl;
    cout << "Nome: " << pessoa.nome << endl;
    cout << "Morada: " << pessoa.morada << endl;
    cout << "Idade: " << pessoa.idade << endl;
    cout << "Data de Nascimento: " << pessoa.data_de_nascimento << endl;

}