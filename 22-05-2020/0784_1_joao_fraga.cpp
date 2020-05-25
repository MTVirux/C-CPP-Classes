#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>

using namespace std;

int main(){

    string palavra;
    string palavramaiuscula;
    int numchar = 0;

    cout << "Insira uma palavra" << endl;
    getline( cin, palavra );

    palavramaiuscula = palavra;
   

    for( auto & i : palavramaiuscula){

        palavramaiuscula[numchar] = toupper(i);
        numchar++;

    }
    
    cout << "1- " << palavra << endl;
    cout << "2- " << numchar << endl;

    if(palavramaiuscula.compare("TESTE") == 0){

        cout << "3- Muito bem, 3 valores" << endl;

    }


}