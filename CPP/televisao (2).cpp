#include "televisao.cpp"
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    televisao televisao;
	setlocale(LC_ALL,""); // tornar em português
	int alt_volume, alt_canal, mudar_canal, tipo; // declarando variáveis

	// menu

	cout << endl << "Insira 1 para controlar o canal: " << endl;
	cout << endl << "2 para controlar o volume: " << endl;
	cout << endl << "3 para mudar o canal: " << endl;
	cout << endl << "4 para consultar o canal: " << endl;
	cout << endl << "5 para consultar o volume: " << endl;
	cin >> tipo;

	switch(tipo)
	{
	case 1:
		cout << endl << "Insira 0 para voltar o canal e 1 para passar: " << endl;
		cin >> alt_canal;
		televisao.set_controlar_canal(alt_canal);
		break;

	case 2:
		cout << endl << "Insira 0 para diminuir o volume e 1 para aumentar: "<< endl;
		cin >> alt_volume;
		televisao.set_controlar_volume(alt_volume);
		break;

	case 3:
		cout << endl << "Insira o número do canal que gostaria de assistir: " << endl;
		cin >> mudar_canal;
		televisao.set_mudar_canal (mudar_canal);
		break;

	case 4:
		cout << endl << "Canal: " << televisao.get_consultar_canal();
		break;

	case 5:
		cout << endl << "Volume: " << televisao.get_consultar_volume();
		break;
	}

	return 0;
}
