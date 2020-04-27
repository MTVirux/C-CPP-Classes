#define input_limit 12

#include <iostream>

using namespace std;

int repetido( int numeros[input_limit], int input){

    for (int i = 0; i < input_limit; i++){
        
        if(input == numeros[i]){
            return true;
        }

    }

    return false;

}

int main(){

    int input;
    int maior = 0;
    int menor = 0;
    int numeros[input_limit];

    for(int i = 0; i < 12 ; i++){

        do{

            cout << "Insira um numero" << endl;
            cin >> input;cin.ignore();
            if(input > 20){
                cout  << "O numero tem de ser igual ou inferior a 20" << endl;
            }
            if(repetido(numeros, input)){
                cout << "O numero nao pode ser repetido" << endl;
                input = 21;
            }

        }while(input >= 20);


        numeros[i] = input;

        //Atualizacao maior / menor
        if(!maior)
            maior = input;

        if(!menor)
            menor = input;

        if(input > maior)
            maior = input;

        if(input < menor)
            menor = input;


        input = 21;

                
    }

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

}