#include <stdio.h>
#include <string.h>

void show(const char* artigo, float preco, int quantidade){

    float valor = preco * quantidade;

    printf("%s - %.2f\n", artigo, valor);
    

}

int main(){

    int codigo;
    int quantidade;
    float preco;
    char* artigo;
    

    printf("Insira o codigo do produto:\n");
    scanf("%d", &codigo);
    printf("Insira a quantidade:\n");
    scanf("%d", &quantidade);
    
    switch(codigo){

        case 100:
        show("Cachorro Quente", 2.5, quantidade);
        break;


        case 101:
        preco = 3.5 * quantidade;
        show("Hamburger", 3.5, quantidade);
        break;

        case 102:
        preco = 4 * quantidade;
        show("Cheeseburger", 4, quantidade);
        break;

        case 103:
        show("Omelete", 3.75, quantidade);
        break;

        case 104:
        show("Francesinha",7.5, quantidade);
        break;

        default:
        printf("Codigo invalido, tente novamente\n");
        break;
    }

    main();

}