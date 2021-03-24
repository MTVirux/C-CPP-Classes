#include <iostream>
#include <string>

using namespace std;

int main(){

    int quantidade = 0;
    int total = 0;

    cout << "Insira a quantidade de numeros que quer inserir: " << endl;
    scanf("%d", &quantidade);

    int grid[quantidade] = {-1};
    int counter = 0;

    for (int i = 0; i != quantidade; i++){
        grid[i] = -1;
    }

    for(int i = 0; i != quantidade; i++)
    {
        while (grid[i] < 0)
        {
            cout << "Introduza um numero de 0 a 10: " << endl;
            cin.clear();
            cin >> grid[i];
            if(grid[i] < 0)
            {
                cout << "Erro: Numero Invalido" << endl;
            }
        }
    }

    cout << endl << endl << endl << endl << endl;

    bool mostrou = false;
    for (int i : grid){

        total = total + i;
        counter++;
        if(total > 100 && mostrou == false)
        {
            cout << "Ultrapassou na posicao: " << counter << endl;
        }

    }

    if (total < 50)
    {
        cout << "Todos os numeros introduzidos: " << endl;
        for(int i : grid)
            cout << i << endl;
    }else if(total > 100){
        cout << "Rebentou com a escala" << endl;
    }else
    {
        cout << total << endl;
    }

}