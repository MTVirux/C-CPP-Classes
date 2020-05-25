#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main(){

    char character;

    cout << "Insira um character" << endl;
    cin >> character; cin.ignore();

    bool isalnumv = isalnum(character);
    bool isalphav = isalpha(character);
    bool iscntrlv = iscntrl(character);
    bool isdigitv = isdigit(character);
    bool isgraphv = isgraph(character);
    bool islowerv = islower(character);
    bool isprintv = isprint(character);
    bool ispunctv = ispunct(character);
    bool isspacev = isspace(character);
    bool isupperv = isupper(character);
    bool isxdigitv = isxdigit(character);
    char tolowerv = tolower(character);
    char toupperv = toupper(character);

    cout << "E alfanumerico: " << (isalphav ? "SIM" : "NAO") << endl; 
    cout << "E character de controle: " << (iscntrlv ? "SIM" : "NAO") << endl;
    cout << "E um digito: " << (isdigitv ? "SIM" : "NAO") << endl;
    cout << "Tem representacao grafica: " << (isgraphv ? "SIM" : "NAO") << endl;
    cout << "E minuscula: " << (islowerv ? "SIM" : "NAO") << endl;
    cout << "E um character que pode ser printed: " << (isprintv ? "SIM" : "NAO") << endl;
    cout << "E pontuacao: " << (ispunctv ? "SIM" : "NAO") << endl;
    cout << "E o character de espaco: " << (isspacev ? "SIM" : "NAO") << endl;
    cout << "E maiuscula: " << (isupperv ? "SIM" : "NAO") << endl;
    cout << "E um digito hexadecimal?" << (isxdigitv ? "SIM" : "NAO") << endl;
    cout << "Conversao para minuscula se possivel: " << tolowerv << endl;
    cout << "Conversao para maiuscula se possivel: " << toupperv << endl;


}