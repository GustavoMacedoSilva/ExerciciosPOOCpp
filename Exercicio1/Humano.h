#ifndef HUMANO_H
#define HUMANO_H
#include <string>
#include <iostream>
using namespace std;

class Humano{
    public:
        Humano(string nome, int idade, string genero, float altura);
        string nome;
        int idade;
        string genero;
        float altura;
        void falar();
};

#endif