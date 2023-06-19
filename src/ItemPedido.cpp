#include <iostream>
#include <string>
#include "ItemPedido.h"
#include "Pedido.h"
#include <vector>
using namespace std;

vector<ItemPedido*> itempeds;

ItemPedido::ItemPedido(){

}

ItemPedido::~ItemPedido(){
}


ItemPedido::ItemPedido(int quantidade, int cod, const string& des, float val) : Produto(cod, des, val){
    
    this->quantidade = quantidade;
    
}

void ItemPedido::setQuantidade(int qnt){
    quantidade = qnt;
}

int ItemPedido::getQuantidade() const {
    return quantidade;
}

void ItemPedido::Imprimir(){
    ItemPedido *iiprod2 = new ItemPedido(3, 234,"descricao bbb", 420.0);
	//ItemPedido iiprod3(5, prod3);
    itempeds.push_back(iiprod2);
    for (const auto& peditens : itempeds) {
    cout << "Desc: " << peditens->getDescricao() << endl;
    cout << "Val: " << peditens->getValor() << endl;
    }
}
