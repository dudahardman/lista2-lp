#include "Funcionario.h"
#include <iostream>

using namespace std;

Funcionario::Funcionario(string n, int ma)
{
    nome = n;
    matricula = ma;
}

string Funcionario::getNome(){
    return nome;
}