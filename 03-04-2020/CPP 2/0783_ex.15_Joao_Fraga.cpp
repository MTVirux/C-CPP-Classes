#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

string feriado(){

    return "  F";
}

string nome_do_mes(int mes){

    switch (mes){
        case 1:
            return "Janeiro";
        case 2:
            return "Fevereiro";
        case 3:
            return "Marco";
        case 4:
            return "Abril";
        case 5:
            return "Maio";
        case 6:
            return "Junho";
        case 7:
            return "Julho";
        case 8:
            return "Agosto";
        case 9:
            return "Setembro";
        case 10:
            return "Outubro";
        case 11:
            return "Novembro";
        case 12:
            return "Dezembro";
    }
    return "";

}

int dia_da_semana(int dia, int mes, int ano){

    if(mes == 1){
        mes = 13;
        ano = ano - 1;
    }else if(mes == 2){
        mes = 14;
        ano = ano -1;
    }

    return ((dia + (2*mes) + (3*(mes+1)/5) + ano + (ano/4) - (ano/100) + (ano/400) + 2)) % 7;
}

int main(){

    vector<int> dom;
    vector<int> seg;
    vector<int> ter;
    vector<int> qua;
    vector<int> qui;
    vector<int> sex;
    vector<int> sab;
    vector<string> calendario;
    int jan = 31;
    int mar = 31;
    int abr = 30;
    int mai = 31;
    int jun = 30;
    int jul = 31;
    int ago = 31;
    int set = 30;
    int out = 31;
    int nov = 30;
    int dez = 31;
    int dias_pascoa[21*2]{
        
        3,27,
        4,14,
        4,3,
        3,23,
        4,11,
        3,31,
        4,18,
        4,8,
        3,28,
        4,16,
        4,5,
        3,25,
        4,13,
        4,2,
        3,22,
        4,10,
        3,30,
        4,17,
        4,7,
        3,27,
        4,2
        
    };

    
    int ano;

    cout << "Insira um ano:" << endl;
    cin >> ano; cin.ignore();


    cout << "Insira um mes:" << endl;
    int mes; 
    cin >> mes; cin.ignore();

    int fev = (ano % 4 == 0) ? 29 : 28;
    int golden_number = (ano - (floor(ano/19)*19)) +1;
    int mes_pascoa = golden_number <= 19 ? dias_pascoa[golden_number*2] : 4;
    int pascoa = golden_number <= 19 ? dias_pascoa[(golden_number*2)+1] : 2;
    int mes_carnaval = ((48 - pascoa) > 31) ? mes_pascoa - 2 : mes_pascoa - 1;
    int dia_carnaval = ((48 - pascoa) > 31) ? 48 - pascoa - 31 : 48 - pascoa;

    if(mes_carnaval == 2 && (fev == 29 && dia_carnaval > 29)){
        dia_carnaval = dia_carnaval - 2;
    }else if(mes_carnaval == 2 && (fev == 28 && dia_carnaval > 28)){
        dia_carnaval = dia_carnaval -3;
    }

    int dias_do_mes;
    int primeiro_dia;

    switch(mes){
        case 1:
            dias_do_mes = jan;
            break;
        case 2:
            dias_do_mes = fev;
            break;
        case 3:
            dias_do_mes = mar;
            break;
        case 4:
            dias_do_mes = abr;
            break;
        case 5:
            dias_do_mes = mai;
            break;
        case 6:
            dias_do_mes = jun;
            break;
        case 7:
            dias_do_mes = jul;
            break;
        case 8:
            dias_do_mes = ago;
            break;
        case 9:
            dias_do_mes = set;
            break;
        case 10:
            dias_do_mes = out;
            break;
        case 11:
            dias_do_mes = nov;
            break;
        case 12:
            dias_do_mes = dez;
            break;
    }

    for(int i = 1; i <= dias_do_mes; i++){
        if(i == 1){
            primeiro_dia = dia_da_semana(i, mes, ano);

            calendario.push_back("DOM");
            calendario.push_back("   ");
            calendario.push_back("SEG");
            calendario.push_back("   ");
            calendario.push_back("TER");
            calendario.push_back("   ");
            calendario.push_back("QUA");
            calendario.push_back("   ");
            calendario.push_back("QUI");
            calendario.push_back("   ");
            calendario.push_back("SEX");
            calendario.push_back("   ");
            calendario.push_back("SAB");
            calendario.push_back("   ");

            switch(primeiro_dia){
                
                case 2:
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    break;
                case 3:
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    break;
                case 4:
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    break;
                case 5:
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    break;
                case 6:
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                     break;
                case 0:
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    calendario.push_back("   ");
                    break;
            }
        }

            string text_dia;

            if((mes == mes_pascoa) && (i = pascoa)){ // PASCOA
                
                text_dia = feriado();

            }else if(mes == 1 && i == 1){ // FERIADOS DE JANEIRO
                
                    text_dia = feriado();

            }else if(mes == 12 && i == 25){ //FERIADOS DE DEZEMBRO

                    text_dia = feriado();

            }else{
                if(i < 10){ //ESPAÇOS PARA FORMATAÇÃO DO CALENDÁRIO
                    text_dia.append("  ");
                }else{
                    text_dia.append(" ");
                }
                text_dia.append(to_string(i));
                
            }
            calendario.push_back(text_dia);
            calendario.push_back("   ");

        }

        //HEADER
        cout << "------------------------------------------" << endl;
        string header = nome_do_mes(mes) + " - " + to_string(ano);
        for (int i = 0; i <= ((39-header.size())/2); i++){
            cout << " ";
        }
        cout << header;
        for (int i = 0; i <= ((39-header.size())/2); i++){
            cout << " ";
        }
        cout << endl;

        //PRINT CALENDAR
        int counter = 0;
        for (string k: calendario){
            if(counter % 14 == 0){
                cout << endl;
                counter = 0;
        }
            cout << k;
            counter ++;
        }

        cout << endl << "------------------------------------------" << endl;
    
    }

    