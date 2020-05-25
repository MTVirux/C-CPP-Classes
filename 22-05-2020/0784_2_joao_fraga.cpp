#include <iostream>

using namespace std;


int tamanho(string palavra){

    int counter = 0;

    for (char i : palavra)
        counter++;
    
    return counter;

}

int main(){

    string palavra;

    cout<< "Introduza uma palavra"<< endl;
    getline(cin, palavra);

    cout << "A sua palavra tem " << tamanho(palavra) << " characteres" << endl;

}