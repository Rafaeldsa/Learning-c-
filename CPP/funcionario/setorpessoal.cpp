#include "setorpessoal.h"
#include <iostream>
#include <string>

SetorPessoal :: SetorPessoal (int q_func)
{
	num = q_func;
	funcionarios = new funcionario[num];
}

void SetorPessoal :: addFunc(funcionario obj_fun,int posicao)
{
        funcionarios[posicao].setMatricula(obj_fun.getMatricula());
        funcionarios[posicao].setNome(obj_fun.getNome());
        funcionarios[posicao].setDepartamento(obj_fun.getDepartamento());
        funcionarios[posicao].setSalario(obj_fun.getSalario());
        funcionarios[posicao].setFuncao(obj_fun.getFuncao());

}

void SetorPessoal :: imprimeFolha()
{
	for (int i = 0; i < num; i++)
	{
		cout << endl << "Salario do funcionario:" << funcionarios[i].getSalario();
		cout << endl << "Nome do funcionario: " << funcionarios[i].getNome();
	}
}

float SetorPessoal :: valorFolha()
{
	float soma = 0;
	for (unsigned i = 0; i < num; i++)
	{
		soma += funcionarios[i].getSalario();
	}
	return soma;
}

int SetorPessoal :: MaiorSalario()
{
	float maior_sala = 0;
	for (int i = 0; i < num-1; i++)
	{
		if (funcionarios[i+1].getSalario() > funcionarios[i].getSalario() )
		{
			maior_sala = funcionarios[i+1].getSalario();
		}

		return maior_sala;
	}
}

void SetorPessoal :: mostraPorDep(int valor_depart)
{
	for (int i = 0; i < num; i++)
	{
		if (valor_depart = funcionarios[i].getDepartamento())
		{
			cout << endl << funcionarios[i].getNome() << " - " << funcionarios[i].getFuncao();
		}

	}
}

void SetorPessoal :: imprimePorFuncao()
{
	for (int i = 0; i < num; i++)
	{
		cout << endl << funcionarios[i].getNome();
		cout << endl << funcionarios[i].getFuncao();
	}

}

void SetorPessoal :: imprimePorSalario()
{
	for (unsigned i = 0; i<num; i++){
		for (unsigned j = 0; j<num-1; j++){
			if (funcionarios[j].getSalario() > funcionarios[j+1].getSalario()){
				funcionario aux = funcionarios[j];
				funcionarios[j] = funcionarios [j+1];
				funcionarios[j+1] = aux;
			}
		}
	}
	for (unsigned i = 0; i < num; i++)
	{
		cout << endl << funcionarios[i].getNome();
		cout << endl << funcionarios[i].getSalario();
	}

}
