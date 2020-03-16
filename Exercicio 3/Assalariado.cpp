#include "Assalariado.h"
#include "Funcionario.h"
#include <iostream>

using namespace std;

Assalariado::Assalariado(string n, int ma, double sal)
    : Funcionario(n,ma)
{
    salario = sal;
}

double Assalariado::calculaSalario(){
    return salario;
}