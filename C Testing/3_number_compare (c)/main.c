#include <stdio.h>

int main(){

    const int constante = 15;
    int num1;
    int num2;
    printf("Insira o 1º numero:");
    scanf("%d", num1);

    printf("Insira o 2º numero:");
    scanf("%d", num2);

    if (num1 > num2 > constante){

        printf("%d é maior que %d e %d", num1,num2,constante);


    }else if (num2 > num1 > constante){

        printf("%d é maior que %d e %d", num2, num1,constante);

    }else if(constante > num2 > num1){

        printf("%d é maior que %d e %d", constante, num1,num2);

    }


}