#define MENOR_BRANCAS 0
#define MAIOR_BRANCAS 0
#define MENOR_CINZENTAS 1
#define MAIOR_CINZENTAS 9
#define CASAS_DECIMAIS 0
#define CASA_CANTO_INDEXES -1
#define X_MATRIX 5
#define Y_MATRIX 5

#include <iostream>
#include <vector>
#include <time.h>
#include <math.h>
#include <random>
#include <cfloat>
#include <cmath>

using namespace std;

const int x = X_MATRIX;
const int y = Y_MATRIX;
std::random_device rd;
std::mt19937 mt(rd());
uniform_int_distribution<int> distribution_brancas( MENOR_BRANCAS * pow(10, CASAS_DECIMAIS) , MAIOR_BRANCAS * pow(10, CASAS_DECIMAIS));
uniform_int_distribution<int> distribution_cinzentas( MENOR_CINZENTAS * pow(10, CASAS_DECIMAIS) , MAIOR_CINZENTAS * pow(10, CASAS_DECIMAIS)); 

float get_numero_characteres_maior (int maior){
    
    int counter = 1;

    while (maior > 0){
        maior = maior / 10;
        counter ++;
    }

    return counter + 1 + 3; // return numero de algarismos nas unidades + virgula + 3 casas decimais


}

float selecao_tipo_casa(int current_x, int current_y){

    if(current_x == 0 && current_y == 0) // casa do canto superior esquerdo
        return -1;
    
    if(current_x == 0) // linha de index
        return current_y-1;

    if(current_y == 0) // coluna de index
        return current_x-1;

    if(current_x < (x/2)+1 && current_y < (y/2)+1) //quadrado cinzento superior esquerdo
        return (distribution_cinzentas(mt) / pow(10,CASAS_DECIMAIS));

    if(current_x > (x/2) && current_y > (y/2)) //quadrado cizento inferior direito
        return (distribution_cinzentas(mt) / pow(10,CASAS_DECIMAIS));


    return distribution_brancas(mt) / pow(10,CASAS_DECIMAIS); // default (casas brancas)

}

int main(){

    float matrix[X_MATRIX][Y_MATRIX];
    int maior = 0;
    float numero_characteres_maior = 0;

    for (int i = 0; i < x; i++){

        for (int j = 0; j < y; j++){

            matrix[i][j] = selecao_tipo_casa(i,j);

            if(!maior)
                maior = matrix[i][j];

            if(matrix[i][j] > maior)
                maior = matrix[i][j];

        }

    }

    cout.precision(CASAS_DECIMAIS+1);

    for (int i = 0; i < x; i++){

        for (int j = 0; j < y; j++){

            if(matrix[i][j] == CASA_CANTO_INDEXES){ // Casa canto superior esquerdo

                for (int z = 0; z <= 4 ; z++){
                    cout << " ";
                }

            }else if(i == 0 || j == 0){ // indexes da tabela
                
                cout.precision(0);

                if(matrix[i][j] < 10){
                    for (int z = 0; z <= 1 ; z++){
                        cout << " ";
                    }

                    printf("%0.f", matrix[i][j]);

                    for (int z = 0; z <= 1; z++){
                        cout << " ";
                    }
                
                }else{
                    for (int z = 0; z <= 2; z++){
                        cout << " ";
                    }

                    printf("%0.f", matrix[i][j]);

                    for (int z = 0; z <= 2; z ++){
                        cout << " ";
                    }
                }

                
                
            }else if(matrix[i][j] < 10){
                printf("  %.0f  ", matrix[i][j]);
            }else if (matrix[i][j] < 100){
                printf("  %.0f  ", matrix[i][j]);
            }else{
                printf("  %.0f  ", matrix[i][j]);
            }

            cout << "|"; // separador de colunas
        }

        cout << "\n";

        for(int z = 0; z <= (Y_MATRIX * 6) ; z++) //separador de linhas
            printf("-");
        
        cout << "\n";

    }


}