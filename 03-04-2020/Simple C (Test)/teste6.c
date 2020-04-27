#include <stdio.h>

int main(){

    int num;
    int temp;
    int maior;
    int menor;
    int posicao_menor;

    while(num){    
        printf("Insira quantos valores quer inserir (De 0 a 5 ou de 10 a 15):");
        scanf("%d", &temp);

        if(((temp >= 0) && (temp <= 5)) || ((temp >= 10) && (temp <= 15))){
            num = temp;
            break;
        }
    }

    int mynums[num];

    for (int i = 0; i < num; i++){
        mynums[i] = 0;
        while(mynums[i] == 0){
            printf("Insere:");
            scanf("%d", &temp);
            if((temp > 10) && (temp < 100)){
                mynums[i] = temp;
            if(temp > maior)
                maior = temp;
            }
        }
    }

    for(int i = 0; i < num; i++){
        for(int x = 0; x < num; x++){
            
            if(mynums[x] < menor){
                menor = mynums[x];
                posicao_menor = x;
            }

        }
        mynums[posicao_menor] = maior+1;
        printf("%d\n", menor);
        menor = maior+1;
    }
}