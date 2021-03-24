#include <stdio.h>

int main(){

    char nome[256];
    char civil[256];
    float imposto;


    printf("Qual o seu nome?\n");
    scanf("%s" , nome);
    printf("Qual o seu estado civil?\n");
    scanf("%s" , &civil);

    printf("Nome %s\n", nome);
    printf("Estado Civil: ");

    if ( civil[0] == 's' || civil[0] == 'S'){
    printf("Solteiro\n");
    imposto = 0.25;
    
    }else if (civil[0] == 'c' || civil[0] == 'C'){
    printf("Casado\n");
    imposto = 0.19;

    }else if (civil[0] == 'u' || civil[0] == 'U'){
    printf("Uniao\n");
    imposto = 0.22;

    }else if (civil[0] == 'd' || civil[0] == 'D'){
    printf("Divorciado\n");
    imposto = 0.18;

    }else{
    printf("Outro\n");
    imposto = 0.09;
    }

    printf("Taxa: %0.2f%%", imposto * 100 );

}