#include <iostream>

using namespace std;

int main(){

    string nome;
    string civil;
    float imposto;

    cout<< "Qual o seu nome?" << endl;
    cin >> nome;cin.ignore();
    cout << "Qual o seu estado civil?" << endl;
    cin >> civil;cin.ignore();

    if ( civil[0] == 's' || civil[0] == 'S'){
        imposto = 0.25;
        civil = "Solteiro";
        
    }else if (civil[0] == 'c' || civil[0] == 'C'){
        civil = "Casado";
        imposto = 0.19;

    }else if (civil[0] == 'u' || civil[0] == 'U'){
        civil ="Uniao";
        imposto = 0.22;

    }else if (civil[0] == 'd' || civil[0] == 'D'){
        civil = "Divorciado";
        imposto = 0.18;

    }else{
        civil = "Outro";
        imposto = 0.09;
    }

    cout << "Nome: " << nome << endl;
    cout << "Estado Civil: " << civil << endl;
    cout << "Taxa: " << imposto*100<< "%" << endl;

}