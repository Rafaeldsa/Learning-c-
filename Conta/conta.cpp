#include "conta.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//funções de conta

conta :: conta (float cSaldo) {
    this->saldo = cSaldo;
    this->jurosN = 0.1;
    this->jurosP = 0.4;
};
void conta :: setSaldo(float cSaldo) {
    this->saldo = cSaldo;
};
float conta :: getSaldo() {
    return this->saldo;
};

float conta :: getJurosN() {
    return this->jurosN;
};

float conta :: getJurosP() {
    return this->jurosP;
};

float conta :: sacar(float qtd) {
    float result = this->saldo - qtd;
    this->saldo = result;
    return result;
};
float conta :: depositar(float qtd) {
    float result = this->saldo + qtd;
    this->saldo = result;
};

float conta :: computa() {
    float juros = 0;
    if(this->saldo < 0) {
        juros = jurosN * saldo;
    }
    else {
        juros = jurosP * saldo;
    }

    return juros;
};
//poupanca
poupanca :: poupanca(float cSaldo, string &cDataNiver) :
    conta(cSaldo) , dataNiver(cDataNiver)
{};

string poupanca :: getData() {
    return this->dataNiver;
};

//retorna 0 caso o saldo eh negativo
float poupanca :: computa(string data)
{
    float saldoPoup = this->getSaldo();
    float result;
    if(saldoPoup > 0) {
        if(data.compare(this->dataNiver)) {
            result = saldoPoup + saldoPoup * getJurosP();
        }
        else {
            return saldoPoup;
        }
    } else {
        result = 0;
    }
};

//contaCorrente
contaCorrente :: contaCorrente(float cSaldo, float cLimite) :
    conta(cSaldo) , limite(cLimite)
{};

float contaCorrente :: computa() {
    float juros = 0;
    if(this->getSaldo() < 0) {
        juros = this->getJurosN() * this->getSaldo();
    }
    else {
        juros = 0;
    }

    return juros;
};

float contaCorrente :: sacar(float qtd) {
    float result = 0;
    if((this->getSaldo() - qtd) < this->limite) {
        result = getSaldo();
    } else {
        result = this->getSaldo() - qtd;
        this->setSaldo(result);
    }
        return result;
};
