/*
1. O coração humano bate em média uma vez por segundo. 

Desenvolver um programa para calcular e escrever quantas batidas do coração de uma 

pessoa baterá se viver X anos.
*/


#include <iostream>

using namespace std;

int main()
{
    float anos;
    float total;
    char bissexto;

    cout << "Quantos anos quer?" << endl;
    cin >> anos; cin.ignore();

    
    total = 60 * 60 *24 * 365.2422 * anos; // segundos * minutos * horas * dias * anos

    cout << "O seu coracao ira bater " << total << "vezes por ano"  <<endl;




}