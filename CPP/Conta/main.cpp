#include "conta.cpp"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{

    float novoSaldo, novoLimite, cValor;
    string novaData, dataAtual;



    poupanca *poupanca1;
    contaCorrente *contaCorrente1;


                cout << endl << "Vamos iniciar criando uma conta corrente e realizar suas devidas operacoes" << endl;
                cout << endl << "Saldo: ";
                cin >> novoSaldo;
                cout << endl << "Limite: ";
                cin >> novoLimite;
                contaCorrente1 = new contaCorrente(novoSaldo, novoLimite);

                cout << endl << "Valor sacar: ";
                cin >> cValor;
                cout << endl << "Saldo apos o saque: " << contaCorrente1->sacar(cValor) << endl;

                cout << endl << "Valor a depositar: ";
                cin >> cValor;
                cout << endl << "Saldo apos o deposito: " << contaCorrente1->depositar(cValor) << endl;

                cout << endl << "Juros computado: " << contaCorrente1->computar() << endl;

                cout << endl << "Criar uma poupanca e fazendo suas devidas operacoes" << endl;
                cout << endl << "Saldo: ";
                cin >> novoSaldo;
                cout << endl << "dia do aniversario: ";
                cin >> novaData;
                poupanca1 = new poupanca(novoSaldo, novaData);

                cout << endl << "Valor para sacar: ";
                cin >> cValor;
                cout << endl << "Saldo apos o saque: " << poupanca1->sacar(cValor) << endl;

                cout << endl << "Valor para depositar: ";
                cin >> cValor;
                cout << endl << "Saldo apos o deposito: " << poupanca1->depositar(cValor) << endl;

                cout << endl << "Insira a dia atual: ";
                cin >> dataAtual;
                cout << endl << "Juros computado: " << poupanca1->computar(dataAtual) << endl;

                cout << endl << "FIM" << endl;
};
