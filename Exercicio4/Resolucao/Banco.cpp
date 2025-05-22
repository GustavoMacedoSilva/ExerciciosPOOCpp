#include "Banco.h"
#include <iostream>
#include <string>
using namespace std;

Banco::Banco(string nome) {
    this->nome = nome;
}
void Banco::depositarDinheiro(float valor, Cliente& cliente){
    if (valor > 0 && cliente.dinheiro_fisico >= valor){
        cliente.dinheiro_fisico -= valor;
        cliente.dinheiro_depositado += valor;
        cout << "Deposito de " << valor << " realizado com sucesso para o cliente " << cliente.nome << endl;
    }
    else{
        cout << "Não foi possivel realizar o deposito" << endl;
    }
}
void Banco::sacarDinheiro(float valor, Cliente& cliente){
    if (valor > 0 && cliente.dinheiro_depositado >= valor){
        cliente.dinheiro_depositado -= valor;
        cliente.dinheiro_fisico += valor;
        cout << "Saque de " << valor << " realizado com sucesso para o cliente " << cliente.nome << endl;
    }
    else{
        cout << "Não foi possivel realizar o saque" << endl;
    }
}
void Banco::transferirDinheiro(float valor, Cliente& cliente1, Cliente& cliente2){
    if (valor > 0 && cliente1.dinheiro_depositado >= valor){
        cliente1.dinheiro_depositado -= valor;
        cliente2.dinheiro_depositado += valor;
        cout << "Transferencia de " << valor << " realizada com sucesso do cliente " << cliente1.nome << " para o cliente " << cliente2.nome << endl;
    }
    else{
        cout << "Não foi possivel realizar a transferencia" << endl;
    }
}