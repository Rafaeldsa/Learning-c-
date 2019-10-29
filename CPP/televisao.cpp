#include "televisao.h"
#include <iostream>

televisao:: televisao() // construtor para inicializar o programa
{
	canal = 0;
	volume = 0;
}

void televisao::set_controlar_volume(int alt_volume) // controlar o volume
{
	if (alt_volume == 0)
	{
		volume --;
	}
	else if (alt_volume == 1)
	{
		volume ++;
	}

}

void televisao::set_controlar_canal (int alt_canal) // controlar o canal
{
	if (alt_canal == 0)
	{
		canal --;
	}
	else if (alt_canal == 1)
	{
		canal ++;
	}
}

int televisao::set_mudar_canal (int mudar_canal) // mudar canal
{
	canal = mudar_canal;
}

int televisao::get_consultar_canal() // consultar/imprimir canal
{
	return canal;
}

int televisao::get_consultar_volume() // consultar/imprimir volume
{
	return volume;
}
