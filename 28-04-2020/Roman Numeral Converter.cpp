#include <iostream>
#include <string>
#include <map>

using namespace std;

void int_to_roman(string input){
    
    string roman_numerals = "MDCLXVI#########";

    int index;

    if(stoi(input) >= 1000){
        index = 0;
    }else if(stoi(input) >= 100){

        index = 1;

    }else if(stoi(input) >= 10){

        index = 2;

    }else{
        index = 3;
    }

    for (char i : input){
        switch (i){
            case '4':

                if(roman_numerals[index-1]){
                    cout << roman_numerals[index*2];
                    cout << roman_numerals[index*2-1];

                }else{
                    cout << roman_numerals[index*2];
                }
                break;

            case '3':
                cout << roman_numerals[index*2];
            case '2':
                cout << roman_numerals[index*2];
            case '1':
                cout << roman_numerals[index*2];
                break;

            case '8':
                cout << roman_numerals[index*2-1];
                cout << roman_numerals[index*2];
                cout << roman_numerals[index*2];
                cout << roman_numerals[index*2];
                break;
            case '7':
                cout << roman_numerals[index*2-1];
                cout << roman_numerals[index*2];
                cout << roman_numerals[index*2];
                break;
            case '6':
                cout << roman_numerals[index*2-1];
                cout << roman_numerals[index*2];
                break;

            case '5':
                cout << roman_numerals[index*2-1];
                break;

            case '9':
                cout << roman_numerals[index*2];
                cout << roman_numerals[index*2-2];
                break;
            

        }
        index++;
    }

}

void roman_to_int(string input){

    int final = 0;
    int index;

    for(int i = 0; i < (input.size() / sizeof(char)); i++){
        input[i] = toupper(input[i]);
    }

    map<char, int> roman_numerals = {
    {'I', 1}, 
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}};

    for(int i = 0; i < input.length(); i++){
        if(roman_numerals[input[i+1]] <= roman_numerals[input[i]]){ 

        final = final + roman_numerals[input[i]]; 

        }else{

        final = final - roman_numerals[input[i]];  
        }
    }
    cout << final << endl;
}

int main(){

    string input;
    getline(cin, input);

    if(input[0] > '0' && input [0] <= '9'){

        cout << "A converter int to romana" << endl;
        int_to_roman(input);

    }else{

        roman_to_int(input);

    }

}