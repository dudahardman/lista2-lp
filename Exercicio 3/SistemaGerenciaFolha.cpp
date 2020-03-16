#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "Funcionario.h"
#include "OrcamentoEstouradoException.h"
#include "FuncionarioNaoExisteException.h"
#include <iostream>
#include <vector>
#include <exception>

using namespace std;


SistemaGerenciaFolha::SistemaGerenciaFolha(double orcMax)
{
    orcamentoMax = orcMax;
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *func){
    funcionarios.push_back(func);
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(string nome){
    int encontrou = 0;
    double salario = 0.0;
    FuncionarioNaoExisteException f;
    for(unsigned int i = 0; i < funcionarios.size(); i++){
        if(funcionarios[i]->getNome().find(nome) != string::npos){
                salario = funcionarios[i]->calculaSalario();
                encontrou ++;
        }
    }

        if(encontrou == 0){
            throw f;
        }else{
            return salario;}


}

double SistemaGerenciaFolha::calculaTotalFolha(){
    double total = 0;
    for(unsigned int i = 0; i < funcionarios.size(); i++){
        total += funcionarios[i]->calculaSalario();
    }
    OrcamentoEstouradoException o;
        if(total > orcamentoMax){
            throw o;
        }
    return total;

}