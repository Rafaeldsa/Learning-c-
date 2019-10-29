#include "relogio.cpp"
#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
	relogio relogio;
	setlocale(LC_ALL, ""); // tornar em português
	int hora, minuto, segundo, horario, a, newHorario;

	cout << endl << "Digite o número de horas com apenas dois dígitos, de 00 até 23: " << endl;
	cin >> hora;

	cout << endl << "Digite o número de minutos com apenas dois dígitos, de 00 até 59: " << endl;
	cin >> minuto;

	cout << endl << "Digite o número de segundos com apenas dois dígitos, de 00 até 59: " << endl;
	cin >> segundo;

	relogio.set_hora(hora,minuto,segundo);
	horario = relogio.get_hora();
	a = relogio.get_ava_horario(horario);
	relogio.set_hora(hora,minuto,a);
	newHorario = relogio.get_hora();

	cout << endl << "O horário informado foi: " << horario;
	cout << endl << "O horário avançado é: " << newHorario;

}


