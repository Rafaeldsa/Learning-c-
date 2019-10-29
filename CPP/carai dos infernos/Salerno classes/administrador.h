#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "empregado.h"

class Administrador : public Empregado
{
private:
	float ajudasDeCusto;
public:
	Administrador();
	void setAjuda(float);
	float getAjuda()const;
	float calcSalario()const;
	void imprime()const;
};

#endif
