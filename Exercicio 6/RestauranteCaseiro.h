#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"
#include <iostream>
#include <string>
#include <sstream>
#include "Pedido.h"
using namespace std;

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        double totalRestaurante();
        void adicionaAoPedido2(Pedido novo, int pos);
        string getMesas();
        void setMesa(MesaDeRestaurante m, int pos);

    private:
        MesaDeRestaurante mesas[20];
};

#endif // RESTAURANTECASEIRO_H
