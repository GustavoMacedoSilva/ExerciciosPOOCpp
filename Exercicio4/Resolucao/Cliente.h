#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <string>
using namespace std;

class Cliente{
    public:
        Cliente(string nome, string cpf, float dinheiro_fisico, float dinheiro_depositado);
        string nome;
        string cpf;
        float dinheiro_fisico;
        float dinheiro_depositado;
};


#endif
