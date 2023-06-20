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


ItemPedido::ItemPedido(int quantidade, Produto *produto){
    this->quantidade = quantidade;
    this->produto = produto;

    //cout << "Quant: " << this->quantidade<< endl;
    //cout << "Cod :" << this->produto->getCodigo() << endl;
    //cout << "Desc :" << this->produto->getDescricao() << endl;
}


void ItemPedido::setQuantidade(int qnt){
    quantidade = qnt;
}

int ItemPedido::getQuantidade() const {
    return quantidade;
}

int ItemPedido::getProdutoCod() const {
    return this->produto->getCodigo();
}

string ItemPedido::getProdutoDescricao() const {
   // return this->produto->getDescricao();
    return produto->getDescricao();
}





