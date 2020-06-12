#include <iostream>

using namespace std;

int main(){

    
    struct rectangulos{
        int x;
        int y;
    };

    int numero_de_rectangulos;

    cout << "Quantos rectângulos deseja inserir?" << endl;
    cin >> numero_de_rectangulos; cin.ignore();

    struct rectangulos rectangulo[numero_de_rectangulos];

    for (int i = 0; i < numero_de_rectangulos; i++){

        cout << "Insira a altura para o rectangulo " << i+1 << ": "<< endl;
        cin >> rectangulo[i].x; cin.ignore();

        cout << "Insira a largura para o rectangulo " << i+1 << ": " << endl;
        cin >> rectangulo[i].y; cin.ignore();

    }

    cout << "---------------------------------------------" << endl;


    for (int i = 0; i < numero_de_rectangulos; i++){
        cout << "Area do rectangulo " << i+1 << ": "<< rectangulo[i].x * rectangulo[i].y << endl;
    }

}