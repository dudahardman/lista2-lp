#pragma once

#include <exception>
#include <iostream>
using namespace std;

class ValorMtAcimaException : public exception
{
    const char* what() const throw(){
        return "*Valor acima de ou igual a 1000*";
    }
};