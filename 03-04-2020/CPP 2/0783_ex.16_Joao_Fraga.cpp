#include <iostream>
#include <time.h>

using namespace std;

int main(){

    int array[5][5];
    int menor;
    int linha_menor;

    srand (time(NULL));

    for (int i = 0; i < 5 ; i++){

        for (int k = 0; i < 5; i++){

            array[i][k] = rand()%51;
            if(!menor){
                menor = array[i][k];
                linha_menor = i;
            }else if(array[i][k] < menor){
                menor = array[i][k];
                linha_menor = i;
            }

        }

    }


    cout << "A linha com o valor menor e a linha: " << linha_menor + 1 << endl;


}