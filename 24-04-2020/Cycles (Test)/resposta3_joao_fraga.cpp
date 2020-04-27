#include <iostream>

using namespace std;

int main(){

    int nivel_prof;
    float horas;
    float salario_bruto;
    float salario_liquido;

    cout << "Qual o nivel do professor?" << endl;
    cin >> nivel_prof;cin.ignore();
    cout << "Quantas horas dadas no mes?" << endl;
    cin >> horas;cin.ignore();

    switch(nivel_prof){

        case 1:
            salario_bruto = horas * 10;
            break;
        case 2:
            salario_bruto = horas * 30;
            break;
        case 3:
            salario_bruto = horas * 40;
            break;
        default:
            cout << "Nivel invalido, a assumir como nivel 1" << endl;
            salario_bruto = horas * 10;
            break;

    }

    if(salario_bruto < 250){
        salario_liquido = salario_bruto - ((salario_bruto/100)*5);

    }else if(salario_bruto < 350){

        salario_liquido = salario_bruto - ((salario_bruto/100)*10);

    }else if(salario_bruto < 500){

        salario_liquido = salario_bruto - ((salario_bruto/100)*11);

    }else if(salario_bruto > 500){
        
        salario_liquido = salario_bruto - ((salario_bruto/100)*13);

    }

    cout << "Nivel: "<< nivel_prof << endl;
    cout << "Horas: "<< horas << endl;
    cout << "Salario Bruto: " << salario_bruto << endl;
    cout << "Salario Liquido: "<< salario_liquido << endl;



}