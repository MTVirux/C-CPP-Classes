#include <iostream>

using namespace std;


int main(){

    struct data{ // Define estrutura

        int dia;
        int ano;
        string mes;

    };

struct data uma_data;

cout << "Insira um dia" << endl; // pede dia
cin  >> uma_data.dia; cin.ignore(); // input do utilizador para o dia
cout << "Insira um ano" << endl; // pede ano
cin >> uma_data.ano; cin.ignore(); // input do utilizador para o ano
cout << "Insira um mes" << endl; // pede mes
getline(cin, uma_data.mes); // input do utilizador para o mes

cout << "Data escolhida: \n" << uma_data.dia << " / " << uma_data.mes << " / " << uma_data.ano << endl; // Mostra a data inserida pelo utilizador


}