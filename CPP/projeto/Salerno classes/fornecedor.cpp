#include "fornecedor.h"

Fornecedor :: Fornecedor(): Pessoa()
{
	this-> plafond = 0;
	this-> valorEmDivida = 0;
};

void Fornecedor :: set_plafond(float pla_fond)
{
	this-> plafond = pla_fond;
};

void Fornecedor :: set_valorEmDivida(float valorem_Divida)
{
	this-> valorEmDivida = valorem_Divida;
};

float Fornecedor :: get_plafond()const
{
	return this-> plafond;
};

float Fornecedor :: get_valorEmDivida()const
{
	return this-> valorEmDivida;
};

float Fornecedor :: obterSaldo()const
{
	return this->plafond - this->valorEmDivida;
};

void Fornecedor :: imprime()const
{
	cout << endl << "Saldo com o fornecedor: " << obterSaldo();
};

