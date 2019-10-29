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
    float jurosNegativos;
    float jurosPositivos;
public:
    conta(float saldo);
    float get_Saldo();
    void set_Saldo(float);
    float sacar(float);
    float depositar(float);
    float get_Juros_Negativos();
    float get_Juros_Positivos();
    float computar();
};

class poupanca : public conta
{
private:
    //o dia q ela faz niver
    string data;
public:
    poupanca(float saldo, string &data);
    string get_Data();
    float computar(string data);
};

class contaCorrente : public conta {
private:
    float limite;
public:
    contaCorrente(float saldo, float limite);
    float get_Limite();
    float computar();
    float sacar(float);
};

#endif
