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

	cout << endl << "Digite o nome do funcion�rio: " << endl;
	cin >> nome_f;

	cout << endl << "Digite a matr�cula do funcion�rio: " << endl;
	cin >> matricula_f;

	cout << endl << "Digite o departamento do funcion�rio: " << endl;
	cin >> departamento_f;

	cout << endl << "Digite a fun��o do funcion�rio: " << endl;
	cin >> funcao_f;

	cout << endl << "Digite o sal�rio do funcion�rio: " << endl;
	cin >> salario_f;

    fc.setFuncionario(matricula_f, nome_f,departamento_f,salario_f,funcao_f);

	cout << endl << "Dados do funcion�rio: " << endl;
	cout << endl << "Nome: " << fc.getNome();
	cout << endl << "Matr�cula: " << fc.getMatricula();
	cout << endl << "Departamento: " << fc.getDepartamento();
	cout << endl << "Fun��o: " << fc.getFuncao();
	cout << endl << "Sal�rio: " << fc.getSalario();
	
	return 0;
}
