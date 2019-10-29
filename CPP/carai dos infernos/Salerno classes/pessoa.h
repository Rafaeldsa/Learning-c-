#include <iostream>
#include <string.h>

using namespace std;

#ifndef PESSOA_H
#define PESSOA_H

struct endereco
{
	string rua;
	int numero;
	string bairro;
	int CEP;
};

struct data
{
	int dia;
	int mes;
	int ano;
};

class Pessoa
{
private:
	string nome;
	long int CPF;
	endereco Endereco;
	data DataNasc;

public:
	Pessoa();
	void setNome(string);
	void setCPF(long int);
	void setEndereco(string, int, string, int);
	void setdataNasc(int, int, int);
	string getNome()const;
	long int getCPF()const;
	endereco getEndereco();
	data getDataNasc();
};

#endif
