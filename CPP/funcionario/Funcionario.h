#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
using namespace std;

class funcionario
{
private:
	int matricula;
	string nome;
	int departamento;
	float salario;
	string funcao;

public:
	funcionario (int = 0, string = " ", int = 0, float = 0, string = " ");
	int getMatricula () const;
	string getNome () const;
	int getDepartamento () const;
	float getSalario () const;
	string getFuncao () const;
	void setFuncionario (int, string, int, float, string);
    void setMatricula(int);
    void setNome(string);
    void setDepartamento(int);
    void setSalario(float);
    void setFuncao(string);

};

#endif
