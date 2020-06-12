#define NUMERO_CLIENTES_MAXIMO 999
#define NUMERO_COLUNAS_NA_DB 3

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;


//CLIENT STRUCTS--------------------------------
struct clientes{

    int id;
    string nome;
    float balanco;

};

struct clientes cliente[NUMERO_CLIENTES_MAXIMO];


//GLOBAL VARS--------------------------------
int client_count = 0;
int db_inicializada = 0;
bool registo_limpo = false;



void clearscreen(){
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
}

void separador(){
    cout << "----------------------------------------"<< endl;
}

void numero_conta_invalido(){
    cout << "ERRO: NUMERO DE CONTA INVALIDO" << endl;
}


void limpar_registo(){
    
    for(int i = 0;  i < NUMERO_CLIENTES_MAXIMO; i++){
        
        if(cliente[i].id == 0){

            registo_limpo = true;
            return;

        }else if(cliente[i].id == -1){

            if(cliente[i+1].id){
            
                cliente[i].id = cliente[i+1].id;
                cliente[i].nome = cliente[i+1].nome;
                cliente[i].balanco = cliente[i+1].balanco;
                cliente[i+1].id = -1;
                cliente[i+1].nome = " ";
                cliente[i+1].balanco = 0;
            
            }else{
            
                cliente[i].id = 0;
                cliente[i].nome = " ";
                cliente[i].balanco = 0;

            }
        }
    }
    
    registo_limpo = true;

}

void verificar_db_limpa(){

    if(registo_limpo == false){
        limpar_registo();
    }

}


int menu_principal(){
    
    int escolha_menu;

    cout << "Escolha uma opcao: " << endl;
    cout << "1- Lista de clientes ou registos" << endl;
    cout << "2- Pesquisar um registo" << endl;
    cout << "3- Fazer deposito" << endl;
    cout << "4- Fazer levantamento" << endl;
    cout << "5- Adicionar Cliente" << endl;
    cout << "6- Remover Cliente" << endl;
    cout << "9- Sair do Programa" << endl;

    cin >> escolha_menu; cin.ignore();

    return escolha_menu;

    
}

void apresentar_cliente(int i){

    cout << "ID: " << cliente[i].id << endl;
    cout << "Nome: " << cliente[i].nome << endl;
    cout << "Balanco: " << cliente[i].balanco << endl;
    separador();
    

}

void mostrar_clientes(){

    
    for (int i = 0; i < client_count; i++){

        apresentar_cliente(i);

    }

}

void pesquisar_clientes(){

    int id_pesquisa;

    cout << "Insira o ID do cliente: " << endl;
    cin >> id_pesquisa; cin.ignore();
        
    for(int i = 0; i < client_count; i++){
        if(cliente[i].id == id_pesquisa){
            
            apresentar_cliente(i);
            return;

        }
    }
    
    numero_conta_invalido();

}



void fazer_deposito(){

    int id;
    int valor_deposito;

    cout << "Insira o ID da pessoa: " << endl;
    cin >> id;

    cout << "Insira o valor do deposito: " << endl;
    cin >> valor_deposito;
    
    for(int i = 0; i < client_count; i++){

        if(cliente[i].id == id){
            cliente[i].balanco = cliente[i].balanco + valor_deposito;
            cout << "Deposito de " << valor_deposito << " EUR bem sucedido!" << endl;
            cout << "Balanco autal de conta: " << cliente[i].balanco << " EUR" << endl;
            cout << "Volte sempre, " << cliente[i].nome << endl;
            return;
        }

    }
    
    numero_conta_invalido();
}

void fazer_levantamento(){

    int id;
    int valor_levantamento;

    cout << "Insira o ID da pessoa: " << endl;
    cin >> id;

    cout << "Insira o valor do levantamento: " << endl;
    cin >> valor_levantamento;
    
    for(int i = 0; i < client_count; i++){
    
        if(cliente[i].id == id){
            if(valor_levantamento <= cliente[i].balanco){
                cliente[i].balanco = cliente[i].balanco - valor_levantamento;
                cout << "Levantamento de " << valor_levantamento << " EUR bem sucedido!" << endl;
                cout << "Balanco autal de conta: " << cliente[i].balanco << " EUR" << endl;
                cout << "Volte sempre, " << cliente[i].nome << endl;
                return;
            }else{
                cout << "ERRO: BALANCO DE CONTA INSUFUCIENTE PARA O LEVANTAMENTO"<< endl;
                return;
            }
        }
    }

    numero_conta_invalido();
}



