#include "Horista.h"
#include "Funcionario.h"
#include <iostream>

using namespace std;

Horista::Horista(string n, int ma, double salH, double ht)
    : Funcionario(n,ma)
{
    salarioHora = salH;
    horaTrab = ht;
}

double Horista::calculaSalario(){
    double total=0;
    if(horaTrab == 40){
        total = salarioHora * 40;
    }
    if(horaTrab>40){
        total = (salarioHora) * (horaTrab-40);
    }
    return total;
}