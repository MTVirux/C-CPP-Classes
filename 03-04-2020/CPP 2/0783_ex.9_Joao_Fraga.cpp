#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;


int main(){
    
    int minimo = 25;
    int maximo = 40;
    int tamanho;
    int counter = 0;

    recomecar:
    int * array;

    srand(time(NULL));

    while(!(tamanho >= minimo && tamanho <= maximo)){
        cout << "Insira o tamanho do array (entre " << minimo << " e " << maximo << ")" << endl;
        cin >> tamanho; cin.ignore();
    }

    
    array = (int*) malloc(sizeof(int) * tamanho);

    for (int i = 0; i < tamanho; i++){
        array[i] = rand()%10;
    }

    for(int i = 0; i < 10; i++){
        
        counter = 0;

        for (int k = 0; k < tamanho; k++){
            if(array[k] == i){
                counter++;
            }
        }

        cout << i << " aparece " << counter << " vezes" << endl;
    }
    free(array);

    cout << "---------------" << endl;
    cout << "R- Recomecar" << endl;
    cout << "M- Mudar range" << endl;
    cout << "Q- sair" << endl;

    char input = getch();

    switch(input){

        case 'm':
            new_minimo:
            cout << "Insira um novo minimo (tem de ser positivo)" << endl;
            cin >> minimo; cin.ignore();
            if(minimo < 0){
                goto new_minimo;
            }
            new_maximo:
            cout << "insira um novo maximo (tem de ser positivo)" << endl;
            cin >> maximo; cin.ignore();
            if(maximo < 0){
                goto new_maximo;
            }
        case 'r':
            counter = 0;
            goto recomecar;
            break;
        case 'q':
            return 0;
            break;
    }
}

