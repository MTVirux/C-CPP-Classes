#include <iostream>
#include <string>

using namespace std;

int main(){

    int empregados;
    int * pecas;
    char * sexo;
    int empregados_x = 0;
    int empregados_y = 0;
    int empregados_z = 0;
    int hx;
    int mx;
    int hy;
    int my;
    int hz;
    int mz;
    int total_phx = 0;
    int total_pmx = 0;
    int total_phy = 0;
    int total_pmy = 0;
    int total_phz = 0;
    int total_pmz = 0;
    int maior = 0;
    float salario_minimo = 550;
    float salarios_x;
    float salarios_y;
    float salarios_z;
    float total_salarios;




    cout << "Quantas pessoas trabalham na empresa?" << endl;
    cin >> empregados; cin.ignore();


    pecas = (int*) malloc(sizeof(int) * empregados);
    sexo = (char*) malloc(sizeof(char) * empregados);

    for (int i = 0; i < empregados ; i++){

        cout << "Quantas peças o empregado " << i << " produziu?" << endl;
        cin >> pecas[i]; cin.ignore();
        if(pecas[i] > maior)
            maior = pecas[i];

        cout << "Qual o sexo do empregado" << i << " ? ('h' para homem ou 'm' para mulher)"<< endl;
        cin >> sexo [i]; cin.ignore();
        
    }



    //Calculo por classes
    for (int i = 0; i < empregados; i++){

        if(pecas[i] <= 40){

            if(sexo[i] == 'h'){
                total_phx = total_phx + pecas[i];
                hx++;
            }else{
                total_pmx = total_pmx + pecas[i];
                mx++;
            }

        }else if(pecas[i] < 55){

            if(sexo[i] == 'h'){
                total_phy = total_phy + pecas[i];
                hy++;
            }else{
                total_pmy = total_pmy + pecas[i];
                my++;
            }

        }else{

            if(sexo[i] == 'h'){
                total_phz = total_phz + pecas[i];
                hz++;
            }else{
                total_pmz = total_pmz + pecas[i];
                mz++;
            }        
        }
        
    }

    //Calculo de salarios
    salarios_x = (hx+mx) * salario_minimo;
    salarios_y = ((hy+my) * salario_minimo) + (((total_phy + total_pmy) - (hy + my * 40)) * ((salario_minimo/100)* 5));
    salarios_z = ((hz+mz) * salario_minimo) + (((total_phz + total_phz) - (hz + mz * 40)) * ((salario_minimo/100)* 10));
    total_salarios = salarios_x + salarios_y + salarios_z;


    cout << "Total de pecas produzidas: "<< total_phx + total_phy + total_phz + total_pmx + total_pmy + total_pmz << endl << endl;
    cout << "Total de salarios a pagar: "<< total_salarios << endl;
    cout << "Media de pecas: " << endl << endl;
    cout << "Classe X: " << (total_phx + total_pmx) / (hx + mx) << endl;
    cout << "Classe X (Homens): " << total_phx / hx << endl;
    cout << "Classe X (Mulheres): " << total_pmx / hx << endl;
    cout << "--------------------------" << endl;
    cout << "Classe Y: " << (total_phy + total_pmy) / (hy + my) << endl;
    cout << "Classe Y (Homens): " << total_phy / hy  << endl;
    cout << "Classe Y (Mulheres): " << total_pmy /my << endl;
    cout << "--------------------------" << endl;
    cout << "Classe Z: " << (total_phz + total_pmz) / (hz + mz) << endl;
    cout << "Classe Z (Homens): " << total_phz / hz  << endl;
    cout << "Classe Z (Mulheres): " << total_pmz /mz << endl;
    cout << "--------------------------" << endl;
    cout << "Maior salaário a receber: " << salario_minimo + ((salario_minimo/100)*10) << endl;

}