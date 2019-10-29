#include<iostream>
#include<string>

using namespace std;

// criando meu arquivo.h e declarando a classe com seus respectivos atributos e metodos
#ifndef classefuncionario_H
#define classefuncionario_H

class Funcionario{
	private:
		int matricula;
		string nome;
		int departamento;
		float salario;
		string funcao;

    public:
    	Funcionario(int=0,string= " ",int = 0,float = 0,string = " ");
    	void  set_dados(int,string,int,float,string);
    	int  get_matricula()const;
    	string get_nome()const;
    	int  get_departamento() const;
    	int  get_salario()const;
    	string get_funcao()const;
};
#endif

/*
Aluna: Maria Gabriela Abreu de Souza - 119110992
Turma: 01
Questão: 03
*/
