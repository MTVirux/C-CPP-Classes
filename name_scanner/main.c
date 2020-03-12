#include <stdio.h>
#include <string.h>

int main(){

    //Nome Completo
    char nome_completo[512];

    //Input do nome
    printf("Insira o seu nome completo: ");
    scanf("%s", nome_completo);

    //Parametros do nome
    int nome_char_limit = 512;
    int nome_limit = 512;
    int numero_de_nomes = 0;

    //Consoantes e vogais
    int consoantes = 0;
    int vogais = 0;

    //Array multidimensional para store de nomes
    char nome[nome_limit][nome_char_limit];

    for(int i = 0; i < 512; i++){

        for(int x = 0; i < 512; i++){
            nome[i][x] = ' ';
        }

    }

    for(int i = 0; i < 512; i++)
    {
        strcpy(nome[i], strtok(nome_completo, " "));
        

    }

    //PRINT PRIMEIRO NOME
    printf("Primeiro nome: %s\n", nome[0]);

    //PRINT ULTIMO NOME
    for (int i = 0; i < 512; i++)
    {
        char* temp_pointer = nome[i];
        if(temp_pointer != NULL){
            numero_de_nomes++;
        }

    }

    printf("Ultimo nome: %s\n", nome[numero_de_nomes]);


    //Para cada nome ver cada letra
    for(int i = 0; i != numero_de_nomes; i++){

        for (int x = 0; x != '\0'; x++){

            switch (nome[i][x]){

                case ' ':
                    break;

                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    vogais ++;
                    break;

                default:
                    consoantes++;
                    break;



            }
        }

    }

    printf("Consoantes: %d\n", consoantes);
    printf("Vogais: %d\n", vogais);

    for (int i = 512; i >= 0; i--){
        
        if(nome[1][i] != ' ' && nome[1][i] != '\0'){
            printf("%c",nome[1][i]);
        }
    }


}