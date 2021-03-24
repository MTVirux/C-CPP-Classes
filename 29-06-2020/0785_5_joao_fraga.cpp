#include <iostream>

using namespace std;


int main(int argc, char *argv[]) {
     
    for (int i = 1; i < 4; i++){

        if(argv[i])
            cout << argv[i] << endl;

    }

}
