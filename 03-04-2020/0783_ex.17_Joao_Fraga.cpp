#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    float n1;
    float n2;
    float n3;
    float nota_final;

    cout << "Insira a nota 1 do aluno: " << endl;
    cin >> n1;
    cout << "Insira a nota 2 do aluno: " << endl;
    cin >> n2;
    cout << "Insira a nota 3 do aluno: " << endl;
    cin >> n3;

    nota_final = (n1*0.20) + (n2*0.35) + (n3*0.45);

    if(nota_final > 10){
        cout << "A nota final e superior a 10, dados invalidos" << endl;
        exit(EXIT_SUCCESS);
    }

    cout << endl << endl << endl << endl;
    cout << "A nota final de : " << nota_final << " equivale a: "<< endl;

    if(nota_final >= 9){

        cout << "A" << endl;

    }else if (nota_final >= 7.5){

        cout << "B" << endl;

    }else if (nota_final >= 6){

        cout << "C" << endl;

    }else if (nota_final >= 4){

        cout << "D" << endl;

    }else if (nota_final < 4){

        cout << "E" << endl;

    }

}