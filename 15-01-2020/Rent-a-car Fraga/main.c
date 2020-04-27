#include <stdio.h>

float calculo_preco_ilimitado(float tarifa_diaria , int dias, float seguro, int quer_seguro){

    return (tarifa_diaria*dias)+(seguro*quer_seguro);

}

float calculo_preco_diario(float tarifa_diaria, float tarifa_diaria_km, int dias, float seguro, int quer_seguro, float estimativa_km_diaria){

    return tarifa_diaria + (tarifa_diaria_km * (estimativa_km_diaria * dias)) + (seguro * quer_seguro);

}

int main(){

    int dias;
    int modo;
    int quer_seguro;
    float preco_final;
    char tarifa;
    float estimativa_km_diaria = 20.00;


    //Precos das tarifas_ilimitadas
    float tarifa_ilimitada_a = 27.50;
    float tarifa_ilimitada_b = 32.50;
    float tarifa_ilimitada_c = 37.50;
    float tarifa_ilimitada_d = 40.00;

    //Precos das tarifas diarias fixas
    float tarifa_diaria_a = 14.00;
    float tarifa_diaria_b = 17.00;
    float tarifa_diaria_c = 20.00;
    float tarifa_diaria_d = 22.00;
    //Precos das tarifas diarias por Km
    float tarifa_diaria_a_km = 0.17;
    float tarifa_diaria_b_km = 0.20;
    float tarifa_diaria_c_km = 0.25;
    float tarifa_diaria_d_km = 0.30;


    //Precos de seguro
    float seguroa = 6.50 ;
    float segurob = 7.50 ;
    float seguroc = 8.50 ;
    float segurod = 10.00; 

    //Pedir dias
    printf("Quantos dias quer alugar o veiculo? (Numero negativo para terminar)\n");
    scanf("%d", &dias);
    
    //Terminar se dias for negativo
    if (dias < 0){
        return 0;
    }

    //Pedir modo de aluguer
    printf("Selecione o modo de aluguer:\n");
    printf("1- Km Ilimitados\n");
    printf("2- Diaria + Km\n");
    scanf("%d" , &modo);

    //Pedir se quer seguro
    printf("Quer seguro?\n");
    printf("1-Sim\n");
    printf("2-Nao\n");
    scanf("%d" , &quer_seguro);

    //Passar para pseudo boolean para os calculos
    if(quer_seguro > 1){
        quer_seguro = 0;
    }



    //Switch para cada modo de aluguer
    switch(modo){

        case 1:
            //Tabela de precos para aluguer de Km Ilimitado
            printf("A- 27.50/dia -> Total: %.2f", calculo_preco_ilimitado(tarifa_ilimitada_a , dias , seguroa , quer_seguro));
            printf("B- 32.50/dia -> Total: %.2f", calculo_preco_ilimitado(tarifa_ilimitada_b , dias , segurob , quer_seguro));
            printf("C- 37.50/dia -> Total: %.2f", calculo_preco_ilimitado(tarifa_ilimitada_c , dias , seguroc , quer_seguro));
            printf("D- 40.00/dia -> Total: %.2f", calculo_preco_ilimitado(tarifa_ilimitada_d , dias , segurod , quer_seguro));
            scanf("%c", tarifa);
                switch(tarifa){

                    case 'a':
                    case 'A':
                    case '1':
                        preco_final = calculo_preco_ilimitado(tarifa_ilimitada_a , dias , seguroa , quer_seguro);
                        break;

                    case 'b':
                    case 'B':
                    case '2':
                        preco_final = calculo_preco_ilimitado(tarifa_ilimitada_b , dias , segurob , quer_seguro);
                        break;
                    
                    case 'c':
                    case 'C':
                    case '3':
                        preco_final = calculo_preco_ilimitado(tarifa_ilimitada_c , dias , seguroc , quer_seguro);
                        break;
                        
                    case 'd':
                    case 'D':
                    case '4':
                        preco_final = calculo_preco_ilimitado(tarifa_ilimitada_d , dias , segurod , quer_seguro);
                        break;

                }
            break;

        case 2:
            //Tabela de precos para aluguer Diario
            printf("A- %.2f/dia + %.2f/km -> Total Estimado: %.2f\n", tarifa_diaria_a , tarifa_diaria_a_km , calculo_preco_diario(tarifa_diaria_a , tarifa_diaria_a_km , dias , seguroa , quer_seguro , estimativa_km_diaria));
            printf("B- %.2f/dia + %.2f/km -> Total Estimado: %.2f\n", tarifa_diaria_b , tarifa_diaria_b_km , calculo_preco_diario(tarifa_diaria_b , tarifa_diaria_b_km , dias , seguroa , quer_seguro , estimativa_km_diaria));
            printf("C- %.2f/dia + %.2f/km -> Total Estimado: %.2f\n", tarifa_diaria_c , tarifa_diaria_c_km , calculo_preco_diario(tarifa_diaria_c , tarifa_diaria_c_km , dias , seguroa , quer_seguro , estimativa_km_diaria));
            printf("D- %.2f/dia + %.2f/km -> Total Estimado: %.2f\n", tarifa_diaria_d , tarifa_diaria_d_km , calculo_preco_diario(tarifa_diaria_d , tarifa_diaria_d_km , dias , seguroa , quer_seguro , estimativa_km_diaria));
            printf("Km estimados: %.2fKm/dia\n", estimativa_km_diaria);
            printf("NOTA: Seguro incluido nas estimacoes\n");
            scanf("%c", tarifa);

            switch(tarifa){

                    case 'a':
                    case 'A':
                    case '1':
                        preco_final = calculo_preco_diario(tarifa_diaria_a, tarifa_diaria_a_km , dias , seguroa , quer_seguro , estimativa_km_diaria);
                        break;

                    case 'b':
                    case 'B':
                    case '2':
                        preco_final = calculo_preco_diario(tarifa_diaria_b , tarifa_diaria_b_km, dias , seguroa , quer_seguro , estimativa_km_diaria);
                        break;

                    
                    case 'c':
                    case 'C':
                    case '3':
                        preco_final = calculo_preco_diario(tarifa_diaria_c , tarifa_diaria_c_km, dias , seguroa , quer_seguro , estimativa_km_diaria);
                        break;

                        
                    case 'd':
                    case 'D':
                    case '4':
                        preco_final = calculo_preco_diario(tarifa_diaria_d , tarifa_diaria_d_km, dias , seguroa , quer_seguro , estimativa_km_diaria);
                        break;

                }
            break;
        }

    printf("Numero de dias: %d" , dias);
    
    if(tarifa == 1){
        printf("Tarifa: Km Ilimitados");
    }else{
        printf("Tarifa: Diaria + Km");
    }
    
    printf("Categoria: %c" , tarifa);

    printf("Preco Final: %.2f" , preco_final);

}