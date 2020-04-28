#include <iostream>

using namespace std;

float temp (float distancia, float velocidade){

    return distancia/velocidade;

}

float dist (float velocidade, float tempo){

    return velocidade * tempo;

}

float vel (float tempo, float distancia){

    return distancia/tempo;

}

int main(){

    float tempo;
    float distancia;
    float velocidade;
    int menu;

    cout << "1- Distancia" << endl;
    cout << "2- Tempo" << endl;
    cout << "3- Velocidade" << endl;

    cin >> menu;cin.ignore();

    switch(menu){
        case 1:
            cout << "Insira a velocidade (m/s): " << endl;
            cin >> velocidade; cin.ignore();
            cout << "Insira o tempo (segundos): " << endl;
            cin >> tempo; cin.ignore();
            cout << "d = " << dist(velocidade, tempo) << endl;
            break;


        case 2:
            cout << "Insira a velocidade (m/s): " << endl;
            cin >> velocidade; cin.ignore();
            cout << "Insira a distancia (metros): " << endl;
            cin >> distancia; cin.ignore();
            cout << "t = " << temp(distancia, velocidade) << endl;

            break;

        case 3:
            cout << "Insira a distancia (metros): " << endl;
            cin >> velocidade; cin.ignore();
            cout << "Insira o tempo (segundos): " << endl;
            cin >> tempo; cin.ignore();
            cout << "v = " << vel(tempo, distancia) << endl;
            break;
    }


}