#include <iostream>
using namespace std;

int main(){

    int x;
    int y;
    int* ptrx = &x;
    int* ptry = &y;

    x = 1;
    y = 2;

    cout << "Valor de X = " << x << endl;
    cout << "Valor de Y = " << y << endl;
    cout << "Endereco de X = " << &x << endl;
    cout << "Endereco de Y = " << &y << endl;
    cout << "Endereco de X guardado em ptrx = " << ptrx << endl;
    cout << "Endereco de U guardado em ptry = " << ptry << endl;
    cout << "Endereco pointer X = " << &ptrx << endl;
    cout << "Endereco pointer Y = " << &ptry << endl;
    cout << "Valor apontado por ptrx = " << *ptrx << endl;
    cout << "Valor apontado por ptry = " << *ptry << endl;

}