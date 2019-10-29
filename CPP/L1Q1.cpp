/* Criadora: Rosmânya Fonseca
Turma: 01
Matricula: 119111090
*/

#include <iostream>
#include <stdlib.h>
#include <string>
#define tam 2

using namespace std;

struct cliente{
	char nome[50];
	float renda_mensal;
	int ano_nascimento;
	int carro;
};

int main (){
	int i, ano, qtd_renda_mensal=0, qtd_carros=0, qtd_nasc=0;
	float soma=0, media;
	cliente dados_cliente[tam];

	for (i=0; i<tam; i++){
		cout<<endl<<"Insira o nome do cliente com no maximo 50 caracteres: "<<endl;
		cin>>dados_cliente[i].nome;

		cout<<endl<<"Insira a renda mensal do cliente: "<<endl;
		cin>>dados_cliente[i].renda_mensal;

		cout<<endl<<"Insira a data de nascimento do cliente, por exemplo, 231095: "<<endl;
		cin>>dados_cliente[i].ano_nascimento;

		cout<<endl<<"Digite 1 caso o cliente tenha carro ou digite 2 caso ele não possua carro: "<<endl;
		cin>>dados_cliente[i].carro;

		system("cls");

		soma += dados_cliente[i].renda_mensal;
	}

	media = soma/tam;

	for (i=0;i<tam;i++){
		if (dados_cliente[i].renda_mensal>media){
			qtd_renda_mensal ++;
		}

		if (dados_cliente[i].carro == 1){
			qtd_carros ++;
		}

		ano = dados_cliente[i].ano_nascimento%100;

		if (ano>70 && ano<=82){
			qtd_nasc ++;
		}
	}

	cout<<endl<<"Quantidade de clientes que tem a renda mensal acima da media:"<<endl;
	cout<<qtd_renda_mensal;
	cout<<endl<<"Quantidade de clientes que possuem carro:"<<endl;
	cout<<qtd_carros;
	cout<<endl<<"Quantidade de clientes que nasceram entre 1970-1982:"<<endl;
	cout<<qtd_nasc;
}
