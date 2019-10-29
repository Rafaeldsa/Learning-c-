#include"funcoesfuncionario.cpp"
#include<iostream>
#include<string>

using namespace std;

int main(){

        Funcionario fun;

		int matricula_p;
		string nome_p;
		int depatarmento_p;
		float salario_p;
		string funcao_p;



	cout<<endl<<"Infome a matricula do funcionario: "<<endl;
	cin>>matricula_p;

	cout<<endl<<"Infome o nome do funcionario: "<<endl;
	cin>>nome_p;

	cout<<endl<<"Infome o depatarmento do funcionario: "<<endl;
	cin>>depatarmento_p;

	cout<<endl<<"Infome o salario do funcionario: "<<endl;
	cin>>salario_p;

	cout<<endl<<"Infome a funcao do funcionario: "<<endl;
	cin>>funcao_p;

	fun.set_dados(matricula_p,nome_p,depatarmento_p,salario_p,funcao_p);

	cout<<endl<<"matricula: "<<endl<<fun.get_matricula();
	cout<<endl<<"nome: "<<endl<<fun.get_nome();
	cout<<endl<<"depatarmento: "<<endl<<fun.get_departamento();
	cout<<endl<<"salario: "<<endl<<fun.get_salario();
	cout<<endl<<"funcao: "<<endl<<fun.get_funcao();

};

/*
Aluna: Maria Gabriela Abreu de Souza - 119110992
Turma: 01
Questão: 03
*/
