#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "Funcionario.h"
#include "SistemaGerenciaFolha.h"
#include "OrcamentoEstouradoException.h"
#include <iostream>

using namespace std;

int main()
{
    double orcmax = 0.0;
    cout << "Digite o orcamento maximo: ";
    cin >> orcmax;
    SistemaGerenciaFolha *sistema = new SistemaGerenciaFolha(orcmax);

    sistema->setFuncionarios(new Assalariado("Joao", 48, 1000));
    sistema->setFuncionarios(new Horista("Maria", 25, 30, 40));
    sistema->setFuncionarios(new Comissionado("Jose", 56, 3000, 40, 0.50));

    try{
        double aux = sistema->calculaTotalFolha();
        cout << "Total da folha de pagamentos = " << aux << endl;
    }catch(exception& o){
        cout << o.what() << endl;
    }

    try{
        double aux2 = sistema->consultaSalarioFuncionario("duda");
        cout << "Salario: " << aux2 << endl;
    }catch(exception& f){
        cout << f.what() << endl;
    }

    try{
        double aux2 = sistema->consultaSalarioFuncionario("Jose");
        cout << "Salario: " << aux2 << endl;
    }catch(exception& f){
        cout << f.what() << endl;
    }

    try{
        double aux2 = sistema->consultaSalarioFuncionario("Joao");
        cout << "Salario: " << aux2 << endl;
    }catch(exception& f){
        cout << f.what() << endl;
    }

    try{
        double aux2 = sistema->consultaSalarioFuncionario("Maria");
        cout << "Salario: " << aux2 << endl;
    }catch(exception& f){
        cout << f.what() << endl;
    }

    return 0;
}