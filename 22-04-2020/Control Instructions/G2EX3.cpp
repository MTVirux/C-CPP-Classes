#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

using namespace std;

void screen_clear(){

    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

}

int main(){

    bool exit = false;
    

    
    while(!exit){

        int operacao;
        vector<string> numeros;
        float total;

        screen_clear();

        cout << "Selecione uma operação:" << endl;
        cout << "1- '+'" << endl;
        cout << "2- '-'" << endl;
        cout << "3- '*'" << endl;
        cout << "4- '/'" << endl;
        cin >> operacao; cin.ignore();

        screen_clear();

        do{
            
            cout << "Insira um numero (ou letra para terminar)"<< endl;
            numeros.push_back("");
            getline(cin, numeros[numeros.size()-1]);
            if(numeros.size() <= 2 && (isdigit(numeros[numeros.size()-1][0]) == false) ){
                numeros.pop_back();
                continue;
            }

        }while(numeros.size() >= 2 ? isdigit(numeros[numeros.size()-1][0]) : true);

        numeros.pop_back();

        for (string i : numeros){
            
            if(!total){
                total = stof(i);
            }else{
                switch(operacao){

                    case 1:
                        total = total + stof(i);
                        break;
                    case 2:
                        total = total - stof(i);
                        break;
                    case 3:
                        total = total * stof(i);
                        break;
                    case 4:
                        total = total / stof(i);
                        break;
                    

                }
            }
        }

        cout << "Total: " << total << endl;

        cout << "---Pressione 'q' ou outra tecla para continuar---" << endl;
        if(_getch() == 'q'){
            exit = true;
        }



    }

}