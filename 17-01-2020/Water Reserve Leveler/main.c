#include <stdio.h>

// Metros cubicos por hora
#define saida_maxima 30
#define entrada_maxima 50
#define valvula_maxima 100

// Metros cubicos
#define reservatorio_a_maximo 1000
#define reservatorio_b_maximo 1000


int main(){

    float reservatorio_a;
    float reservatorio_b;
    float flow_entrada;
    float flow_saida;
    float flow_valvula;

    printf("Introduza quanta agua esta no reservatorio A:\n");
    scanf("%f", reservatorio_a);
    printf("Introduza quanta agua esta no reservatorio B:\n");
    scanf("%f", reservatorio_b);
    printf("Introduza qual o volume por hora que esta a saida (m3/h):");
    scanf("%f", flow_saida);  
    printf("Introduza qual o volume por hora que esta a entrada (m3/h):");
    scanf("%f", flow_entrada);

    if(flow_saida < flow_entrada && reservatorio_a >= reservatorio_b){

        flow_valvula = valvula_maxima;

    }else if (flow_saida/flow_entrada <= 0.1 && reservatorio_a >= reservatorio_b){

        flow_valvula = valvula_maxima / 2;
    
    }else if (flow_saida == flow_entrada && reservatorio_a > reservatorio_b){
        
        flow_valvula = valvula_maxima;

    }else if (flow_saida >= flow_entrada && reservatorio_b - reservatorio_a >= 250){

        flow_valvula = valvula_maxima/2;

    }else if (flow_saida < flow_entrada && reservatorio_a < reservatorio_b){

        flow_valvula = flow_saida;

    }else if (reservatorio_a > reservatorio_b && reservatorio_b/reservatorio_b_maximo <= 0.1){
        flow_valvula = valvula_maxima/10;
    }

}