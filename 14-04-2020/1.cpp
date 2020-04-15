#include <iostream>

using namespace std;

int main(){

    float metros;
    float decimetros;
    float centimetros;
    float milimetros;

    cout << "Insira o valor da medida em metros: " << endl;
    cin >> metros;cin.ignore(); 

    decimetros = metros * 10;
    centimetros = metros * 10 * 10;
    milimetros = metros * 10 * 10 * 10;

    cout << "Decimetros: " << decimetros << endl;
    cout << "Centimetros: " << centimetros << endl;
    cout << "Milimetros: " << milimetros << endl;
}