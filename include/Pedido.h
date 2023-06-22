#ifndef PEDIDO_H
#define PEDIDO_H
#include <vector>
#include <string>
#include "ItemPedido.h"
using std::string;

using namespace std;

class Pedido
{
    
    public:
        Pedido();
        virtual ~Pedido();

        void adicionarItem();
        void adicionarProdutos();
        void alterarPedido();
        void listarPedido();
        void deletarPedido();
        float valorTotal();
        

    protected:

    private:
        
        
};

#endif // PEDIDO_H
