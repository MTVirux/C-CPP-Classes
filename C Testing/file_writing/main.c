#include <stdio.h>

int main(){

    FILE * ficheiro;
    char nome[300];

    ficheiro = fopen("output.txt","w");

    fprintf(ficheiro, "Hello World!");
    fclose(ficheiro);
    return 0;
}

