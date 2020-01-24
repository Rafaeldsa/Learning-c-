#ifndef EMPREGADO_H
#define EMPREGADO_H
#include "pessoa.h"

using namespace std;

class Empregado: public Pessoa
{
private:

	int numeroSecao;
	float salarioBase;
	float INSS;

public:

	//inicializando construtor

	Empregado();
	void set_numeroSecao(int);
	void set_salarioBase(float);
	void set_INSS(float);
	float calc_salario()const;
	void imprimeSalarioNomeCPF()const;

};

#endif
