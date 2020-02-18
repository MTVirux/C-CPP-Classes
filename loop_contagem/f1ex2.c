#include <stdio.h>

int main(){

    //Define array lenght
    int vector_lenght;
    //Initialize array lenght variable
    printf("Quantos ints quer no array?");
    scanf("%d" , &vector_lenght);

    //Define array
    int vector[vector_lenght];
    int maior = 0;

    printf("%d")

    for (int i = 0; i < vector_lenght; i++){

        scanf("%d", &vector[i]);

        if (vector[i] > maior){

            maior = vector[i];

        }

    }

    printf("***********\n");

    for (int i = 0; i < vector_lenght; i++){

        printf("%d\n", vector[i]);
    }

    printf("\nO maior e: %d", maior);


}