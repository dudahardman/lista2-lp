#pragma once

#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "Funcionario.h"
#include <iostream>
#include <vector>

using namespace std;



class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha(double orcMax);
        void setFuncionarios(Funcionario *func);
        double consultaSalarioFuncionario(string nome);
        double calculaTotalFolha();

    private:
        double orcamentoMax;
        vector <Funcionario*> funcionarios;
};