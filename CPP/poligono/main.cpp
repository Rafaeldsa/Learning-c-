#include "poligono.cpp"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	float comp_qua, comp_tri, comp_qua_um, comp_qua_dois, comp_tri_um, comp_tri_dois, comp_tri_tres, a1,a2,a3,a4,a5;
	int opcao;

	quadrado qq1;
	quadrado qq2;
	quadrado qq3;
	triangulo tt1;
	triangulo tt2;
	triangulo tt3;

	cout << endl << "1- Area do triangulo." << endl;
	cout << endl << "2- Area do quadrado." << endl;
	cout << endl << "3- Soma dos 5 poligonos." << endl;
	cin >> opcao;

	switch (opcao)
	{
	case 1:
		cout << endl << "Insira o comprimento: " << endl;
		cin >> comp_tri;
		tt1.set_lado(comp_tri);

		cout << endl << "A area do triangulo e: " << tt1.calcula_area(comp_tri);

		break;

	case 2:
		cout << endl << "Insira o comprimento: " << endl;
		cin >> comp_qua;
		qq1.set_lado(comp_qua);

		cout << endl << "A area do quadrado e: " << qq1.calcula_area(comp_qua);

		break;

	case 3:
		cout << endl << "Insira o comprimento do quadrado um: " << endl;
		cin >> comp_qua_um;
		qq1.set_lado(comp_qua_um);
        a1 = qq1.calcula_area(comp_qua_um);

		cout << endl << "Insira o comprimento do quadrado dois: " << endl;
		cin >> comp_qua_dois;
		qq2.set_lado(comp_qua_dois);
		a2 = qq2.calcula_area(comp_qua_dois);

		cout << endl << "Insira o comprimento do triangulo um: " << endl;
		cin >> comp_tri_um;
		tt1.set_lado(comp_tri_um);
        a3 = tt1.calcula_area(comp_tri_um);

		cout << endl << "Insira o comprimento do triangulo dois: " << endl;
		cin >> comp_tri_dois;
		tt2.set_lado(comp_tri_dois);
        a2 = tt2.calcula_area(comp_tri_dois);

		cout << endl << "Insira o comprimento do triangulo tres: " << endl;
		cin >> comp_tri_tres;
		tt3.set_lado(comp_tri_tres);
        a2 = tt3.calcula_area(comp_tri_tres);

        cout << endl << "A area total dos 5 poligonos e: " << a1 + a2 + a3 + a4 + a5;

	}

}
