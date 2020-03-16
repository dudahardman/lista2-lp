#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"
#include <iostream>
#include <string>
#include <sstream>
#include "Pedido.h"
using namespace std;

RestauranteCaseiro::RestauranteCaseiro()
{
}

double RestauranteCaseiro::totalRestaurante(){
    double total = 0;
    for(int i = 0; i < 20; i++){
        total += mesas[i].calculaTotal();
    }
    return total;
}
void RestauranteCaseiro::adicionaAoPedido2(Pedido novo, int pos){
    mesas[pos].adicionaAoPedido(novo);
}
string RestauranteCaseiro::getMesas(){
    stringstream str2;
    for(int i = 0; i < 20; i++){
        if(mesas[i].getPedidos() != ""){
            str2 << mesas[i].getPedidos();}
    }
    return str2.str();
}
void RestauranteCaseiro::setMesa(MesaDeRestaurante m, int pos){
    mesas[pos] = m;
}
