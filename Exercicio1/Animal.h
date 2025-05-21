#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
using namespace std;

class Animal {
    public:
        Animal(string nome, int idade, string especie);
        string nome;
        int idade;
        string especie;
        void fazerBarulho();
};
#endif
