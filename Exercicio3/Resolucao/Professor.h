#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <iostream>
#include <string>
#include "Aluno.h"
using namespace std;

class Professor{
    public:
        Professor(string nome, int idade, string materia);
        string nome;
        int idade;
        string materia;
        void calculaMedia(Aluno& aluno);
};

#endif