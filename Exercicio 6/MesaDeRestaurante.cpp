#include "MesaDeRestaurante.h"
#include <iostream>
#include <string>
#include <sstream>
#include "Pedido.h"
using namespace std;

MesaDeRestaurante::MesaDeRestaurante()
{
    for(int i = 0; i < 100;i++){
        pedidos[i].setPedido(0,"",0,0.0);
    }
}

void MesaDeRestaurante::adicionaAoPedido(Pedido novo){
    int j;
    for(j = 0; j < 100; j++){
        if(pedidos[j].getDesc() == novo.getDesc()){
            pedidos[j].setQuant(pedidos[j].getQuant() + novo.getQuant());
            novo.setQuant(0);
        }
        if(pedidos[j].getDesc() == ""){
            pedidos[j].setPedido(novo.getNum(), novo.getDesc(), novo.getQuant(), novo.getPreco());
            break;
        }
    }
}

string MesaDeRestaurante::getPedidos(){
    stringstream str;
    for (int i = 0; i < 100; i++){
        if(pedidos[i].getQuant() != 0){
            str << pedidos[i].getNum() << ", " << pedidos[i].getDesc() << ", " << pedidos[i].getQuant() << ", " << pedidos[i].getPreco() << endl;}
    }

    return str.str();
}

void MesaDeRestaurante::setPedido(Pedido p, int pos){
    pedidos[pos] = p;
}

void MesaDeRestaurante::zeraPedidos(){
    for(int i = 0; i < 100; i++){
        pedidos[i].setQuant(0);
    }
}

double MesaDeRestaurante::calculaTotal(){
    double total = 0;
    for(int i = 0; i < 100; i++){
        if(pedidos[i].getDesc() != ""){
        total += (pedidos[i].getPreco() * pedidos[i].getQuant());}
    }

    return total;
}
