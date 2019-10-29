#ifndef RELOGIO_H
#define RELOGIO_H

class relogio
{
private:
	int segundo;
	int minuto;
	int hora;
	int horario;
public:
	relogio();
	void set_hora(int, int, int);
	int get_hora();
	int get_ava_horario(int);
	int set_segundo(int segundo);
	
};

#endif