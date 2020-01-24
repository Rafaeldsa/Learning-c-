#include "administrador.h"

Administrador :: Administrador(): Empregado()
{
	this-> ajudasDeCusto;
};

void Administrador :: setAjuda(float ajuda_custo)
{
	this-> ajudasDeCusto = ajuda_custo;
};

float Administrador :: getAjuda()const
{
	return this-> ajudasDeCusto;
};

float Administrador :: calcSalario()const
{
	return this->calc_salario() + this->ajudasDeCusto;
};

void Administrador :: imprime()const
{
	imprimeSalarioNomeCPF();
	cout << endl << "Salário do administrador: " << calcSalario();
};
