#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

class bombaCombustivel
{
private:
	string tipoCombustivel;
	float valorLitro;
	float quantidadeCombustivel;

public:
	bomba();
	float abastecerPorValor();
	float abastecerPorLitro();
	float alterarValor();
	string alterarCombustivel(string);
	float alterarQuantidadeCombustivel(float);
	float getQuantidadeCombustivel();
	string getTipoCombustivel();
};


bombaCombustivel::bomba()
{
    tipoCombustivel = "";
	valorLitro = 0;
    quantidadeCombustivel = 0;
}

float bombaCombustivel::alterarQuantidadeCombustivel(float qtd) {
        quantidadeCombustivel = qtd;
        return quantidadeCombustivel;
}

float bombaCombustivel::getQuantidadeCombustivel() {
        return quantidadeCombustivel;
}

string bombaCombustivel::getTipoCombustivel() {
        return tipoCombustivel;
}

string bombaCombustivel::alterarCombustivel(string tipo) {
    tipoCombustivel = tipo;
    return tipoCombustivel;

}
int main()
{
	bombaCombustivel bomba;
    string combustivel;
	cout << endl << "Combustível: ";
	cin >>  combustivel;

	bomba.alterarCombustivel(combustivel);
	cout << endl << endl << bomba.getTipoCombustivel();

	return 0;
}
