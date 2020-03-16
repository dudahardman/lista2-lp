#include "Conta.h"
#include "SaldoNaoDisponivelException.h"
#include <exception>
#include <iostream>

using namespace std;

Conta::Conta(string n, int num, double sal){
    setNome(n);
    setNumero(num);
    setSalario(sal);
}

string Conta::getNome(){
    return nomeCliente;
}

double Conta::getSalario(){
    return salarioMensal;
}

double Conta::getSaldo(){
    return saldo;
}

double Conta::getLimite(){
    return limite;
}

double Conta::getNumero(){
    return numeroConta;
}

void Conta::setNome(string n){
    nomeCliente = n;
}

void Conta::setSalario(double sal){
    salarioMensal = sal;
}

void Conta::setSaldo(double s){
    saldo = s;
}

void Conta::setNumero(int num){
    numeroConta = num;
}

void Conta::setLimite(double lim){
    limite = lim;
}

void Conta::definirLimite(){
    setLimite(2*salarioMensal);
}

void Conta::sacar(double valor){
    SaldoNaoDisponivelException n;
    if(valor > getSaldo()){
        throw n;
    }
    else{
        saldo -=valor;
    }
}

void Conta::depositar(double valor){
    saldo+=valor;
}