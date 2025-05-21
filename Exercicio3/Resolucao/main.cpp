#include "Aluno.h"
#include "Professor.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    Aluno aluno1("Aluno1", 20, 70.0, 80.0);
    Aluno aluno2("Aluno2", 22, 50.0, 40.0);
    Professor professor("Professor1", 40, "Matematica");
    professor.calculaMedia(aluno1);
    professor.calculaMedia(aluno2);
    return 0;
}