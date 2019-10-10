#include "conta.cpp"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    float nSaldo, nlimite;
    string nData;


    cout << "Saldo : ";
    cin >> nSaldo;

    cout << "Data : ";
    cin >> nData;

    poupanca *pp = new poupanca(nSaldo, nData);
    cout << "olha ai: " << pp->getSaldo();
    cout << endl << "olha mais: " << pp->getData();


};
