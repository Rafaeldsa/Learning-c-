#ifndef CLIENTE_H
#define CLIENTE_H

#include "pessoa.h"

class Cliente : public Pessoa
{
private:
	float plafond, valorEmDivida;
public:
	Cliente();
	void set_plafond(float);
	void set_valorEmDivida(float);
	float get_plafond() const;
	float get_valorEmDivida() const;
	float obterSaldo() const;
	void imprime() const;
};

#endif
