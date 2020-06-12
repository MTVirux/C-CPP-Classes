#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int main(){

    struct alunos {

        int id;
        string nome;
        int idade;
        int telefone;
        double media_notas;
    };

    struct alunos aluno[999];

    size_t temp_pos; // size_t para encontrar a virgula entre id e nome
    string line; // linha do ficheiro a ser lida
    string temp_substring; // substring seleção de parametros especificos
    int i = 0; // Index para a lista de clientes na memoria


    ifstream db;
    db.open("dados.txt");
    if(db.is_open()){

        while(getline(db, line)){
            
            //ID
            temp_pos = line.find("|");
            aluno[i].id = stoi(line.substr(0,temp_pos));
            line = line.substr(temp_pos + 1);

            //NOME
            temp_pos = line.find("|");
            aluno[i].nome = line.substr(0,temp_pos);
            line = line.substr(temp_pos+1);

            //IDADE
            temp_pos = line.find("|");
            aluno[i].idade = stoi(line.substr(0,temp_pos));
            line = line.substr(temp_pos+1);

            //TELEFONE
            temp_pos = line.find("|");
            aluno[i].telefone = stoi(line.substr(0,temp_pos));
            line = line.substr(temp_pos+1);

            //MEDIA
            temp_pos = line.find("\n");
            aluno[i].media_notas = stof(line.substr(0,temp_pos));

        }


    }

    cout << "ID: " << aluno[0].id << endl;
    cout << "Nome:" << aluno[0].nome << endl;
    cout << "Idade: " << aluno[0].idade << endl;
    cout << "Telefone: " << aluno[0].telefone << endl;
    cout << "Media Notas: " << aluno[0].media_notas << endl;

}