#include "Comissionado.h"
#include "Funcionario.h"
#include <iostream>

using namespace std;

Comissionado::Comissionado(string n, int ma, double sb, double vs, double pc)
    : Funcionario(n,ma)
{
    salarioBase = sb;
    vendasSemanais = vs;
    percentualComissao = pc;
}

double Comissionado::calculaSalario(){
    double total=0;
    total = (salarioBase) + ((percentualComissao + 1) * (vendasSemanais));
    return total;
}