#include "cliente.h"

Cliente:: Cliente(): Pessoa()
{
	this-> plafond = 0;
	this-> valorEmDivida = 0;
};

void Cliente :: set_plafond(float pla_fond)
{
	this-> plafond = pla_fond;
};

void Cliente :: set_valorEmDivida(float valorem_Divida)
{
	this-> valorEmDivida = valorem_Divida;
};

float Cliente :: get_plafond()const
{
	return this-> plafond;
};

float Cliente :: get_valorEmDivida()const
{
	return this-> valorEmDivida;
};

float Cliente :: obterSaldo()const
{
	return this->plafond - this->valorEmDivida;
};

void Cliente :: imprime()const
{
	cout << endl << "Saldo com o cliente: " << obterSaldo();
};
