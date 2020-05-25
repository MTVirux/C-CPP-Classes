#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;


void print_maiusculas(string frase){

    for (auto & c: frase) 
        c = toupper(c);

    cout <<  "Frase em maiusculas: " << frase << endl;

    return;

}

int main(){

    string frase;

    cout << "Insira uma frase" << endl;
    getline(cin, frase);

    print_maiusculas(frase);
    

}