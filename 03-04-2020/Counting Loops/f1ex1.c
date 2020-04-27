#include <stdio.h>

int main(){

    int counter = 0;
    int counter_n = 0;
    int index = 0;
    char phrase[256] = "apenas um teste realizado no dia 18 fevereiro de 2020.";

    while (phrase[index] != '\0'){

        if (phrase[index] >= 48 && phrase[index] <=57){
            counter_n++;
        }else{
            counter ++;
        }
        index++;
    }

    printf("Numero de characters: %d \n ", counter);
    printf("Numero de characters numericos %d \n", counter_n);

}