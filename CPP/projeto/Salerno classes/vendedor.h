#ifndef VENDEDOR_H
#define VENDEDOR_H
#include <iostream>
using namespace std;
#include "empregado.h"

class Vendedor : public Empregado
{
private:
	float valorVendas, comissao;
public:
	Vendedor();
	void setValorVendas(float);
	void setComissao(float);
	float getValorVendas() const;
	float getComissao() const;
	float calculaSalario();
	void imprime();
};

#endif /* VENDEDOR_H_ */
