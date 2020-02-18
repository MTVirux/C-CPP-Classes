#include <stdio.h>

int main(){

    int vector_lenght = 10;
    int vector[vector_lenght];
    int maior;

    for (int i = 0; i < vector_lenght; i++){

        scanf("%d", &vector[i]);

        if (vector[i] > maior){

            maior = vector[i];

        }

    }

    printf("O maior e: %d", maior);


}