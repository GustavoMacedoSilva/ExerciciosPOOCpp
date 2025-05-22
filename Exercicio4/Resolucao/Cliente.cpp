#include "Cliente.h"
#include <iostream>
#include <string>
using namespace std;

Cliente::Cliente(string nome, string cpf, float dinheiro_fisico, float dinheiro_depositado) {
    this->nome = nome;
    this->cpf = cpf;
    this->dinheiro_fisico = dinheiro_fisico;
    this->dinheiro_depositado = dinheiro_depositado;
}