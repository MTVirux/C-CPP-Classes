#include <iostream>
#include <string>

using namespace std;

int main()
{

    string nome;
    int count;

    getline(cin, nome);
    
    for (int i = 0; i != nome.length(); i++){

        if(nome[i] != ' ')
            count ++;

    }

    cout << "O nome tem: " << count << "caracteres (sem espacos)" << endl;

}
