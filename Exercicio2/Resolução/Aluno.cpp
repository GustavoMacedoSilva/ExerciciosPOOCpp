#include "Aluno.h"
#include <iostream>
#include <string>
using namespace std;

Aluno::Aluno(string nome, int idade, float nota){
    this->nome = nome;
    this->idade = idade;
    this->nota = nota;
}