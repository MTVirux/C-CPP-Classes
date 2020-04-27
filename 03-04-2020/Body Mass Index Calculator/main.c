#include <stdio.h>

int main(){

    float imc;

    printf("Insira o IMC:");
    scanf("%f", &imc);

    if(imc < 18.5){
        printf("Abaixo do Peso");

    }else if(imc >= 18.6 && imc <= 24.9){
        printf("Saudavel");

    }else if(imc >= 25 && imc <= 29.9){
        printf("Peso em Excesso");

    }else if(imc >=30 && imc <= 34.9){
        printf("Obesidade Grau I");

    }else if(imc >= 35.0 && imc <= 39.9){
        printf("Obesidade Grau II");

    }else{
        printf("Obesidade Grau III");

    }

    printf("\n\n\n");
    

    main();


}