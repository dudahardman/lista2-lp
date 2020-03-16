#pragma once

#include "IConta.h"
#include "Conta.h"
#include <iostream>

using namespace std;

class ContaEspecial : public Conta
{
    public:
    ContaEspecial(string n, int num, double sal);
    void definirLimite();

};