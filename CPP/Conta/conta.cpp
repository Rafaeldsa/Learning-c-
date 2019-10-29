#include "conta.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//funções de conta

conta :: conta (float contaSaldo) {
    this->saldo = contaSaldo;
    this->jurosNegativos = 0.7;
    this->jurosPositivos = 1.5;
};

float conta :: get_Saldo() {
    return this->saldo;
};

void conta :: set_Saldo(float contaSaldo) {
    this->saldo = contaSaldo;
};

float conta :: sacar(float valor) {
    float retorno = this->saldo - valor;
    if (retorno < 0) {
        return this->saldo;
    } else {
        this->saldo = retorno;

    }
    return retorno;
};
float conta :: depositar(float valor) {
    float retorno = this->saldo + valor;
    this->saldo = retorno;
};

float conta :: get_Juros_Negativos() {
    return this->jurosNegativos;
};

float conta :: get_Juros_Positivos() {
    return this->jurosPositivos;
};

float conta :: computar() {
    float qtd_juros = 0;
    if(this->saldo < 0) {
        qtd_juros = jurosNegativos * saldo;
    }
    else {
        qtd_juros = jurosPositivos * saldo;
    }

    return qtd_juros;
};

//contaCorrente
contaCorrente :: contaCorrente(float contaSaldo, float contaLimite) :
    conta(contaSaldo) , limite(contaLimite)
{};

float contaCorrente :: sacar(float valor) {
    float retorno = 0;
    if((this->get_Saldo() - valor) < this->limite) {
        retorno = get_Saldo();
    } else {
        retorno = this->get_Saldo() - valor;
        this->set_Saldo(retorno);
    }
        return retorno;
};

float contaCorrente :: computar() {
    float qtd_juros = 0;
    if(this->get_Saldo() < 0) {
        qtd_juros = this->get_Juros_Negativos() * this->get_Saldo();
    }
    else {
        qtd_juros = this->get_Saldo();
    }

    return qtd_juros;
};



//poupanca
poupanca :: poupanca(float contaSaldo, string &contaData) :
    conta(contaSaldo) , data(contaData)
{};

float poupanca :: computar(string contaData)
{
    float saldo = this->get_Saldo();
    float retorno;
    if(saldo > 0) {
        if(!(contaData.compare(this->data))) {
            retorno = saldo + saldo * get_Juros_Positivos();
        }
        else {
            retorno =  saldo;
        }
    }
    return retorno;
};

string poupanca :: get_Data() {
    return this->data;
};
