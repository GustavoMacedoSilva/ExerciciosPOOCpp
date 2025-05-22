#include "Professor.h"
#include <iostream>
#include <string>
using namespace std;

Professor::Professor(string nome, int idade, string materia) {
    this->nome = nome;
    this->idade = idade;
    this->materia = materia;
}

void Professor::calculaMedia(Aluno& aluno){
    float media = (aluno.notaPV1 + aluno.notaPV2)/2;
    if (media >= 60){
        cout << "Aluno " << aluno.nome << " aprovado!" << endl;
    }
    else{
        cout << "Aluno " << aluno.nome << " reprovado!" << endl;
    }
}