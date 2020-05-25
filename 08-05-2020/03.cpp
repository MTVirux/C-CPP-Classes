#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;


void retirar_letra(string frase, char letra){
   
   frase.erase(remove(frase.begin(),frase.end(), letra),frase.end());

   cout << frase << endl;

}


int main(){

    string frase;
    char letra;

    cout << "Insira uma frase: " << endl;
    getline(cin, frase);
    cout << "Insira um caracter para retirar:" << endl;
    cin >> letra;

    retirar_letra(frase, letra);

    

}