#include <iostream>
#include <string>

using namespace std;

int main(){

    string nome;
    float liquido;
    float bruto;
    float imposto;

    cout << "Insira o seu nome:"<< endl;
    cin >> nome; cin.ignore();
    cout << "Insira o seu salario bruto:" << endl;
    cin >> bruto; cin.ignore();

    if (liquido < 1000){

        imposto = 0.05;

    }else if (liquido >= 1000 && liquido <=5000){

        imposto = 0.11;

    }else{

        imposto = 0.35;

    }

    liquido = bruto - (bruto * imposto);

    cout << nome << " o seu salario bruto e: " << bruto << endl;
    cout << nome << " o seu imposto e: " << imposto  << endl;
    cout << nome << " o seu salario liquido e: " << liquido << endl;




}