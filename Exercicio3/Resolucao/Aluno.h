#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <string>
using namespace std;

class Aluno{
    public:
        Aluno(string nome, int idade, float notaPV1, float notaPV2);
        string nome;
        int idade;
        float notaPV1;
        float notaPV2;
};
#endif