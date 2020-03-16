#pragma once

#include <iostream>
#include <exception>
using namespace std;

class OrcamentoEstouradoException : public exception
{
    public:
        const char* what() const throw() {
            return "*Total da folha de pagamentos ultrapassou o orcamento maximo.*";
        }
};