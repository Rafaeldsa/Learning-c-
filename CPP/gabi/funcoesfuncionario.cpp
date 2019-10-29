#include"classefuncionario.h"
#include<iostream>
#include<string>

using namespace std;
Funcionario::Funcionario(int matricula,string nome,int depatarmento,float salario,string funcao){
	set_dados(matricula,nome,departamento,salario,funcao);
};
void Funcionario::set_dados(int matricula_p,string nome_p,int depatarmento_p,float salario_p,string funcao_p){
	this->matricula = matricula_p;
	this->nome = nome_p;
	this->departamento = depatarmento_p;
	this->salario = salario_p;
	this->funcao = funcao_p;
};

int Funcionario::get_matricula()const{
	return this-> matricula;

};

string Funcionario::get_nome()const{
	return this-> nome;

};

 int Funcionario::get_departamento ()const {
	return this-> departamento;


};

int Funcionario::get_salario ()const{
	return this-> salario;

};

string  Funcionario::get_funcao ()const{
	return this-> funcao;

};

/*
Aluna: Maria Gabriela Abreu de Souza - 119110992
Turma: 01
Questão: 03
*/
