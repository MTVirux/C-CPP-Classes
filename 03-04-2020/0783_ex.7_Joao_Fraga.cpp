#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main(){

   int x;
   int y;
   srand(time(NULL));

   cout << "Insira um valor para X: " << endl;
   cin >> x; cin.ignore();
   cout << "Insira um valor para Y: " << endl;
   cin >> y;cin.ignore();

   int** vetorbi = new int*[x];

    for(int i = 0; i < x; i++){
        vetorbi[i] = new int[y];
    }

   for (int i = 0; i < x ; i++){
       for(int k = 0; k < y ; k++){
           vetorbi[i][k] = (rand() % 15) + 1;
       }
   }

   cout << "---------------------------------" << endl;

   for (int i = 0; i < x; i++){
       for(int k = 0; k < y; k++){
           
           if(vetorbi[i][k] < 10){
               cout << " " << vetorbi[i][k] << " ";
           }else{
               cout << vetorbi[i][k] << " ";
           }
           if(k == y-1)
            cout << endl;
       }
   }
}