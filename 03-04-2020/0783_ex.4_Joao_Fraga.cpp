#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main()
{
    srand(time(NULL));
    
    int elementos;
    int total = 0;

    cout << "Qual o tamanho do array?" << endl;
    cin >> elementos; cin.ignore();

    int * vector;

    vector = (int*) malloc(sizeof(int) * elementos);
    
    for(int i = 0; i < elementos ; i++){
        vector[i] = (rand() % 10) + 10;
        cout << vector[i];
        total = total + vector[i];

        if (i != (elementos - 1)){
            cout  << " - ";
        }else {
            cout << endl;
        }
            
    }

    if (total > 100) {
        cout << "Total: " << total - 100 << endl;
    }

}