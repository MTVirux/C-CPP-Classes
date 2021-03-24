#include <stdio.h>

int main(){

    char civil[300];

    printf("Insira o seu estado civil:\n");
    scanf("%s", civil);

    switch (civil[0])
    {
        case 's':
        case 'S':
            printf("Solteiro");
            break;

        case 'c':
        case 'C':
            printf("Casado");
            break;
            

        case 'd':
        case 'D':
            printf("Divorciado");
            break;


        case 'v':
        case 'V':
            printf("Viuvo");
            break;

        case 'u':
        case 'U':
            printf("Uniao");
            break;

        default:
            printf("ERRO");
    }



}