#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{

    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    int year = aTime->tm_year + 1900;

    int anos;
    int meses;
    int dias;
    int ano_inicial;
    int anos_para_bissexto;
    int total;

    cout <<"Quantos anos tem?" << endl;
    cin >> anos;

    cout << "Quantos meses?" << endl;
    cin >> meses;

    cout << "Qua;ntos dias?" << endl;
    cin >> dias;

    ano_inicial = year - anos;

    anos_para_bissexto = ano_inicial % 4;

    // Adicionar dias consoante os anos e tendo em conta anos bissextos
    total = anos_para_bissexto -1 * 365 + 366;
    anos = anos - anos_para_bissexto;
    total = total + floor(anos % 4);


    // Adicionar dias baseado no mês
    switch (meses)
    {
        case 11:
        total = total + 30;
        case 10:
        total = total + 31;
        case 9:
        total = total + 30;
        case 8:
        total = total + 31;
        case 7:
        total = total + 31;
        case 6:
        total = total + 30;
        case 5:
        total = total + 31;
        case 4:
        total = total + 30;
        case 3:
        total = total + 31;
        case 2:
        total = total + 28;
        case 1:
        total = total + 31;

    }

    //Adicionar dias
    total = total + dias;

}