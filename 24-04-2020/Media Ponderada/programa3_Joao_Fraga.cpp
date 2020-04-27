#include <iostream>

using namespace std;

char nota_final(float media_ponderada){

    if(media_ponderada < 10){   
        return 'D';
    }else if(media_ponderada < 15){
        return 'C';
    }else if(media_ponderada < 19){
        return 'B';
    }else{
        return 'A'; 
    }

}

float media_ponderada (float nota1, float nota2, float nota3){

   return ((nota1/100)*35) + ((nota2/100)*20) + ((nota3/100)*45);

}

int main(){

    float nota1;
    float nota2;
    float nota3;

    cout << "Insira a primeira nota" << endl;
    cin >> nota1; cin.ignore();
    cout << "Insira a segunda nota" << endl;
    cin >> nota2; cin.ignore();
    cout << "Insira a terceira nota" << endl;
    cin >> nota3; cin.ignore();

    cout << "A sua nota final e: " << nota_final(media_ponderada(nota1,nota2,nota3))<< endl;


}