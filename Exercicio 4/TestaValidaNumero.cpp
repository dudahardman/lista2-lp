#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMtAcimaException.h"
#include <iostream>

using namespace std;

TestaValidaNumero::TestaValidaNumero(){
    //construtor
}

void TestaValidaNumero::validaNumero(int num){
    ValorAbaixoException o;
    ValorAcimaException p;
    ValorMtAcimaException q;

    if(num <= 0){
        throw o;
    }
    if(num>100 && num<1000){
        throw p;
    }
    if(num>=1000){
        throw q;
    }
}