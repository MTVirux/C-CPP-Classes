#define array_size 5

#include <iostream>
#include <vector>
#include <conio.h>
#include <bits/stdc++.h>


using namespace std;

int main(){

    int array[array_size];
    int element_size = sizeof(array) / sizeof(array[0]);
    int maior;

    for (int i = 0; i < array_size; i++){

        do{

            cout << "Insira um numero" << endl;
            cin >> array[i];cin.ignore();
            if(array[i] > 15){
                cout  << "O numero tem de ser igual ou inferior a 15" << endl;
            }

        }while(array[i] >= 15);


        }
        cout << "Selecione o tipo de sort que quer: " << endl;
        cout << endl;
        cout << "1- Ascendente " << endl;
        cout << "2- Descendente " << endl;

        if(_getch() == '1'){
            
            sort(array, array + element_size);

            for (int i : array)
                cout << i << " ";
            
            cout << endl;
            
        }else{

            sort(array, array + element_size, greater<int>());

            for (int i : array)
                cout << i << " ";
            
            cout << endl;
        


    }

}