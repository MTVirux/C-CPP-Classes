#include <iostream>

using namespace std;

int main(){

    int temp;
    int num1 = -1;
    int num2 = -1;
    int num3 = -1;
    int soma;

    const int limite_min = 10;
    const int limite_med = 20;
    const int limite_max = 30;

    while(num3 == -1){

        cout << "Insira um numero entre 1 e 10" << endl;
        cin >> temp; cin.ignore();

        if((temp <= 10) && (temp >= 0)){

            if(num1 == -1){

                num1 = temp;
                temp = -1;

            }else if(num2 == -1){

                num2 = temp;
                temp = -1;

            }else if(num3 == -1){

                num3 = temp;
            
            }
        }else{
            cout << "Numero invalido" << endl;
        }

    }

    soma = num1 + num2 + num3;
    
    if(soma < limite_min){

        cout << "Valor da soma e inferior a " << limite_min << endl;

    }else if(soma >= limite_min && soma < limite_med){

        cout << "Valor da soma esta entre " << limite_min << " e " << limite_med << endl;

    }else if(soma >= limite_med && soma <= limite_max){

        cout << "Valor da soma esta entre " << limite_med << " e " << limite_max << endl;

    }

}