#include <iostream>
#include <string>

using namespace std;

string tratar(string palavra){

    int position = 0;

    for (char c : palavra){

        if (ispunct(c) || c == ' '){
            palavra.erase(palavra.begin()+position);
        }else{
            switch(c){

                case 'á':
                case 'à':
                case 'ã':
                case 'â':
                case 'Á':
                case 'À':
                case 'Ã':
                case 'Â':
                    palavra[position] = 'a';
                    break;
                case 'é':
                case 'è':
                case 'ê':
                case 'É':
                case 'È':
                case 'Ê':
                    palavra[position] = 'e';
                    break;

                case 'í':
                case 'ì':
                case 'î':
                case 'Í':
                case 'Ì':
                case 'Î':
                    palavra[position] = 'i';
                    break;

                case 'ó':
                case 'ò':
                case 'õ':
                case 'ô':
                case 'Ó':
                case 'Ò':
                case 'Õ':
                case 'Ô':
                    palavra[position] = 'o';
                    break;
                
                case 'ú':
                case 'ù':
                case 'û':
                case 'Ú':
                case 'Ù':
                case 'Û':
                    palavra[position] = 'u';
                    break;
            }
        }

        position ++;
    }

    return palavra;
}

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
    string palavra_tratada;

    cout << "Insira uma palavra:" << endl;

    getline(cin,palavra);

    palavra_tratada = tratar(palavra);

    if(palindromo(palavra_tratada) == true){

        cout << "Esta frase e um palindromo" << endl;

    }else{

        cout << "Esta frase nao e um palindromo" << endl;
        
    }


    
}