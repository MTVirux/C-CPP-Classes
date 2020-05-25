#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;


int contar_ocorrencia(string frase, char letra){

    int counter = 0;

    for (char c : frase)
        if(c == letra)
            counter++;

    return counter;

}


int main(){

    string frase;
    char letra;

    cout << "Insira uma frase: " << endl;
    getline(cin, frase);
    cout << "Insira um caracter para contar:" << endl;
    cin >> letra;

    cout << letra << " ocorre " << contar_ocorrencia(frase, letra) << " vezes." << endl;

    

}