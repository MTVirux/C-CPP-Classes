#include <iostream>

using namespace std;

float aumento_preco(float preco, float percentagem){

    return preco + ((preco / 100) * percentagem);

}

int main(){

    float preco;

    cout << "Introduza um valor para o preco: " << endl;
    cin >> preco; cin.ignore();

    cout << "Preco: " << preco << endl;

    if(preco < 99.99){

        cout << "Percentagem de aumento: 15%" << endl;
        cout << "Preco final : " << aumento_preco(preco, 15) << endl;

    }else if(preco > 100.01){

        cout << "Percentagem de aumento: 5%" << endl;
        cout << "Preco final : " << aumento_preco(preco, 5) << endl;

    }else{

        cout << "Percentagem de aumento: 10%" << endl;
        cout << "Preco final : " << aumento_preco(preco, 10) << endl;

    }

}