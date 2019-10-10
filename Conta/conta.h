#ifndef CONTA_H
#define CONTA_H
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class conta
{
private:
    float saldo;
    float jurosN;
    float jurosP;
public:
    conta(float saldo);
    float getSaldo();
    void setSaldo(float);
    float sacar(float);
    float depositar(float);
    float getJurosN();
    float getJurosP();
    float computa();
};

class contaCorrente : public conta {
private:
    float limite;
public:
    contaCorrente(float saldo, float limite);
    float getLimite();
    float computa();
    float sacar(float);
};


class poupanca : public conta
{
private:
    //o dia q ela faz niver
    string dataNiver;
public:
    poupanca(float saldo, string &dataNiver);
    string getData();
    float computa(string data);
};

#endif
