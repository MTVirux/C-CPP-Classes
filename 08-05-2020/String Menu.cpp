#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>

using namespace std;

map <string, int> cargos {
                            {"sair", 0},
                            {"operador", 1},
                            {"assistente", 2},
                            {"administrativo", 3},
                            {"tecnico",4},
                            {"gerente", 5}
                        };

float calcular_salario(float salario, string cargo_input){

    switch (cargos[cargo_input]){
    
        case 0:
            exit(EXIT_SUCCESS);
        case 1:
            return salario + ((salario / 100 ) * 25);
        case 2:
            return salario + ((salario / 100 ) * 30);
        case 3:
            return salario + ((salario / 100 ) * 35);
        case 4:
            return salario + ((salario / 100 ) * 15);
        case 5:
            return salario + ((salario / 100 ) * 5);
        default:
            system("CLS");
            cout << "CARGO INVALIDO, TENTE NOVAMENTE" << endl;
            cout <<"-----------------------------------" << endl;
            return 0;
    }

}


int main(){

    string cargo_input;
    float salario;
    float salario_final = 0;

    cout << "Insira qual o seu ordenado atual" << endl;
    cin >> salario; cin.ignore();

    while(salario_final == 0){
        cout << "Cargos da Empresa:" << endl;
        cout << "- Operador" << endl;
        cout << "- Assistente" << endl;
        cout << "- Administrativo" << endl;
        cout << "- Tecnico" << endl;
        cout << "- Gerente" << endl;
        
        cout << endl;

        cout << "Insira o seu cargo na empresa:" << endl;

        getline(cin, cargo_input);

        for (auto & c : cargo_input)
            c = tolower(c);

        salario_final = calcular_salario(salario, cargo_input);

        if(salario_final > 0){
            cout << salario_final << endl;
        }
    

    }

}