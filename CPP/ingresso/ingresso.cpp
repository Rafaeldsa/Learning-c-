#include "ingresso.h"
#include <iostream>
#include <string>

using namespace std;

// funções da classe ingresso


void ingresso :: set_ingresso(float novo_valor_ingresso)
{
	this-> valor_ingresso = novo_valor_ingresso;
};

float ingresso :: get_ingresso()
{
	return this -> valor_ingresso;
};


// funções da classe normal


void normal :: exibe_dados()
{
	cout << endl <<"O valor do ingresso normal e: " << get_ingresso();
}

// funções da classe vip

void vip :: set_vip (float adc_vip)
{
	this-> valor_vip = adc_vip;
};

float vip :: get_vip ()
{
	return this -> valor_vip;
};

void vip :: exibe_dados(float valor_ingresso)
{
	cout << endl << "O valor do ingresso vip e: " << get_vip() + valor_ingresso;
};

// funções da classe camarote inferior

camarote_inferior :: camarote_inferior (string localizacao)
{
	this-> localizacao = " ";
};

void camarote_inferior :: set_localizacao (string nova_localizacao)
{
	this-> localizacao = nova_localizacao;
};

string camarote_inferior :: get_localizacao ()
{
	return this -> localizacao;
};

void camarote_inferior :: exibe_dados()
{
    cout << endl << "O valor do ingresso vip e: " << get_vip();
	cout << endl << "A localizacao e: " << localizacao;

};

// funções para a classe camarote superior

void camarote_superior :: set_camarote (float adc_camarote)
{
	this -> valor_camarote = valor_vip + adc_camarote;
};

float camarote_superior :: get_camarote ()
{
	return this -> valor_camarote;
};

void camarote_superior :: exibe_dados(float valor_ingresso, float valor_vip)
{
	cout << endl << "O valor do ingresso vip e: " << get_camarote() + valor_vip + valor_ingresso;
};
