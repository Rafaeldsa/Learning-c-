#include "operario.h"

Operario :: Operario (): Empregado ()
{
	this-> valorProducao = 0;
	this-> comissao = 0;
};

void Operario :: set_valorP(float valor_produ)
{
	this-> valorProducao = valor_produ;
};

void Operario :: set_valorC(float valor_comiss)
{
	this-> comissao = valor_comiss;
};

float Operario :: get_valorP()const
{
	return this-> valorProducao;
};

float Operario :: get_valorC()const
{
	return this-> comissao;
};

float Operario :: calculaSalario() const
{
	return this-> calc_salario() + (this->valorProducao * (this->comissao / 100));
};

void Operario :: imprime()const
{
	imprimeSalarioNomeCPF();
	cout << endl << "Salario liquido do operario: " << calculaSalario();
};



