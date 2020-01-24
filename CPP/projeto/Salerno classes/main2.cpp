#include "pessoa.cpp"
#include "cliente.cpp"
#include "fornecedor.cpp"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string nome, rua, bairro;
    int CEP, numero, nSecao;
    float plafond, valorEmDivida;
    long int CPF;
    int dia, mes, ano;
    float sal1, sal2, sal3, sal4, sal5, resultado;

    Fornecedor f1;
    Fornecedor f2;
    Fornecedor f3;

    Cliente c1;
    Cliente c2;

    cout << "Insira os dados do fornecedor 2" << endl;
    cout << endl << "Nome: ";
    cin >> nome;
    f1.setNome(nome);
    cout << endl << "CPF: ";
    cin >> CPF;
    f1.setCPF(CPF);
    cout << endl << "Rua :";
    cin >> rua;
    cout << endl << "Bairro: ";
    cin >> bairro;
    cout << endl << "Numero: ";
    cin >> numero;
    cout << endl << "CEP: ";
    cin >> CEP;
    f1.setEndereco(rua, numero, bairro, CEP);
    cout << endl << "Data de nascimento" << endl;
    cout << endl << "Dia: ";
    cin >> dia;
    cout << endl << "Mes: ";
    cin >> mes;
    cout << endl << "Ano: ";
    cin >> ano;
    f1.setdataNasc(dia, mes, ano);
    cout << endl << "Plafond: ";
    cin >> plafond;
    f1.set_plafond(plafond);
    cout << endl << "Valor em Divida: ";
    cin >> valorEmDivida;
    f1.set_valorEmDivida(valorEmDivida);
    sal1 = f1.obterSaldo();

    cout << "Insira os dados do fornecedor 2" << endl;
    cout << endl << "Nome: ";
    cin >> nome;
    f2.setNome(nome);
    cout << endl << "CPF: ";
    cin >> CPF;
    f2.setCPF(CPF);
    cout << endl << "Rua :";
    cin >> rua;
    cout << endl << "Bairro: ";
    cin >> bairro;
    cout << endl << "Numero: ";
    cin >> numero;
    cout << endl << "CEP: ";
    cin >> CEP;
    f2.setEndereco(rua, numero, bairro, CEP);
    cout << endl << "Data de nascimento" << endl;
    cout << endl << "Dia: ";
    cin >> dia;
    cout << endl << "Mes: ";
    cin >> mes;
    cout << endl << "Ano: ";
    cin >> ano;
    f2.setdataNasc(dia, mes, ano);
    cout << endl << "Plafond: ";
    cin >> plafond;
    f2.set_plafond(plafond);
    cout << endl << "Valor em Divida: ";
    cin >> valorEmDivida;
    f2.set_valorEmDivida(valorEmDivida);
    sal2 = f2.obterSaldo();

    cout << "Insira os dados do fornecedor 3" << endl;
    cout << endl << "Nome: ";
    cin >> nome;
    f3.setNome(nome);
    cout << endl << "CPF: ";
    cin >> CPF;
    f3.setCPF(CPF);
    cout << endl << "Rua :";
    cin >> rua;
    cout << endl << "Bairro: ";
    cin >> bairro;
    cout << endl << "Numero: ";
    cin >> numero;
    cout << endl << "CEP: ";
    cin >> CEP;
    f3.setEndereco(rua, numero, bairro, CEP);
    cout << endl << "Data de nascimento" << endl;
    cout << endl << "Dia: ";
    cin >> dia;
    cout << endl << "Mes: ";
    cin >> mes;
    cout << endl << "Ano: ";
    cin >> ano;
    f3.setdataNasc(dia, mes, ano);
    cout << endl << "Plafond: ";
    cin >> plafond;
    f3.set_plafond(plafond);
    cout << endl << "Valor em Divida: ";
    cin >> valorEmDivida;
    f3.set_valorEmDivida(valorEmDivida);
    sal3 = f3.obterSaldo();

    cout << "Insira os dados do cliente 1" << endl;
    cout << endl << "Nome: ";
    cin >> nome;
    c1.setNome(nome);
    cout << endl << "CPF: ";
    cin >> CPF;
    c1.setCPF(CPF);
    cout << endl << "Rua :";
    cin >> rua;
    cout << endl << "Bairro: ";
    cin >> bairro;
    cout << endl << "Numero: ";
    cin >> numero;
    cout << endl << "CEP: ";
    cin >> CEP;
    c1.setEndereco(rua, numero, bairro, CEP);
    cout << endl << "Data de nascimento" << endl;
    cout << endl << "Dia: ";
    cin >> dia;
    cout << endl << "Mes: ";
    cin >> mes;
    cout << endl << "Ano: ";
    cin >> ano;
    c1.setdataNasc(dia, mes, ano);
    cout << endl << "Plafond: ";
    cin >> plafond;
    c1.set_plafond(plafond);
    cout << endl << "Valor em Divida: ";
    cin >> valorEmDivida;
    c1.set_valorEmDivida(valorEmDivida);
    sal4 = c1.obterSaldo();

    cout << "Insira os dados do cliente 1" << endl;
    cout << endl << "Nome: ";
    cin >> nome;
    c2.setNome(nome);
    cout << endl << "CPF: ";
    cin >> CPF;
    c2.setCPF(CPF);
    cout << endl << "Rua :";
    cin >> rua;
    cout << endl << "Bairro: ";
    cin >> bairro;
    cout << endl << "Numero: ";
    cin >> numero;
    cout << endl << "CEP: ";
    cin >> CEP;
    c2.setEndereco(rua, numero, bairro, CEP);
    cout << endl << "Data de nascimento" << endl;
    cout << endl << "Dia: ";
    cin >> dia;
    cout << endl << "Mes: ";
    cin >> mes;
    cout << endl << "Ano: ";
    cin >> ano;
    c2.setdataNasc(dia, mes, ano);
    cout << endl << "Plafond: ";
    cin >> plafond;
    c2.set_plafond(plafond);
    cout << endl << "Valor em Divida: ";
    cin >> valorEmDivida;
    c2.set_valorEmDivida(valorEmDivida);
    sal5 = c2.obterSaldo();

    resultado = (sal1 + sal2 + sal3) - (sal4 + sal5);

    if(resultado == 0) {
        cout << endl << "Supriu!";
    } else {
        cout << endl << "Não supriu, o valor é: " << resultado << endl;
    }

};
