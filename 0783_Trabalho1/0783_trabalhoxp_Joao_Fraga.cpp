#include "0783_trabalhoxp_joao_fraga.h"      

using namespace std;


void trabalho::separator(){
    cout << "------------------------------------" << endl;
}

void trabalho::screen_clear(){

    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

}

void trabalho::add_to_fatura(string servico, float preco){

    stringstream preco_string;
    preco_string << fixed << setprecision(2) << preco;
    string string_to_add = "" ;   
    string_to_add.append(servico); 
    string_to_add.append(" - ");
    string_to_add.append(preco_string.str());
    string_to_add.append(" euros");
    cout << "A adicionar: " << string_to_add << endl;
    fatura.push_back(string_to_add);
    total = total + preco;
    return;

}

void trabalho::trabalho::servicos(){
    float servicos;
    int menu;
    int dias;

    screen_clear();

    cout << "1- Transporte" << endl;
    cout << "2- Alojamento - 75/dia" << endl;
    cout << "3- Aluguer de automoveis - 25/dia" << endl;
    cin >> menu; cin.ignore();

    switch (menu){

        case 1:

            cout << "1- Ida - 50" << endl;
            cout << "2- Ida e volta - 75" << endl;
            cin >> menu; cin.ignore();
            switch(menu){
                case 1:
                    add_to_fatura("Transporte - Ida", 50);
                    break;
                case 2:
                    add_to_fatura("Transporte - Ida e volta", 75);
                    break;
            }
            break;
      
        case 2:
            cout << "Quantas noites vai querer alojamento?" << endl;
            cin >> dias;
            add_to_fatura("Alojamento por " + to_string(dias) + " dias", 75*dias);
            break;
       
        case 3:
            cout << "Quantos dias vai querer alugar o automovel?" << endl;
            cin >> dias;
            add_to_fatura("Aluguer de automoveis por " + to_string(dias) + " dias", 25*dias);
        
        default:
            break;

    }
    
}

void trabalho::experiencias() {
    int menu;

    screen_clear();

    cout << "1- Safari - 250" << endl;
    cout << "2- Visita as grutas - 75" << endl;
    cout << "3- Passeio de barco (dia completo) - 150" << endl;
    cout << "4- Whale watching - 55" << endl;
    cin >>menu;cin.ignore();

    switch(menu){

        case 1:
            add_to_fatura("Safari", 250);
            break;
        case 2:
            add_to_fatura("Visita as grutas", 75);
            break;
        case 3:
            add_to_fatura("Passeio de barco (dia completo)", 150);
            break;
        case 4:
            add_to_fatura("Whale watching", 55);
            break;
        default:
            break;

    }

}

void trabalho::terminar(){
    
    int menu;

    screen_clear();

    for (string i : fatura){
        cout << i << endl;
    }

    separator();
    cout << "Total: " << total << endl;
    cout << "O valor esta correto?" << endl;
    cout << "1- Sim" << endl;
    cout << "2- Nao" << endl;
    cin >> menu; cin.ignore();

    switch(menu){

        case 1:
        exit(EXIT_SUCCESS);
        default:
        case 2:
        trabalho::main();
        
    }

}

void trabalho::main(){

    int menu;

    screen_clear();
    
    for (string i : fatura){
        cout.precision(2);
        cout << i << endl;
    }
    separator();
    cout << "Total: " << total << endl<
    
    cout << "O que pretende adicionar a fatura?" << endl;
    cout << "1- Servicos" << endl;
    cout << "2- Experiencias" << endl;
    cout << "3- Terminar" << endl;
    cin >> menu;

    switch(menu){

        case 1:
            trabalho::servicos();
            trabalho::main();
            break;

        case 2:

            trabalho::experiencias();
            trabalho::main();
            break;
        case 3:

            trabalho::terminar();
            break;

        default:
            trabalho::main();
            break;
    }

}

int main(){
    trabalho trabalho;
    trabalho.main();
}