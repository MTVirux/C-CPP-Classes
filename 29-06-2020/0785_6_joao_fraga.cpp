#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

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
        ficheiro.close();

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
        cout << "Insira o seu nome: " << endl;
        getline(cin, nome);
        cout << "Insira a sua idade: " << endl; 
        cin >> idade; cin.ignore();
        ficheiro << nome << "\n" << idade << "\n";
        ficheiro.close();

    }else{
        cout << "Este ficheiro nao pude ser aberto" << endl;
    }

}

void nome(string nome_do_ficheiro){

    ifstream ficheiro;
    string nome;
    int idade;
    ficheiro.open(nome_do_ficheiro);
    if(ficheiro.is_open()){
        
        getline(ficheiro, nome);
        cout << nome << "umas boas ferias" << endl;
        ficheiro.close();

    }else{
        cout << "Este ficheiro não pude ser aberto" << endl;
    }

}

int main(int argc, char *argv[]) {
     
    string nome_do_ficheiro = "test.txt";
    if(strcmp(argv[1], "Leitura") == 0){

        ler(nome_do_ficheiro);

    }else if(strcmp(argv[1], "Escrita") == 0){

        escrever(nome_do_ficheiro);

    }else if(strcmp(argv[1], "Nome") == 0){

        nome(nome_do_ficheiro);

    }else{

        cout << "Parametro '" << argv[1] << "' invalido. Por favor use 'Leitura', 'Escrita' ou 'Nome' como parametro" << endl;

    }

}