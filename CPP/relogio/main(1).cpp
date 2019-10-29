#include "relogio.cpp"
#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
	relogio relogio;
	setlocale(LC_ALL, ""); // tornar em portugu�s
	int hora, minuto, segundo, horario, avancaSegundo, newHorario;

	cout << endl << "Digite o n�mero de horas com apenas dois d�gitos, de 00 at� 23: " << endl;
	cin >> hora;

	cout << endl << "Digite o n�mero de minutos com apenas dois d�gitos, de 00 at� 59: " << endl;
	cin >> minuto;

	cout << endl << "Digite o n�mero de segundos com apenas dois d�gitos, de 00 at� 59: " << endl;
	cin >> segundo;

	relogio.set_hora(hora,minuto,segundo);
	horario = relogio.get_hora();
	avancaSegundo = relogio.get_ava_horario(horario);
	relogio.set_hora(hora,minuto,avancaSegundo);
	newHorario = relogio.get_hora();

	cout << endl << "O hor�rio informado foi: " << horario;
	cout << endl << "O hor�rio avan�ado �: " << newHorario;

	return 0;
}


