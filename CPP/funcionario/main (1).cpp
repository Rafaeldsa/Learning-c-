#include "funcionario.cpp"
#include <iostream>
#include <string>
#include <locale.h>


using namespace std;

int main()
{
	funcionario fc;

	setlocale(LC_ALL, "");

	float salario_f;
	int matricula_f, departamento_f;
	string nome_f, funcao_f;

	cout << endl << "Digite o nome do funcionário: " << endl;
	cin >> nome_f;

	cout << endl << "Digite a matrícula do funcionário: " << endl;
	cin >> matricula_f;

	cout << endl << "Digite o departamento do funcionário: " << endl;
	cin >> departamento_f;

	cout << endl << "Digite a função do funcionário: " << endl;
	cin >> funcao_f;

	cout << endl << "Digite o salário do funcionário: " << endl;
	cin >> salario_f;

    fc.setFuncionario(matricula_f, nome_f,departamento_f,salario_f,funcao_f);

	cout << endl << "Dados do funcionário: " << endl;
	cout << endl << "Nome: " << fc.getNome();
	cout << endl << "Matrícula: " << fc.getMatricula();
	cout << endl << "Departamento: " << fc.getDepartamento();
	cout << endl << "Função: " << fc.getFuncao();
	cout << endl << "Salário: " << fc.getSalario();
	
	return 0;
}
