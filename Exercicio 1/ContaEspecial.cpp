#include "ContaEspecial.h"
#include <iostream>

using namespace std;

ContaEspecial::ContaEspecial(string n, int num, double sal)
        : Conta(n, num, sal)
{

}

void ContaEspecial::definirLimite(){
    limite = 3*salarioMensal;
}