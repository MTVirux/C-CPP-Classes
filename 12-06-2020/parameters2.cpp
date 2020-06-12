#include <iostream>

using namespace std;


int main(int argc, char *argv[]) {
     
    float total = 0;
    for (int i = 1; i < argc; i++){

       try
       {
           total = stof(argv[i]) + total;
       }
       catch(const invalid_argument& e)
       {
            cerr << "Parametros introduzidos nao eram float" << endl;
            exit(EXIT_FAILURE);
       }
       catch(const out_of_range& e)
       {
            cerr << "Numero demasiado grande para ser representado como int" << endl;
            exit(EXIT_FAILURE);
       }
       

    }
    cout << total << endl;

}