#include <iostream>
#include <string>

using namespace std;

bool palindromo(string palavra){
    int numero_letras = palavra.length();

    for (int i = 0; i < numero_letras / 2; i++){
        cout << "Analyzing " << palavra[i] << "-" << palavra[numero_letras-i-1] << endl;
        if(palavra[i] != palavra[numero_letras-i-1]){
            return false;
        }
    }
    return true;
    
}

int main(){
    string palavra;

    cout << "Insira uma palavra" << endl;

    getline(cin,palavra);

    if(palindromo(palavra) == true){

        cout << "Esta palavra e um palindromo" << endl;

    }else{

        cout << "Esta palavra nao e um palindromo" << endl;
        
    }


    
}