void contar_clientes(){
    int i = 0;
    
    while(cliente[i].id != 0){
        client_count++;
        i++;
    }
}

void eliminar_cliente(){

    verificar_db_limpa();

    int id_para_eliminar;

    cout << "Insira o ID da conta que quer eliminar: " << endl;
    cin >> id_para_eliminar; cin.ignore();

    for(int i = 0; i < client_count; i++){
        if(cliente[i].id == id_para_eliminar){
            
            cliente[i].id = -1;
            client_count--;
            limpar_registo();
            return;
        }
    }

}

void adicionar_cliente(){

    //Verificar se a DB esta apta a ser atualizada
    verificar_db_limpa();
    bool id_disponivel = false;
    int id_desejado;

    //Inicializar conta com ID
    do{

        id_disponivel = true;
        cout << "Insira um ID: " << endl;
        cin >> id_desejado; cin.ignore();

        for (int i = 0; i < client_count; i++){
            if(cliente[i].id == id_desejado){
                cout << "ID ja em uso. Atual dono da conta: " << cliente[i].nome << endl; 
               id_disponivel = false;
            }
        }
          
    } while (id_disponivel == false);

    cliente[client_count].id = id_desejado;


    //Inicializar conta com nome
    cout << "Insira o nome: " << endl;
    getline(cin,cliente[client_count].nome);

    //Inicializar balanco de conta a 0
    cliente[client_count].balanco = 0;

    //Adicionar novo cliente ao total de clientes
    client_count++;

}

void read_from_db(){
    //Variaveis temporarias
    size_t temp_pos; // size_t para encontrar a virgula entre id e nome
    string line; // linha do ficheiro a ser lida
    string temp_substring; // substring seleção de parametros especificos
    int i = 0; // Index para a lista de clientes na memoria


    ifstream db;
    db.open("darabeise.db");
    if(db.is_open()){

        while(getline(db, line)){
            
            //ID
            temp_pos = line.find(",");
            cliente[i].id = stoi(line.substr(0,temp_pos));
            line = line.substr(temp_pos + 1);

            //NOME
            temp_pos = line.find(",");
            cliente[i].nome = line.substr(0,temp_pos);
            line = line.substr(temp_pos+1);

            //BALANCO
            temp_pos = line.find("\n");
            cliente[i].balanco = stof(line.substr(0,temp_pos));

            i++; //Incrementar index de cliente

        }

        db_inicializada = 1;

    }

}

void commit_to_db(){

    ofstream db;
    db.open("darabeise.db");
    for (int i = 0; i < client_count; i++){

        cout << "A adicionar: " << cliente[i].id << "," << cliente[i].nome << "," << cliente[i].balanco << "\n";
        db << cliente[i].id << "," << cliente[i].nome << "," << cliente[i].balanco << "\n";

    }

    db.close();

}



int main(){
   
    separador();

    if(db_inicializada == false){
        cout << "A inicializar DB de teste... " << endl;
        read_from_db();
        separador();
    }


    if(registo_limpo == false){
        cout << "A limpar registo... "<< endl;
        limpar_registo();
        separador();
    }
    
    if(client_count == 0){
        cout << "A contar clientes..."<< endl;
        contar_clientes();
        separador();
    }
    
    separador();
    
    int menu = -1;

    while (menu == -1){
        menu = menu_principal();
    }

    clearscreen();

    switch(menu){

        case 1:
            mostrar_clientes();
            break;
        case 2:
            pesquisar_clientes();
            break;
        case 3:
            fazer_deposito();
            break;
        case 4:
            fazer_levantamento();
            break;
        case 5:
            adicionar_cliente();
            break;
        case 6:
            eliminar_cliente();
            break;
        case 9:
            commit_to_db();
            exit(EXIT_SUCCESS);
        default:
            break;
    }

    main();
    return 0;


}