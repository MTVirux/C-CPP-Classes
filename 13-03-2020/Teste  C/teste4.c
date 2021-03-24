#include <stdio.h>

int main(){
    int n;
    int count;

    //As variaveis Pares e Impares inicializadas a 1 para que possam ser imediatamente multiplicadas por outros numeros.
    //Caso contrario o resultado seria sempre 0.
    int pares= 1;
    int impares= 1;

    printf("Quantos numeros?\n");
    scanf("%d", &n);

    for(count = 1; count < n; count++){

        if(count % 2 == 0){
            pares = pares * count;
        }else{
            impares = impares * count;
        }

    }

    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);
}