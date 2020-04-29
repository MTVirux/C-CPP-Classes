#include <iostream>
#include <time.h>

using namespace std;

int main(){

    const int matrizx = 3;
    const int matrizy = 3;
    int menu;
    int matriz[matrizx][matrizy];
    int matriz2[matrizx][matrizy];

    srand(time(NULL));

    for (int i = 0; i < matrizx; i++){
        for (int k = 0; k < matrizy; k++){
            matriz[i][k] = rand() % 10;
            matriz2[i][k] = rand() % 10;
        }
    }

    cout << "1- Somar matrizes" << endl;
    cout << "2- Subtrair primeira matriz da segunda" << endl;
    cin >> menu; cin.ignore();
    cout << "--------------------------------" << endl;

    switch(menu){

        case 1:
            for (int i = 0; i < matrizx; i++){
                for (int k = 0; k < matrizy; k++){

                    cout << matriz[i][k] + matriz2[i][k] << " ";

                    if((matriz[i][k] + matriz2[i][k]) < 10)
                        cout << " ";
                }
            cout << endl;
            }
            break;

        case 2:
            for (int i = 0; i < matrizx; i++){
                for (int k = 0; k < matrizy; k++){

                    cout << matriz[i][k] - matriz2[i][k] << " ";

                    if(matriz[i][k] - matriz2[i][k] < 10 && matriz[i][k] - matriz2[i][k] >= 0)
                        cout << " ";
                }
            cout << endl;
            }
            break;
    }


}