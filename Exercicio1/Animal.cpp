#include "Animal.h"
#include <string>
#include <iostream>
using namespace std;

Animal::Animal(string nome, int idade, string especie){
    this->nome = nome;
    this->idade = idade;
    this->especie = especie;
}

void Animal::fazerBarulho(){
    cout << "O " << nome << " faz barulho!" << endl;
}