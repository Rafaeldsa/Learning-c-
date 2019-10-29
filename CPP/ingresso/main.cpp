#include "ingresso.cpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nova_localizacao;
	float novo_valor_ingresso, adc_vip, adc_camarote;
	int opcao;

    ingresso ii;
	vip vv;
	camarote_inferior ci;
	camarote_superior cs;
	normal nn;

	cout << endl << "1- Ingresso normal." << endl;
	cout << endl << "2- Ingresso vip." << endl;
	cout << endl << "3- Ingresso vip/camarote inferior." << endl;
	cout << endl << "4- Ingresso vip/camarote superior." << endl;
	cin >> opcao;

	switch (opcao)
	{
	case 1:
		cout << endl << "Insira o valor do ingresso normal: " << endl;
		cin >> novo_valor_ingresso;
		nn.set_ingresso(novo_valor_ingresso);
		nn.exibe_dados();

		break;

	case 2:
		cout << endl << "Insira o valor do ingresso normal: " << endl;
		cin >> novo_valor_ingresso;
        ii.set_ingresso(novo_valor_ingresso);

		cout << endl << "Insira o valor do adicional vip: " << endl;
		cin >> adc_vip;

		vv.set_vip(adc_vip);

		vv.exibe_dados(novo_valor_ingresso);

		break;


	case 3:
		cout << endl << "Insira o valor do ingresso normal: " << endl;
		cin >> novo_valor_ingresso;
		ii.set_ingresso(novo_valor_ingresso);

		cout << endl << "Insira o valor do adicional vip: " << endl;
		cin >> adc_vip;
		vv.set_vip(adc_vip);
		cout << endl << "Insira a localizacao: " << endl;
		cin >> nova_localizacao;
		ci.set_localizacao(nova_localizacao);
		ci.exibe_dados();

		break;

	case 4:
		cout << endl << "Insira o valor do ingresso normal: " << endl;
		cin >> novo_valor_ingresso;
		nn.set_ingresso(novo_valor_ingresso);

		cout << endl << "Insira o valor do adicional vip: " << endl;
		cin >> adc_vip;
		vv.set_vip(adc_vip);

		cout << endl << "Insira o adicional do camarote superior: " << endl;
		cin >> adc_camarote;
		cs.set_camarote(adc_camarote);

		cs.exibe_dados(novo_valor_ingresso, adc_vip);

		break;
	}

	return 0;
}
