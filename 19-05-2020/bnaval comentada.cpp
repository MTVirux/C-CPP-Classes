#define tabuleiro_total_x 5
#define tabuleiro_total_y 5
#define numero_de_navios 3

#include <iostream>
#include <vector>
#include <time.h>
#include <math.h>

using namespace std;

int tabuleiro[tabuleiro_total_x + 1][tabuleiro_total_y + 1];
bool tiros[tabuleiro_total_x + 1][tabuleiro_total_y + 1];
int navios[numero_de_navios][2];

void inicializarNavios(){
    for(int i = 0; i < numero_de_navios; i++){
        navios[i][0] = rand() %  tabuleiro_total_x + 1;
        navios[i][1] = rand() % tabuleiro_total_y + 1;
    }
}

void inicializarTiros(){
    for (int i = 0; i <= tabuleiro_total_x; i++){
        for (int j = 0; j <= tabuleiro_total_y; j++){
            tiros[i][j] == false;
        }
    }
}

void inicializarTabuleiro(){

    for (int i = 0; i <= tabuleiro_total_x; i++){
        for (int j = 0; j <= tabuleiro_total_y; j++){
            if (i == 0){;
                tabuleiro[i][j] = j;
            }else if (j == 0){
                tabuleiro[i][j] = i;
            }else{
                tabuleiro[i][j] = -1;
            }
        }
    }

    for(int i = 1; i <= tabuleiro_total_x; i++){
        for(int j = 0; j <= tabuleiro_total_y; j++){
            for (int z = 0; z < numero_de_navios; z++){
                if(i == navios[z][0] && j == navios[z][1]){
                    tabuleiro[i][j] = -3;
                }
            }
        }
    }

}

int mostrarTabuleiro(){

    int pontos = 0;

    for (int i = 0; i <= tabuleiro_total_x; i++){
        for (int j = 0; j <= tabuleiro_total_y; j++){

            if(i == 0 && j == 0){
                cout << " ";
            }else if(i == 0 || j == 0){ //linhas de  index
            
                cout << tabuleiro[i][j];

            }else if((tabuleiro[i][j] + tiros[i][j]) == 0){ //0 == casa sem navio com tiro

                cout << "*";

            }else if ((tabuleiro[i][j] + tiros[i][j]) == -1){ //-1 == casa sem navio sem tiro

                cout << "~";

            }else if ((tabuleiro[i][j] + tiros[i][j]) == -2){ //-2 == casa com navio com tiro

                cout << "X";
                pontos++;

            }else{ //-3 == casa com navio sem tiro

                cout << "~";
            }

            cout << "  "; // Espaço para separar colunas

        }
        cout << "\n\n"; // Espaço para separar linhas
    }

    return pontos;

}

int main(){

    srand(time(NULL));
    inicializarNavios();
    inicializarTiros();
    inicializarTabuleiro();
    int coord_tiro_x;
    int coord_tiro_y;
    int turnos = 0;

    system("cls");

    
    while(mostrarTabuleiro() != numero_de_navios){
        
        cout << "Insira as coordenadas X para o tiro: "<< endl;
            cin >> coord_tiro_x;
        cout << "Insira as coordenadas Y para o tiro: "<< endl;
            cin >> coord_tiro_y;
        
        tiros[coord_tiro_y][coord_tiro_x] = true;

        turnos++;
        system("cls");

    }

    cout << "VITORIA!" << endl;
    cout << "Acertou nos " << numero_de_navios << " alvos em " << turnos << " turnos!" << endl;






}