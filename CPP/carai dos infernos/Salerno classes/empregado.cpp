#include "empregado.h"

Empregado :: Empregado (): Pessoa ()
{
	this-> numeroSecao = 0;
	this-> salarioBase = 0;
	this-> INSS = 0;
};

void Empregado :: set_numeroSecao(int nSecao)
{
	this-> numeroSecao = nSecao;
};

void Empregado :: set_salarioBase(float sBase)
{
	this-> salarioBase = sBase;
};

void Empregado :: set_INSS(float inss)
{
	this-> INSS = inss;
};

float Empregado :: calc_salario()const
{
	return (this->salarioBase - (this->salarioBase * (this->INSS / 100)));
};

void Empregado :: imprimeSalarioNomeCPF()const
{
	cout << "Nome: " << getNome() << endl;
	cout << "CPF: " << getCPF() << endl;
	cout << "Salario sem INSS: " << calc_salario() << endl;
};


