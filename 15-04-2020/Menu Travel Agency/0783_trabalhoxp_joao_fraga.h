#pragma once
#include <iostream>
#include <string>
#include <vector> 
#include <stdlib.h>
#include <sstream>
#include <iomanip>



using namespace std;

class trabalho{
    public:

        void main();
        void add_to_fatura(string servico, float preco);      
        void servicos();
        void experiencias();
        void terminar();
        void separator();
        void screen_clear();
        float reducao_preco(float valor, float percentagem);

        vector<string> fatura;
        float total = 0;
        int pessoas = 0;

};

