#include <stdio.h>

int main(){

    int counter = 0;
    int index = 0;
    char phrase[256] = "First Azorean Win";

    for (int i = 0; phrase[i] != '\0'; i++ ){

            counter++;

    }

    printf("Numero de characters: %d", counter);

}