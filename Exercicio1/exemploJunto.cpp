#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
    void comer() {
        cout << "Comendo..." << endl;
    }
};

class Cachorro : public Animal {
public:
    void latir() {
        cout << "Au au!" << endl;
    }
};

int main() {
    Cachorro c;
    c.comer();//herdado
    c.latir();//próprio
    return 0;
}