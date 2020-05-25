#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;


void contar_ocorrencias_characteres(string frase){
   
for( auto & c : frase)
    c = tolower(c);

int lenght = frase.length();

string repetidos = " ";

   for(int i = 0; i < lenght; i++){ // para cada letra da palavra
       bool registado = false;
      
       if(!(frase[i] == ' ')){ // se não for espaço
        for(int k = i+1; k < lenght; k++){ // vê todas as outras letras dai para a frente
            if (frase[i] == frase[k]){ // se for repetidas

                frase[k] = ' '; // se a letra for repetida apaga a letra da frase
            }
        }
    }

   }

   cout << frase << endl; // mostra todas as letras que foram registadas como repetidas

}


int main(){

    string frase;

    cout << "Insira uma frase: " << endl;
    getline(cin, frase);
    
    contar_ocorrencias_characteres(frase);

    

}