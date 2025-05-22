#ifndef BANCO_H
#define BANCO_H
#include <iostream>
#include <string>
#include "Cliente.h"
using namespace std;

class Banco{
    public:
        Banco(string nome);
        string nome;
        void depositarDinheiro(float valor, Cliente& cliente);
        void sacarDinheiro(float valor, Cliente& cliente);
        void transferirDinheiro(float valor, Cliente& cliente1, Cliente& cliente2);
};

#endif