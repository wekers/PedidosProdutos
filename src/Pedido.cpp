#include <iostream>
#include <string>
#include <vector>
#include "Pedido.h"
using namespace std;

vector<ItemPedido*> vecItemPed;


Pedido::Pedido(){

}

Pedido::~Pedido(){
}

void adicionarItem(ItemPedido *itemped){
    vecItemPed.push_back(itemped);

}

float valorTotal() {
    float valorTotal = 0.0f;
    for(const auto& itemped : vecItemPed){
        //valorTotal += itemped
    }
    return valorTotal;
}
