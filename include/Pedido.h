#ifndef PEDIDO_H
#define PEDIDO_H
#include <vector>
#include <string>
#include "ItemPedido.h"


using namespace std;

class Pedido
{
    //ItemPedido *itemped;

    public:
        Pedido();
        virtual ~Pedido();

        void adicionarItem(ItemPedido *itemPed);
        float valorTotal();

    protected:

    private:
        vector<ItemPedido*> vecItemPed;
};

#endif // PEDIDO_H
