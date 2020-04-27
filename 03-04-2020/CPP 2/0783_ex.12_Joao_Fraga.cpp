#include <iostream>

using namespace std;

int main(){
    int n;
    int count;
    int num;
    int menor;

    cout << "Quantos numeros quer inserir?" << endl;
    cin >> n; cin.ignore();

    cout << "Insira os numeros: " << endl;

    for(int count = 0; count < n ; count++){

        cin >> num; cin.ignore();
        if(!(menor)){
            menor = num;
        }
        if(num < menor){
            menor = num;
        }
    }

    cout << "O menor numero inserido foi " <<  menor << endl;
}