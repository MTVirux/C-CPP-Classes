#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


#define LINE_SIZE 256
#define NOME_SIZE 240
#define INDEX_SIZE 8

int string_to_int(char str[]){

    char string[INDEX_SIZE*2];
    int result;
    strcpy(string,str);

    sscanf(str,"%d", &result);

    return result;
}

int main(){

    //INITIAL DECLARATIONS
    char entry_line[LINE_SIZE] = "";
    char max_current_index_string[INDEX_SIZE] = "";
    char answer_buffer[LINE_SIZE];
    int int_answer_buffer;
    int max_current_index;

    //STRUCTURE OF ENTRY
    struct entry{
    int index_entry;
    char nome[NOME_SIZE];
    int idade;
    };

    //FILE DECLARATION AND OPENING
    FILE * ficheiro;
    ficheiro = fopen("database.txt" , "r");


    //OPEN FILE ERROR HANDLER
    if (ficheiro){

        printf("File found\n");
        fclose(ficheiro);
        

    }else{
        printf("Base de dados %s nao encontrada.\nA criar no diretorio presente...", "database.txt");
        ficheiro = fopen("database.txt" , "w+");
        fprintf(ficheiro,"\t\tDATABASE\t\t\n");
        fprintf(ficheiro,"0 - NOME - IDADE");
        fclose(ficheiro);

        
    }

    //CREATE NEW ENTRY
    struct entry new_entry;

    //USER INPUT FOR STRUCT INFO
    printf("Qual o nome que deseja adicionar?\n");
    scanf("%[^\n]%*c", answer_buffer); 
    strcpy(new_entry.nome, answer_buffer);
    printf("Qual a idade?\n");
    scanf("%d",&int_answer_buffer);
    new_entry.idade = int_answer_buffer;
    
    

    //GO TO LAST LINE
    ficheiro = fopen("database.txt", "r+");
    fseek(ficheiro,-1,SEEK_END);

    //CYCLE BACK TO 1ST CHAR OF LAST LINE
    
    char current_char = fgetc(ficheiro);
    while(current_char != '\n' && ftell(ficheiro) != 0){
        fseek(ficheiro,-2,SEEK_CUR); 
        current_char = fgetc(ficheiro);

    }

    //READ THE CURRENT MAX INDEX FROM THE FILE AND PORT IT TO A STRING
    size_t max_current_index_string_len= strlen(max_current_index_string);
    while(current_char != ' '){  
        max_current_index_string[max_current_index_string_len++] = current_char;
        max_current_index_string[max_current_index_string_len] = '\0';
        current_char = fgetc(ficheiro);
    }

    //GET INT FROM THE MAXIMUM CURRENT INDEX STRING
    max_current_index = string_to_int(max_current_index_string);


    printf("The max current index is: %d\n", max_current_index);
    max_current_index++;
    printf("Now adding entry number %d\n", max_current_index);

    //SET THE INDEX OF THE NEW ENTRY
    new_entry.index_entry = max_current_index;

    //ADD LINE TO THE END OF THE FILE
    fseek(ficheiro,0,SEEK_END);
    fprintf(ficheiro,"\n%d - %s - %d", new_entry.index_entry, new_entry.nome, new_entry.idade);

    fclose(ficheiro);

    

}
