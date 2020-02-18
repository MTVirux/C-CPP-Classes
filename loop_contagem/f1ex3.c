#include <stdio.h>

int main(){

    int range = 10;

    for (int i = range; i != 0; i--){

        if(i == range){

            printf("********************\nNumeros entre 1 e 10\n********************\n");

        }

        printf("%d\n", range - i + 1);

        if(i == 1){

            printf("********************\n");

        }

    }
}