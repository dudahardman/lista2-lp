#pragma once

#include "IConta.h"
#include <iostream>

using namespace std;

class Conta : public IConta
{
    public:
        Conta(string n, int num, double sal);
        string getNome();
        double getSalario();
        double getSaldo();
        double getLimite();
        double getNumero();
        void setNome(string n);
        void setSalario(double sal);
        void setSaldo(double s);
        void setNumero(int num);
        void setLimite(double lim);
        virtual void definirLimite();
        void sacar(double valor);
        void depositar(double valor);

    protected:
        string nomeCliente;
        double salarioMensal, saldo, limite;
        int numeroConta;
        
};