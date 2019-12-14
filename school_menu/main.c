#include <stdio.h>

void menuformadores(){

printf("Pseudo menu de formadores");

}

void alunos(){

    int idade;
    char nome[300];
    printf("Insira o seu nome e idade:");
    printf("Nome:\n");
    scanf("%s", nome);
    printf("Idade:\n");
    scanf("%d", idade);

    printf("%s tem %d anos", nome, idade);

}

void cursos(){

    int curso;
    printf("Insira o numero do seu curso\n");
    scanf("%d", curso);

    switch(curso){
        case 1:
        printf("TIS\n");
        break;

        case 2 :
        printf("TIIGR\n");
        break;

        case 3 :
        printf("GRSI\n");
        break;
    }


}

void apoios(){

    int num1;
    int num2;
    int soma;
    printf("Insira 2 numeros:\n");
    printf("1o numero\n");
    scanf("%d", num1);
    printf("2o numero\n");
    scanf("%d", num2);

    soma = num1+num2;
    
    if (soma > 20){

        printf("Atingiu o limite");

    }


}

int main(){

    int resposta;

    printf("1-Formadores\n");
    printf("2-Alunos\n");
    printf("3-Cursos\n");
    printf("4-Apoios\n");
    printf("5-Sair\n");

    scanf("%d", resposta);


    switch(resposta){


        case 1:
        menuformadores();
        break;

        case 2:
        alunos();
        break;

        case 3:
        cursos();
        break;

        case 4:
        apoios();
        break;

        case 5:
        break;
    }



}