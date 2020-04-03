#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

int main(){

    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    int year = aTime->tm_year + 1900;

    int dias;
    int meses;
    int anos;

    int janeiro = 31;
    int fevereiro;

    if((year % 4) == 0){
        fevereiro = janeiro + 29;
    }else{
        fevereiro = janeiro + 28;
    }
    
    int marco = 62 + fevereiro;
    int abril = 92 + fevereiro;
    int maio = 123 + fevereiro;
    int junho = 153 + fevereiro;
    int julho = 184 + fevereiro;
    int agosto = 215 + fevereiro;
    int setembro = 245 + fevereiro;
    int outubro = 276 + fevereiro;
    int novembro = 306 + fevereiro;
    int dezembro = 337 + fevereiro;


    cout << "Qual a sua idade em dias?" << endl;
    cin >> dias; cin.ignore();

    //Quantos anos esses dias formam
    anos = dias / 365;
    dias = dias - (anos * 365 + floor(anos / 4));
    

    //Retirar meses
    if(dias < janeiro)
    {    
        meses = 1;
        
    }else if(dias < fevereiro){

        meses = 2;
        dias = dias - janeiro;

    }else if(dias < marco){

        meses = 3;
        dias = dias - fevereiro;
        
    }else if(dias < abril){

        meses = 4;
        dias = dias - marco;
        
    }else if(dias < maio){

        meses = 5;
        dias = dias - abril;

        
    }else if (dias < junho){

        meses = 6;
        dias = dias - maio;

        
    }else if (dias < julho){

        meses = 7;
        dias = dias - junho;

        
    }else if (dias < agosto){

        meses = 8;
        dias = dias - julho;

        
    }else if (dias < setembro){

        meses = 9;
        dias = dias - agosto;
        
    }else if (dias < outubro){

        meses = 10;
        dias = dias - setembro;
        
    }else if (dias < novembro){

        meses = 11;
        dias = dias - outubro;
        
    }else if (dias < dezembro){

        meses = 12;
        dias = dias - novembro;
        
    }


    cout << "Anos: " << anos << endl;

    cout << "Meses: " << meses << endl;

    cout << "Dias : " << dias << endl;

}