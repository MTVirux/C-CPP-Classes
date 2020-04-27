#include "0783_trabalhoxp_joao_fraga.h"      

using namespace std;

float trabalho::reducao_preco(float preco, float percentagem){
    return preco - ((preco/100)*percentagem);
}


void trabalho::separator(){
    cout << "------------------------------------" << endl;
}

void trabalho::screen_clear(){

    for (int i = 0; i < 30; i++){
        cout << endl;
    }

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
    trabalho::total = trabalho::total + preco;
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
            add_to_fatura("Aluguer de automovel por " + to_string(dias) + " dias", 25*dias);
        
        default:
            break;

    }
    
}

void trabalho::experiencias() {
    int menu;
    int guia;

    screen_clear();

    cout << "1- Safari - 250" << endl;
    cout << "2- Visita as grutas - 75" << endl;
    cout << "3- Passeio de barco (dia completo) - 150" << endl;
    cout << "4- Whale watching - 55" << endl;
    cin >>menu; cin.ignore();

    cout << "Deseja guia?" << endl;
    cout << "1- Sim" << endl;
    cout << "2- Nao" << endl;
    cin >> guia; cin.ignore();

    guia = guia - 1;

    switch(menu){

        case 1:
            add_to_fatura("Safari", guia ? reducao_preco(75,15) : 75);
            break;
        case 2:
            add_to_fatura("Visita as grutas", guia ? reducao_preco(75,15) : 75 );
            break;
        case 3:
            add_to_fatura("Passeio de barco (dia completo)", guia ? reducao_preco(150,15) : 150);
            break;
        case 4:
            add_to_fatura("Whale watching", guia ? reducao_preco(55,15) : 55);
            break;
        default:
            break;

    }

}

void trabalho::terminar(){
    
    int menu;
    float subtotal = total * pessoas;
    float total_ponderado;

    screen_clear();

    for (string i : fatura){
        cout << i << endl;
    }

    separator();

    cout << "Subtotal: " << total * pessoas << endl;

    if(pessoas >= 6){

        total_ponderado = reducao_preco(subtotal, 45);
        cout << "Desconto: -45% (6 ou mais pessoas)" << endl;

    }else if(fatura.size() >= 4){
        
        total_ponderado = reducao_preco(subtotal, 50);
        cout << "Desconto: -50% (4 ou mais serviços/experiencias)" << endl;

    }else if (fatura.size() >= 2){

        total_ponderado = reducao_preco(subtotal, 25);
        cout << "Desconto: -25% (2 ou 3 serviços / experiencias)" << endl;
    }

    cout << "Total: " << total_ponderado << endl;
    
    separator();

    cout << "Confirmar Compra?" << endl;
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

    if(pessoas <= 0){
        cout << "Quantas pessoas tem o seu grupo?" << endl;
        cin >> trabalho::pessoas; cin.ignore();
    }

    screen_clear();
    
    for (string i : fatura){
        cout << i << endl;
    }

    separator();
    
    cout << "Pessoas: " << to_string(pessoas) << endl;
    cout << std::fixed << std::setprecision(2) <<"Subtotal: " << total << endl;
    cout << std::fixed << std::setprecision(2) <<"Subtotal x Pessoas: " << total * pessoas << endl;

    
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