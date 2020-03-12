#include <iostream>
#include <string>

using namespace std;

int main()
{

    string estado;

    int a = 0;

    int count = 0;

    cout << "Insira a sigla do seu estado: " << endl;

    cin >> estado;
    cin.ignore();


    if(estado == "mg" || estado == "MG")
    {
        cout << "Mineiro" << endl;
    }
    else if (estado == "rj" || estado == "RJ")
    {
        cout << "Carioca" << endl;
    }
    else if (estado == "sp" || estado == "SP")
    {
        cout << "Paulista" << endl;
    }
    else
    {
        cout << "Outros Estados" << endl;
    }

}