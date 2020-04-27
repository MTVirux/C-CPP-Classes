#include <stdio.h>
#include <string.h>


void screenclear(){

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    

}



void show(const char* artigo, float preco, int quantidade){

    float valor = preco * quantidade;

    printf("%s - %.2f\n", artigo, valor);
    

}

int main(){

    int codigo;
    int quantidade;
    float preco;
    float final;
    char* artigo;

    
    while (codigo >= 100){

        screenclear();
        printf("Insira o codigo do produto:\n");
        scanf("%d", &codigo);
        printf("Insira a quantidade:\n");
        scanf("%d", &quantidade);
        
        switch(codigo){

            case 100:
            preco = preco + (2.5 * quantidade);
            show("Cachorro Quente", 2.5, quantidade);
            break;


            case 101:
            preco = preco + (3.5 * quantidade);
            show("Hamburger", 3.5, quantidade);
            break;

            case 102:
            preco = preco + (4 * quantidade);
            show("Cheeseburger", 4, quantidade);
            break;

            case 103:
            preco = preco + (3.74 * quantidade);
            show("Omelete", 3.75, quantidade);
            break;

            case 104:
            preco = preco + (7.5 * quantidade);
            show("Francesinha",7.5, quantidade);
            break;

            default:
            printf("-------------------------------------------------\n");
            printf("Total: %.2f", preco);
            break;
        }

    }

}