#include <iostream>
#include "Animal.h"
#include "Humano.h"
using namespace std;

int main() {
    Animal animal("Ferdinando", 5, "Gato");
    cout << "Nome: " << animal.nome << endl;
    cout << "Idade: " << animal.idade << endl;
    cout << "Especie: " << animal.especie << endl;
    animal.fazerBarulho();

    Animal animal2("Jubileu", 20, "Galinha");
    cout << "Nome: " << animal2.nome << endl;
    cout << "Idade: " << animal2.idade << endl;
    cout << "Especie: " << animal2.especie << endl;
    animal2.fazerBarulho();

    Humano humano("Fred Durst", 54, "Masculino", 1.72);
    cout << "Nome: " << humano.nome << endl;
    cout << "Idade: " << humano.idade << endl;
    cout << "Genero: " << humano.genero << endl;
    cout << "Altura: " << humano.altura << endl;
    humano.falar();
    return 0;
}