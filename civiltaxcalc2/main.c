#include <stdio.h>

int main(){

    char nome[300];
    char civil[300];
    float salario;
    float taxa;

    printf("Introduza o seu salário:\n");
    scanf("%f", &salario);
    printf("Introduza o seu estado civil: \n");
    scanf("%s", civil);

    printf("Nome: %s", nome);
    printf("Estado Civil: ");

    if ((civil[0] == 'S' || civil[0] == 's')){
        
        printf("Solteiro\n");

        if(salario <= 750){
            taxa = 0.15;
        }else{
            taxa = 0.19;
        }

    }else if (civil[0] == 'C' || civil[0] == 'c'){

        printf("Casado\n");

        if(salario <= 850){
            taxa = 0.12;
        }else{
            taxa = 0.16;
        }


    }else{
        printf("Erro: Estado Civil Invalido");
    }


    
    printf("Taxa: %f%%", taxa*100);
}