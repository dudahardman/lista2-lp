#pragma once

#include <iostream>

using namespace std;

class Funcionario
{
    public:
        Funcionario(string n, int ma);
        virtual double calculaSalario()=0;
        string getNome();

    protected:
        string nome;
        int matricula;
};