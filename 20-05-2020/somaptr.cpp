#include <iostream>
using namespace std;

int main(){

    int x;
    int y;
    cout << "Insira o primeiro numero:" << endl;
    cin >> x; cin.ignore();
    cout << "Insira o segundo numero:" << endl;
    cin >> y; cin.ignore();

    int* ptrx = &x;
    int* ptry = &y;
    int* soma = (int*)ptrx + (int*)ptry;
    
    cout << "A soma dos valores nos enderecos " << &x << " e " << &y << "sao: " << soma << endl;
    

}