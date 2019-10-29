#include "setorpessoal.cpp"
#include <iostream>
#include <string>


using namespace std;

int main()
{
	int q_func, valor_depart, novo_depart,opcao, nova_matricula;
	float novo_salario;
	string funcao, novo_nome, nova_funcao;
	funcionario obj_fun;

	int posicao = 0;

    cout << endl << "Insira o tamanho do setor: " << endl;
    cin >> q_func;

    SetorPessoal sp (q_func);

	do {

    cout << endl << "Insira 1 para adicionar os funcionarios" << endl;
	cout << endl << "Insira 2 para imprimir a folha de pagamento com o nome dos funcionarios" << endl;
	cout << endl << "Insira 3 para o valor total da folha de pagamento" << endl;
	cout << endl << "Insira 4 para verificar o funcionario com maior salario" << endl;
	cout << endl << "Insira 5 para saber o departamento com o nome e a funcao dos funcionarios" << endl;
	cout << endl << "Insira 6 para verificar o nome e a funcao dos funcionarios" << endl;
	cout << endl << "Insira 7 para mostrar salario em ordem crescente" << endl;
    cout << endl << "Insira 0 para sair" << endl;

    cout << "Opcao > ";
    cin >> opcao;
    switch(opcao) {
        case 1:
            for (int i = 0; i < q_func; i++)
            {
                cout << endl << "Matricula do funcionario: " << endl;
                cin >> nova_matricula;

                cout << endl << "Nome do funcionario: " << endl;
                cin >> novo_nome;


                cout << endl << "Departamento do funcionario: " << endl;
                cin >> novo_depart;


                cout << endl << "Salario do funcionario: " << endl;
                cin >> novo_salario;


                cout << endl << "Funcao do funcionario: " << endl;
                cin >> nova_funcao;

            obj_fun.setFuncionario(nova_matricula, novo_nome,novo_depart,novo_salario,nova_funcao);
            sp.addFunc(obj_fun,posicao);
            posicao++;
            }
        break;
        case 2:
            sp.imprimeFolha();
        break;
        case 3:
            cout << sp.valorFolha() << endl;
        break;
        case 4:
            cout << sp.MaiorSalario() << endl;
        break;
        case 5:
            cout << endl << "Insira o num do departamento: ";
            cin >> valor_depart;
            sp.mostraPorDep(valor_depart);
        break;
        case 6:
            sp.imprimePorFuncao();
        break;
        case 7:
            sp.imprimePorSalario();
        break;


}
	}while(!(opcao == 0));
return 0;
}
