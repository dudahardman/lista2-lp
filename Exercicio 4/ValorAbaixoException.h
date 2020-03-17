#pragma once

#include <exception>
#include <iostream>
using namespace std;

class ValorAbaixoException : public exception
{
    const char* what() const throw(){
        return "*Valor abaixo de 100*";
    }

};