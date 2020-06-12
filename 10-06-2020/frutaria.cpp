#define numero_maximo_de_frutas 999
#define numero_maximo_de_clientes 999
#define numero_maximo_de_compras 999
#define nome_db_clientes "clientes.db"
#define nome_db_frutas "frutas.db"
#define nome_db_compras "compras.db"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;



struct frutas{

    int id;
    string nome;
    double preco_por_kilo;

};

struct clientes{

    int id;
    string nome;
    int contribuinte;

};

struct compras{

    int id_compra;
    int id_cliente;
    int id_fruta;
    double total;

};

int numero_de_frutas = -1;
int numero_de_clientes = -1;
int numero_de_compras = -1;
int db_inicializada = 0;

struct clientes cliente[numero_maximo_de_clientes];
struct frutas fruta [numero_maximo_de_frutas];
struct compras compra[numero_maximo_de_compras];


void screen_clear(){

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;

}

void guardar_dbs(){

    ofstream db;
    db.open(nome_db_clientes);
    for (int i = 0; i < numero_de_clientes; i++){

        cout << "A adicionar: " << cliente[i].id << "," << cliente[i].nome << "," << cliente[i].contribuinte << "\n";
        db << cliente[i].id << "," << cliente[i].nome << "," << cliente[i].contribuinte << "\n";

    }
    db.close();
    
    db.open(nome_db_frutas);
    for (int i = 0; i < numero_de_frutas; i++){

        cout << "A adicionar: " << fruta[i].id << "," << fruta[i].nome << "," << fruta[i].preco_por_kilo << "\n";
        db << fruta[i].id << "," << fruta[i].nome << "," << fruta[i].preco_por_kilo << "\n";

    }
    db.close();
    
    db.open(nome_db_compras);
    for (int i = 0; i < numero_de_compras; i++){

        cout << "A adicionar: " << compra[i].id_compra << "," << compra[i].id_cliente << "," << compra[i].id_fruta << "," << compra[i].total << "\n";
        db << compra[i].id_compra << "," << compra[i].id_cliente << "," << compra[i].id_fruta << "," << compra[i].total << "\n";

    }
    db.close();


}

void criar_clientes(){

    numero_de_clientes++;
    cliente[numero_de_clientes-1].id = numero_de_clientes;
    cout << "Insira o nome do cliente que deseja adicionar: " << endl;
    getline(cin, cliente[numero_de_clientes- 1].nome);
    cout << "Insira o contribuinte do cliente que deseja adicionar: " << endl;
    cin >> cliente[numero_de_clientes- 1].contribuinte; cin.ignore();
    guardar_dbs();

}

void listar_clientes(){
    for (int i = 0; i < numero_de_clientes; i++){

        cout << "--- " << i+1 << " ---" << endl;
        cout << "ID: " << cliente[i].id << endl;
        cout << "Nome: "<< cliente[i].nome << endl;
        cout << "Contribuinte: " << cliente[i].contribuinte << endl;
        cout << "-----------------------" << endl;
    }

}

void criar_produtos(){

    numero_de_frutas ++;
    fruta[numero_de_frutas].id = numero_de_frutas;
    cout << "Insira o nome da fruta: " << endl;
    getline(cin, fruta[numero_de_frutas -1 ].nome);
    cout << "Insira o preco por kilo da fruta: " << endl;
    cin >> fruta[numero_de_frutas -1].preco_por_kilo; cin.ignore();

}

void listar_produtos(){

    for (int i = 0; i < numero_de_frutas; i++){

        cout << "--- " << i+1 << " ---" << endl;
        cout << "ID: " << fruta[i].id << endl;
        cout << "Nome: " << fruta[i].nome << endl;
        cout << "Preco/Kilo: " << fruta[i].preco_por_kilo << endl;
        cout << "-----------------------" << endl;

    }

}

double get_preco_fruta(int id){

    for (int i = 0; i < numero_de_frutas; i++){

        if(id == fruta[i].id){
            return fruta[i].preco_por_kilo;
        }

    }
    return 0;
}

void iniciar_compra(){
    
    int id_da_compra;
    int id_cliente;
    int id_fruta;
    double peso;
    double preco;
    numero_de_compras++;

    cout << "Por favor insira o seu numero de cliente: " << endl;
    cin >> id_cliente; cin.ignore();
    cout << "Por favor insira o ID da fruta que deseja comprar: " << endl;
    cin >> id_fruta; cin.ignore();
    cout << "Por favor insira o peso da sua compra: " << endl;
    cin >> peso; cin.ignore();

    preco = peso * get_preco_fruta(id_fruta);

    id_da_compra = numero_de_compras-1;
    compra[numero_de_compras -1].id_cliente = id_cliente;
    compra[numero_de_compras -1].id_compra = id_da_compra;
    compra[numero_de_compras -1].id_fruta = id_fruta;
    compra[numero_de_compras -1].total = preco;


}

