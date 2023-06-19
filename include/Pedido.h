#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>
#include "ItemPedido.h"

using std::string;


class Pedido
{
    ItemPedido *itemped;

    public:
        Pedido();
        virtual ~Pedido();

        void adicionarItem(ItemPedido *itemped);
        float valorTotal();

    protected:

    private:

};

#endif // PEDIDO_H
