#include <stdio.h>
#include <time.h>
#include <direct.h>



int main(){

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int ano = tm.tm_year + 1900;

    int idade=0;
    printf("Insira o seu ano de nascimento:");
    scanf("%d", &idade);

    idade = ano -idade;

    switch(idade){


        case 10:
        case 11:
        case 12:
        printf("A e B");
        break;
        
        case 13:
        case 14:
        case 15:
        printf("B e C");
        break;

        case 16:
        case 17:
        case 18:
        printf("C e D");
        break;

        default:
        printf("Nao e aceite em nenhuma equipa");
        break;

    }


}