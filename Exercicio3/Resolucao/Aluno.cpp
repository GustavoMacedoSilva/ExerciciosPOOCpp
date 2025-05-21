#include "Aluno.h"
#include <iostream>
#include <string>
using namespace std;

Aluno::Aluno(string nome, int idade, float notaPV1, float notaPV2) {
    this->nome = nome;
    this->idade = idade;
    this->notaPV1 = notaPV1;
    this->notaPV2 = notaPV2;
}