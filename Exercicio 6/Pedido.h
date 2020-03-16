#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include <string>
using namespace std;

class Pedido
{
    public:
        Pedido();
        int getNum();
        int getQuant();
        string getDesc();
        double getPreco();
        void setPedido(int n, string d, int qt, double p);
        void setQuant(int qt);

    private:
        int numero, quantidade;
        string descricao;
        double preco;
};

#endif // PEDIDO_H
