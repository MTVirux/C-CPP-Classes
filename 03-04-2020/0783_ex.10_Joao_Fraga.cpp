#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Qual o numero que quer?" << endl;
    cin >> n; cin.ignore();

    int** vetorbi = new int*[n];


    for(int i = 0; i < n; i++){
        vetorbi[i] = new int[n];
    }

   for (int i = 0; i < n ; i++){
       for(int k = 0; k < n ; k++){
           vetorbi[i][k] = (i+1) * (k+1);
       }
   }
    cout << "---------------------------------" << endl;

    for (int i = 0; i < n; i++){
       for(int k = 0; k < n; k++){
           
           if(vetorbi[i][k] < 10){
               cout << " " << vetorbi[i][k] << " ";
           }else{
               cout << vetorbi[i][k] << " ";
           }
           if(k == n-1)
            cout << endl;
       }
   }
}