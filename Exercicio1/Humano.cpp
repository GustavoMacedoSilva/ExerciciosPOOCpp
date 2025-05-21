#include "Humano.h"
#include <string>
#include <iostream>
using namespace std;

Humano::Humano(string nome, int idade, string genero, float altura){
    this->nome = nome;
    this->idade = idade;
    this->genero = genero;
    this->altura = altura;
}
void Humano::falar(){
    cout << "O " << nome << " falou!" << endl;
}