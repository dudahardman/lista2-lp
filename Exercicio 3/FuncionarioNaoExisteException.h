#pragma once

#include <iostream>
#include <exception>
using namespace std;

class FuncionarioNaoExisteException : public exception
{
    public:
        const char* what() const throw() {
            return "*Nao ha funcionario com esse nome.*";
        }
};