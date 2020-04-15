#include <iostream>

using namespace std;

int main(){

    int decimal;
    

    cout << "Insira um valor decimal: " << endl;
    cin >> decimal;cin.ignore();
    
    cout << hex << decimal << endl;
    cout << oct << decimal << endl;


}