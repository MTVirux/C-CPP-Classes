#include <iostream>

using namespace std;

int main(){

    int x;
    int y;

    cout << "Insira um valor para X" << endl;
    cin >> x; cin.ignore();

    cout << "Insira um valor para Y" << endl;
    cin >> y; cin.ignore();

    if(x == y) {

        cout << "Valores iguais" << endl;

    }else{

        for(int i = x; (x < y) ? i <= y : i >= y; (x < y) ? i++ : i--){

            cout << i;

            if(i != y)
                cout << ", ";
            

        }
    }
}