#include <iostream>
#include <string>

using namespace std;


char escalao(int idade){

    if(idade <= 10){

        return 'A';

    }else if(idade <= 15){

        return 'B';

    }else if(idade <= 17){

        return 'C';

    }else{

        return 'D';

    }

}


int main(){

    string input = "-1";

    while(stoi(input) < 0 || stoi(input) == __INT_MAX__){
        cout<< "Qual a idade do utilizador?"<< endl;
        getline(cin, input);

        if(input.compare("sair") == 0)     
            exit(0);

        for(char i : input)
            if( i > '9' || i < '0')
                input = "-1";
        

    }


    if(stoi(input) < 7){

        cout << "Sem vagas para idades inferiores" << endl;

    }else{

        cout << "Pertencera ao escalao " << escalao(stoi(input)) << endl;

    }

}