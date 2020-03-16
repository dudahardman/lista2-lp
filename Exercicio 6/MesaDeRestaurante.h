#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#include <iostream>
#include <string>
using namespace std;

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void adicionaAoPedido(Pedido novo);
        string getPedidos();
        void setPedido(Pedido p, int pos);
        void zeraPedidos();
        double calculaTotal();

    private:
        Pedido pedidos[100];
};

#endif // MESADERESTAURANTE_H
