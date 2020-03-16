#include "Pedido.h"
#include <iostream>
#include <string>
using namespace std;

Pedido::Pedido()
{
    //ctor
}

int Pedido::getNum(){
    return numero;
}

int Pedido::getQuant(){
    return quantidade;
}

string Pedido::getDesc(){
    return descricao;
}

double Pedido::getPreco(){
    return preco;
}

void Pedido::setPedido(int n, string d, int qt, double p){
    numero = n;
    descricao = d;
    quantidade = qt;
    preco = p;
}

void Pedido::setQuant(int qt){
    quantidade = qt;
}
