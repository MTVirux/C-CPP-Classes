#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){

    int numero = 0;

    while(numero > 10 || numero < 1 || numero % 2 == 0){
    printf("Insira qual o numero impar que deseja (entre 1 e 10): ");
    scanf("%d", &numero);
    }

    char * linha; //char linha[numero]      em Linux
    linha = (char*) malloc(sizeof(char) * numero *2); //opcional dependendo da linha anterior


    printf("--------------------------------\n");


    for (int i = 0; i <= numero; i++ ){

        linha[i*2] = i + '0';
        linha[i*2+1] = ' ';

    }


    for (int i = 0; i <= floor(numero/2); i++){
    
        linha[i*2] = ' ';
        linha[i*2+1] = ' ';
        linha[strlen(linha)- 1 - i * 2] = ' ';
        linha[strlen(linha)- 1 - i * 2 -1] = ' ';
        printf("%s\n", linha);


    }

    

}