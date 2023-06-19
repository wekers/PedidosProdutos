#ifndef ITEMPEDIDO_H
#define ITEMPEDIDO_H
#include <string>
using std::string;
#include "Produto.h"


class ItemPedido : public Produto
{

    
    public:
        ItemPedido();
        virtual ~ItemPedido();

        ItemPedido(int quantidade, int codigo, const string& descricao, float valor);
        void setQuantidade(int qnt);
        int getQuantidade() const;
        Produto *prod;
        void Imprimir();

    protected:

    private:
        int quantidade;
};

#endif // ITEMPEDIDO_H
