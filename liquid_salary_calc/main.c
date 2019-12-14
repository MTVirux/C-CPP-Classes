#include <stdio.h>

int main(){

    //Declare variables
    char nome[256];
    float bruto = 0;
    float liquido = 0;
    float imposto = 0;
    

    //Ask for name and salary
    printf("Por favor introduza o seu nome:\n");
    scanf ("%s", nome);
    printf("Por favor introduza o seu salario bruto:\n");
    scanf("%f", &bruto);

    //Calculate tax bracket
    if(bruto < 1000){

        imposto = 0.05;

    }else if (bruto <= 4000 && bruto >= 1000){

        imposto = 0.11;

    }else{

        imposto = 0.35;

    }

    //Calculate liquid
    liquido = bruto - (bruto * imposto);

    //Show result
    printf("%s seu salario liquido e: %0.2f" , nome, liquido);

}