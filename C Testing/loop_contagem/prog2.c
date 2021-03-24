#include <stdio.h>
#include <math.h>

int main(){

    int vector[20];
    int counter = 0;

    srand();

    for (int i = 0; i<20; i++){

        vector[i] = rand() % 30;

    }

    for (int i = 0; i < 20; i++){

        if (vector[i] >= 10 && vector[i] <= 20){

            counter ++;

        }

    }

    printf("Counter: %d", counter);
}