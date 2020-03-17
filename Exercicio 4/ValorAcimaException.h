#pragma once

#include <exception>
#include <iostream>
using namespace std;

class ValorAcimaException : public exception{
    const char* what() const throw(){
        return "*Valor acima de 100 e abaixo de 1000*";
    }
};