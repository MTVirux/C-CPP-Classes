#include <stdio.h>

int main(){

    char civil[256];
    float imposto;

    printf("Qual o seu estado civil?\n");
    scanf("%s" , &civil);

    if ( civil[0] == 's' || civil[0] == 'S'){
    printf("Solteiro\n");
    imposto = 0.25;
    
    }else if (civil[0] == 'c' || civil[0] == 'C'){
    printf("Casado\n");
    imposto = 0.19;

    }else if (civil[0] == 'd' || civil[0] == 'D'){
    printf("Divorciado\n");
    imposto = 0.22;

    }else if (civil[0] == 'v' || civil[0] == 'V'){
    printf("Viuvo\n");
    imposto = 0.18;

    }else{
    printf("ESTADO CIVIL INVALIDO");
    }

}