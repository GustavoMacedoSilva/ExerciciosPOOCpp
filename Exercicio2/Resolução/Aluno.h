#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <string>
using namespace std;

class Aluno{
    public:
        Aluno(string nome, int idade, float nota);
        string nome;
        int idade;
        float nota;
};
#endif