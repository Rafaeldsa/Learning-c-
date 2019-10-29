#include "funcionario.h"
#include <iostream>
#include <string>

funcionario :: funcionario(int matricula, string nome, int departamento, float salario, string funcao)
{
	setFuncionario (matricula, nome, departamento, salario, funcao);
}

void funcionario :: setFuncionario(int matricula_f, string nome_f, int departamento_f, float salario_f, string funcao_f)
{
	/* o this se usa na declaração do construtor, podendo colocar em todos os métodos da classe que
	fazem referência aos atributos, optei por fazer assim para economizar funções,
	entretanto, poderia fazer funções set para isso */

	this->matricula =  matricula_f;
	this->nome = nome_f;
	this->departamento = departamento_f;
	this->salario = salario_f;
	this->funcao = funcao_f;
}

string funcionario :: getNome () const
{
	return nome;
}

int funcionario :: getDepartamento () const
{
	return departamento;
}

float funcionario :: getSalario () const
{
	return salario;
}

string funcionario :: getFuncao () const
{
	return funcao;
}

int funcionario :: getMatricula () const
{
	return matricula;
}

void funcionario :: setNome(string nome) {
    this->nome = nome;
}

void funcionario :: setMatricula(int matricula) {
    this->matricula = matricula;
}

void funcionario :: setDepartamento(int departamento) {
    this->departamento = departamento;
}

void funcionario :: setSalario(float salario) {
    this->salario = salario;
}

void funcionario :: setFuncao(string funcao) {
    this->funcao = funcao;
}

