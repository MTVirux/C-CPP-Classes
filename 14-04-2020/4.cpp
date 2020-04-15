#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double farenheit;
    int farenheiti;

    cout << "Insira a temperatura em Farenheit: " << endl;
    cin >> farenheit;cin.ignore();
    farenheiti = farenheit;
    
    cout << farenheit << " " << farenheiti << endl;

    double celsius = (farenheit-32.0) * (5.0/9.0);
    double celsiusi = (farenheiti-32) * (5/9);

    cout << celsius << " " << celsiusi << endl;

    cout << "Farenheit (double): " << celsius << endl;
    cout << "Farenheit (int): " << celsiusi << endl;

}