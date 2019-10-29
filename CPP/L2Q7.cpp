/* Criadora: Rosmânya Fonseca
Turma: 01
Matricula: 119111090
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

class circuito_eletrico
{
private:
	float corrente;
	float resistencia;
	float potencia;
	float tensao;

public:
	circuito_eletrico();
	float set_valor_resististencia(float);
	float set_v_corrente(float);
	float set_c_tensao();
	float set_c_potencia();
};

int main()
{
	circuito_eletrico circ;

	setlocale(LC_ALL, "");

	float valor_resist, v_corr;

	cout << endl << endl << "Informe o valor da resistência (ohms) do circuito_eletrico:  ";
	cin >> valor_resist;

	cout << endl << endl << "Informe o valor da corrente(A) do circuito_eletrico: ";
	cin >> v_corr;

	circ.set_valor_resististencia(valor_resist);
	circ.set_v_corrente(v_corr);

	system("cls");

	cout << endl << endl << "A tensão é de: " << circ.set_c_tensao() << "v";

	cout << endl << endl << "A potência é de " << circ.set_c_potencia() << "w"<<endl<<endl;

	return 0;
}

circuito_eletrico::circuito_eletrico()
{
	corrente = 0, resistencia = 0, potencia = 0, tensao = 0;
}

float circuito_eletrico::set_valor_resististencia(float valor_resist)
{
	resistencia = valor_resist;
	return resistencia;
}

float circuito_eletrico::set_v_corrente(float v_corr)
{
	corrente = v_corr;
	return corrente;
}

float circuito_eletrico::set_c_tensao()
{
	tensao = resistencia * corrente;
	return tensao;
}

float circuito_eletrico::set_c_potencia()
{
	potencia = corrente * tensao;
	return potencia;
}

