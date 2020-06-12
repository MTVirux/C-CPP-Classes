#include <iostream>
#include <string>

using namespace std;

int main(){

    struct cidadao{
        
        string nome;
        int idade;
        int contribuinte;
        string data_de_nascimento;

    }

    struct cidadao cidadao1;

    cout << "Insira o nome:" << endl;
    getline(cin, cidadao1.nome);

    cout << "Insira a idade: " << endl;
    cin >> cidadao1.idade; cin.ignore();


    cout << "Insira o contribuinte" << endl;
    cin >> cidadao1.contribuinte; cin.ignore();


    cout << "Insira a data de nascimento (dd-mm-aaaa)" << endl;
    getline(cin, cidadao1.data_de_nascimento);


    cout << "Nome: " << cidadao1.nome << endl;
    cout << "Idade: " << cidadao1.idade << endl;
    cout << "Contribuinte: " << cidadao1.contribuinte<< endl;
    cout << "Data de Nascimento: " << cidadao1.data_de_nascimento << endl;
}