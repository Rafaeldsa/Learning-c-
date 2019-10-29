#ifndef SETORPESSOAL_H_INCLUDED
#define SETORPESSOAL_H_INCLUDED

#include "funcionario.cpp"
#include <iomanip>

class SetorPessoal{
    funcionario *funcionarios;
    int num;
public:
    SetorPessoal(int);
    void addFunc(funcionario,int);
    void imprimeFolha();
    float valorFolha();
    int MaiorSalario();
    void mostraPorDep(int);
    void imprimePorFuncao();
    void imprimePorSalario();
    void impressao();



};


#endif // SETORPESSOAL_H_INCLUDED
