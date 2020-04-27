#include <stdio.h>

int main(){

    int n;
    int count;
    int num;
    int menor;

    printf("Quantos numeros quer inserir?\n");
    scanf("%d", &n);

    for (count = 1; count <= n; count++){
        //Pedir numero
        printf("Insira um numero: ");
        scanf("%d", &num);

        //Se menor nao existir, atribuir o valor do utilizador
        if(!menor)
            menor = num;

        if(num < menor)
            menor = num;
    }

    printf("Numero menor inserido foi: %d", menor);

}