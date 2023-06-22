#include <iostream>
#include <string>
#include "ItemPedido.h"
#include "Pedido.h"
#include <vector>
using namespace std;

ItemPedido::ItemPedido(){

}

ItemPedido::~ItemPedido(){
}


ItemPedido::ItemPedido(int quantidade, Produto *produto){
    this->quantidade = quantidade;
    this->produto = produto;
}


void ItemPedido::setQuantidade(int qnt){
    quantidade = qnt;
}

int ItemPedido::getQuantidade() const {
    return quantidade;
}

int ItemPedido::getProdutoCod() const {
    return produto->getCodigo();
}

string ItemPedido::getProdutoDes() const {
    return produto->getDescricao();
}

float ItemPedido::getProdutoVal() const {
    return produto->getValor();
}



