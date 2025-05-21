#include "Aluno.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    Aluno aluno1("Aluno 1", 20, 85);
    Aluno aluno2("Aluno 2", 22, 90);
    Aluno aluno3("Aluno 3", 19, 57);
    Aluno aluno4("Aluno 4", 21, 36);
    Aluno aluno5("Aluno 5", 23, 42);

    float media = (aluno1.nota + aluno2.nota + aluno3.nota + aluno4.nota + aluno5.nota) / 5;
    cout << "Média: " << media << endl;
}