#include <iostream>

using namespace std;

int main(){

    struct alunos{

        string nome;
        int numero_matricula;
        string curso;

    };

    int numero_de_alunos = 2;
    int numero_de_campos_na_estrutura = 3;

    struct alunos aluno[numero_de_alunos];
    string array_desnecessario [numero_de_alunos * numero_de_campos_na_estrutura];

    for (int i = 0; i < numero_de_alunos; i++){

        cout << "Insira o nome do aluno " << i+1 << endl;
        getline(cin, aluno[i].nome);
        cout << "Insira o numero de matricula do aluno " << i+1 << endl;
        cin >> aluno[i].numero_matricula; cin.ignore();
        cout << "Insira o nome do curso do aluno " << i+1 << endl;
        getline(cin, aluno[i].curso);

    }

    //Loop desnecessário sem sentido nenhum
    for (int i = 0; i < numero_de_alunos * numero_de_campos_na_estrutura; i++){

        for (int k = 0; k < numero_de_alunos; k++){

            array_desnecessario[i] = aluno[k].nome;
            i++;
            array_desnecessario[i] = to_string(aluno[k].numero_matricula);
            i++;
            array_desnecessario[i] = aluno[k].curso;
            i++;

        }

    }

    cout << "aqui" << endl;
    for (int i = 0; i < numero_de_alunos*numero_de_campos_na_estrutura; i++){

        if(i % 3 == 0){

            cout << "Nome do aluno " << (i/3)+1 << ": " << array_desnecessario[i] << endl;

        }else if(i % 3 == 1){

            cout << "Numero de Matricula do aluno  " << (i/3)+1 << ": " << array_desnecessario[i] << endl;


        }else if(i % 3 == 2){

            cout << "Nome do curso do aluno  " << (i/3)+1 << ": "<< array_desnecessario[i] << endl;


        }

    }

}