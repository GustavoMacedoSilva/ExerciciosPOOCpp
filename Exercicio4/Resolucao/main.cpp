#include "Cliente.h"
#include "Banco.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    Cliente cliente1("cliente1", "12345678900", 1000.0, 500.0);
    Cliente cliente2("Maria", "09876543211", 2000.0, 1500.0);
    
    Banco banco("Banco1");

    cout << "Dinheiro depositado do cliente 1: " << cliente1.dinheiro_depositado << endl;
    cout << "Dinheiro depositado do cliente 2: " << cliente2.dinheiro_depositado << endl;
    banco.depositarDinheiro(200.0, cliente1);
    banco.depositarDinheiro(300.0, cliente2);
    cout << "Dinheiro depositado do cliente 1: " << cliente1.dinheiro_depositado << endl;
    cout << "Dinheiro depositado do cliente 2: " << cliente2.dinheiro_depositado << endl;


    cout << "Dinheiro fisico do cliente 1: " << cliente1.dinheiro_fisico << endl;
    cout << "Dinheiro fisico do cliente 2: " << cliente2.dinheiro_fisico << endl;
    banco.sacarDinheiro(100.0, cliente1);
    banco.sacarDinheiro(200.0, cliente2);
    cout << "Dinheiro fisico do cliente 1: " << cliente1.dinheiro_fisico << endl;
    cout << "Dinheiro fisico do cliente 2: " << cliente2.dinheiro_fisico << endl;



    banco.transferirDinheiro(50.0, cliente1, cliente2);
    cout << "Dinheiro depositado do cliente 1: " << cliente1.dinheiro_depositado << endl;
    cout << "Dinheiro depositado do cliente 2: " << cliente2.dinheiro_depositado << endl;


    return 0;
}