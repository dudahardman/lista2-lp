#pragma once

#include "Funcionario.h"
#include <iostream>

using namespace std;

class Horista : public Funcionario
{
    public:
        Horista(string n, int ma, double salH, double ht);
        double calculaSalario();

    private:
        double salarioHora, horaTrab;
};