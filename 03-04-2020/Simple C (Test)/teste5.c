
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int n;
    int soma = 0;
    int maior = -1;
    int maior_posicao = -1;

    
    srand((unsigned)time(0));

    printf("Quantos numeros quer no vetor?\n");
    scanf("%d", &n);

    int vetor[n];

    for(int i = 0; i < n ; i++){

        vetor[i] = rand() % 50;

        //Caso maior nao exista atribuir um valor
        if(!maior)
            maior = vetor[i];

        //Adicionar ao print to vetor
        printf("%d", vetor[i]);
        if(i != n-1){
            printf(", ");
        }else{
            printf("\n");
        }
        //Se for maior que o atual maior, registar como novo maior
        if(vetor[i] > maior){
            maior = vetor[i];
            maior_posicao = i+1;
        }

        soma = soma + vetor[i];

    }

    printf("Soma: %d\n", soma);
    printf("Maior: %d\n", maior);
    printf("Posicao do maior: %d\n", maior_posicao);

}