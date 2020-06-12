#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

//Parameter 1: File_name
//Parameter 2: 'ler' for read 'escrever' for write

void ler(string nome_do_ficheiro){

    ifstream ficheiro;
    string line;
    string nome;
    int idade;
    ficheiro.open(nome_do_ficheiro);
    if(ficheiro.is_open()){
        
        getline(ficheiro, nome);
        getline(ficheiro, line);
        idade = stoi(line);
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;

    }else{
        cout << "Este ficheiro não pude ser aberto" << endl;
    }

}

void escrever(string nome_do_ficheiro){

    ofstream ficheiro;
    string nome;
    int idade;
    ficheiro.open(nome_do_ficheiro, ios::trunc);
    if(ficheiro.is_open()){
        cout << "Insira um nome: " << endl;
        getline(cin, nome);
        cout << "Insira uma idade: " << endl;
        cin >> idade; cin.ignore();
        ficheiro << nome << "\n" << idade << "\n";

    }else{
        cout << "Este ficheiro nao pude ser aberto" << endl;
    }

}

int main(int argc, char *argv[]) {
     
    string nome_do_ficheiro = argv[1];
    cout << nome_do_ficheiro << endl;
    if(strcmp(argv[2], "ler") == 0){

        ler(nome_do_ficheiro);

    }else if(strcmp(argv[2], "escrever") == 0){

        escrever(nome_do_ficheiro);

    }else{

        cout << "Parametro '" << argv[2] << "' invalido. Por favor use 'ler' ou 'escrever' como segundo parametro" << endl;

    }

}