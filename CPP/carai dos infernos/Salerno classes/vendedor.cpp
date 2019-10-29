#include "vendedor.h"

Vendedor :: Vendedor (): Empregado ()
{
	this-> valorVendas = 0;
	this-> comissao = 0;
};

void Vendedor :: setValorVendas(float Vvendas)
{
	this-> valorVendas = Vvendas;
};

void Vendedor :: setComissao(float comissaum)
{
	this-> comissao = comissaum;
};

float Vendedor :: getValorVendas() const
{
	return this-> valorVendas;
};

float Vendedor :: getComissao() const
{
	return this->comissao;
};

float Vendedor::calculaSalario()
{
	return this->calc_salario() + (this->valorVendas * (this->comissao / 100));
};

void Vendedor::imprime()
{
	imprimeSalarioNomeCPF();
	cout << "Salario liquido com comissao: " << calculaSalario() << endl;
};


