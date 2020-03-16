#pragma once
#include <iostream>
#include <exception>
using namespace std;

class SaldoNaoDisponivelException : public exception
{
    public:
        const char* what() const throw() {
            return "*Saldo insuficiente*";
        }
};