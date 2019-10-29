#include "relogio.h"
#include <iostream>

relogio :: relogio()
{
	hora = 0;
	minuto = 0;
	segundo = 0;
	horario = 0;

}

void relogio :: set_hora(int hora, int minuto, int segundo)
{
	hora = hora;
	minuto = minuto;
	segundo = segundo;
	horario = (((hora*100)+minuto)*100)+segundo;

}

int relogio :: get_hora ()
{
	return horario;
}

int relogio :: get_ava_horario (int horario)
{
	segundo = horario % 100;
	int aux = segundo;
	if (aux < 60){
		aux ++;
		horario = (((hora*100)+minuto)*100)+aux;
	}

	return horario;
}

