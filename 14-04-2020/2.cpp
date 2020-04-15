#include <iostream>

using namespace std;

int main(){

    int** tabela = new int*[10]; //Criar um array

    for(int i = 0; i <= 9; i++){
        tabela[i] = new int[10]; //Meter um array dentro de cada array para criar um array bi-dimensional
    }

   for (int i = 0; i <= 9 ; i++){
       for(int k = 0; k <= 9 ; k++){
           tabela[i][k] = i*k; //Atribuir a cada casa do array o valor da sua coluna vezes a sua linha
       }
   }

   cout << "---------------------------------" << endl; //Separador

   for (int i = 1; i <= 9; i++){
       for(int k = 1; k <= 9; k++){
           
           if(tabela[i][k] < 10){
               cout << " " << tabela[i][k] << " "; //Colocar apenas 1 espaço se o numero tiver 2 caracteres
           }else{
               cout << tabela[i][k] << " "; //Colocar 2 espaços se o numero tiver 1 carater
           }
           if(k == 9)
            cout << endl; //passar para a próxima linha quando terminada a presente linha
       }
   }
}