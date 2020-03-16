#pragma once

#include "Funcionario.h"
#include <iostream>

using namespace std;

class Assalariado : public Funcionario
{
    public:
        Assalariado(string n, int ma, double sal);
        double calculaSalario();

    private:
        double salario;
};