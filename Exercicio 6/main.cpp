#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"
#include <iostream>
#include <string>
#include <sstream>
#include "Pedido.h"
using namespace std;

int main()
{
    Pedido p1 = Pedido();
    Pedido p2 = Pedido();
    Pedido p3 = Pedido();
    Pedido p4 = Pedido();
    p1.setPedido(55, "coca", 1, 3.5);
    p2.setPedido(12, "hamburguer", 2, 15);
    p3.setPedido(14, "brownie", 2, 4.5);
    p4.setPedido(10, "batatafrita" , 1 , 2.0);

    MesaDeRestaurante m1 = MesaDeRestaurante();
    m1.setPedido(p1, 0);
    m1.setPedido(p2, 1);

    MesaDeRestaurante m2 = MesaDeRestaurante();
    m2.setPedido(p1,0);
    m2.setPedido(p2,1);
    m2.setPedido(p3,2);

    RestauranteCaseiro r = RestauranteCaseiro();
    r.setMesa(m1, 0);
    r.setMesa(m2, 1);

    cout << "MESA 1: " << endl;
    cout << m1.getPedidos();
    m1.adicionaAoPedido(p3);
    cout << "MESA 1 + adicao: " << endl;
    cout << m1.getPedidos();
    cout << "TOTAL MESA 1: " << m1.calculaTotal() << endl;
    cout << "TOTAL RESTAURANTE ANTES: " << r.totalRestaurante() << endl;
    r.adicionaAoPedido2(p4,0);
    cout << "TOTAL RESTAURANTE DEPOIS: " << r.totalRestaurante() << endl;


    return 0;
}
