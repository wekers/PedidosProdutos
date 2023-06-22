#ifndef ITEMPEDIDO_H
#define ITEMPEDIDO_H
#include <string>
using std::string;
#include "Produto.h"
#include "Livro.h"

class ItemPedido
{

    public:

        ItemPedido();
        virtual ~ItemPedido();

        ItemPedido(int quantidade, Produto *produto);

        void setQuantidade(int qnt);
        int getQuantidade() const;
        int getProdutoCod() const;
        string getProdutoDes() const;
        float getProdutoVal() const;
    protected:

    private:
        int quantidade;
        Produto *produto;


};

#endif // ITEMPEDIDO_H