void listar_compras(){
    
    for (int i = 0; i < numero_de_compras; i++){

        cout << "--- " << i+1 << " ---" << endl;
        cout << "ID Compra: " << compra[i].id_compra << endl;
        cout << "ID Cliente: " << compra[i].id_cliente << endl;
        cout << "ID Fruta: " << compra[i].id_fruta << endl;
        cout << "Total: " << compra[i].total << endl;
        cout << "-----------------------" << endl;

    }
}



void carregar_dbs(){

    //Variaveis temporarias
    size_t temp_pos; // size_t para encontrar a virgula entre id e nome
    string line; // linha do ficheiro a ser lida
    string temp_substring; // substring seleção de parametros especificos
    int i = 0; // Index para a lista de clientes na memoria


    ifstream db;
    db.open(nome_db_clientes);
    if(db.is_open()){
        
        while(getline(db, line)){
            
            //ID
            temp_pos = line.find(",");
            cliente[i].id = stoi(line.substr(0,temp_pos));
            line = line.substr(temp_pos + 1);

            //NOME
            temp_pos = line.find(",");
            cliente[i].nome = line.substr(0,temp_pos);
            line = line.substr(temp_pos + 1);

            //CONTRIBUINTE
            temp_pos = line.find("\n");
            cliente[i].contribuinte = stof(line.substr(0,temp_pos));

            i++; //Incrementar index de cliente

        }

        db_inicializada = 1;
        db.close();
        i = 0;

    }

    //fruta

    db.open(nome_db_frutas);
    if(db.is_open()){

        while(getline(db, line)){
            
            //ID
            temp_pos = line.find(",");
            fruta[i].id = stoi(line.substr(0,temp_pos));
            line = line.substr(temp_pos + 1);

            //NOME
            temp_pos = line.find(",");
            fruta[i].nome = line.substr(0,temp_pos);
            line = line.substr(temp_pos + 1);

            //PRECO POR KILO
            temp_pos = line.find("\n");
            fruta[i].preco_por_kilo = stof(line.substr(0,temp_pos));

            i++; //Incrementar index da fruta

        }

        db_inicializada = 1;
        db.close();
        i = 0;


    }

    //COMPRAS
    db.open(nome_db_compras);
    if(db.is_open()){

        while(getline(db, line)){
            
            //ID_compra
            temp_pos = line.find(",");
            compra[i].id_compra = stoi(line.substr(0,temp_pos));
            line = line.substr(temp_pos + 1);

            //ID_Cliente
            temp_pos = line.find(",");
            compra[i].id_cliente = stoi(line.substr(0,temp_pos));
            line = line.substr(temp_pos + 1);

            //ID_fruta
            temp_pos = line.find("\n");
            compra[i].id_fruta = stoi(line.substr(0,temp_pos));
            line = line.substr(temp_pos + 1);

            //total
            temp_pos = line.find("\n");
            compra[i].total = stof(line.substr(0,temp_pos));

            i++; //Incrementar index da fruta

        }

        db_inicializada = 1;
        db.close();
        i = 0;
        
    }

}

void contar_dados(){

    size_t temp_pos; // size_t para encontrar a virgula entre id e nome
    string line; // linha do ficheiro a ser lida
    string temp_substring; // substring seleção de parametros especificos
    int i = 0; // Index para a lista de clientes na memoria

    ifstream db;
    db.open(nome_db_clientes);
    if(db.is_open()){
    numero_de_clientes = 0;
        while(getline(db, line)){
            
            numero_de_clientes++;

        }
        
        db.close();
        i = 0;
    }
    
    db.open(nome_db_frutas);
    if(db.is_open()){
        numero_de_frutas = 0;
        while(getline(db, line)){
            
            numero_de_frutas++;

        }
        
        db.close();
        i = 0;
    }
    
    db.open(nome_db_compras);
    if(db.is_open()){
        numero_de_compras = 0;
        while(getline(db, line)){

            numero_de_compras++;

        }
        
        db.close();
        i = 0;

    }  

}

int main(){

    int menu;
    
    if(db_inicializada == 0){
        carregar_dbs();
        contar_dados();
        }        


    cout << "-----------------------" << endl;
    cout << "-----------------------" << endl;
    cout << "FRUTARIA ENTA" << endl;
    cout << "1- Criar Cliente" << endl;
    cout << "2- Criar Produtos" << endl;
    cout << "3- Listar Clientes" << endl;
    cout << "4- Listar Produtos" << endl;
    cout << "5- Listar Compras" << endl;
    cout << "6- Iniciar Compra" << endl;
    cout << "7- Sair" << endl;

    cin >> menu; cin.ignore();
    screen_clear();
    switch(menu){

        case 1:
            criar_clientes();
            break;
        case 2:
            criar_produtos();
            break;
            
        case 3:
            listar_clientes();
            break;

        case 4:
            listar_produtos();
            break;
        
        case 5:
            listar_compras();
            break;
        case 6:
            iniciar_compra();
            break;

        case 7:
            guardar_dbs();
            exit(0);
        default:
            break;

    }
    main();

}