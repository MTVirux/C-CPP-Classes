#include <iostream>

using namespace std;

int main(){

    struct pessoas{

        string nome;
        float nota1;
        float nota2;
        float nota3;
        float nota_final;

    };

    struct pessoas pessoa;

    cout << "Insira o seu nome: " << endl;
    getline(cin, pessoa.nome);
    cout << "Insira a sua nota 1: " << endl;
    cin >> pessoa.nota1;cin.ignore();
    cout << "Insira a sua nota 2: " << endl;
    cin >> pessoa.nota2;cin.ignore();
    cout << "Insira a sua nota 3: " << endl;
    cin >> pessoa.nota3;cin.ignore();

    pessoa.nota_final = pessoa.nota1*0.3 + pessoa.nota2*0.45 + pessoa.nota3*0.25;

    cout << "--------------------" << endl;
    cout << "Nome: " << pessoa.nome << endl;
    cout << "Nota 1: " << pessoa.nota1 << endl;
    cout << "Nota 2: " << pessoa.nota2 << endl;
    cout << "Nota 3: " << pessoa.nota3 << endl;
    cout << "Nota Final: " << pessoa.nota_final << endl;
    

}