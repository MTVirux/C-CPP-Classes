#include <iostream>
#include <time.h>

using namespace std;

int main(){
    
    int arraya[5];
    int arrayb[5];

    srand(time(NULL));

    for (int i = 0; i < 5; i++){
        arraya[i]= rand()%10;
        arrayb[i]= rand()%10;

    }

    for (int i = 0; i < 5; i++){

        cout << arraya[i] << " + " << arrayb[i] << " = " << arraya[i] + arrayb[i] << endl;

    }

}