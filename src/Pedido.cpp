#include <iostream>
#include <string>
#include <iomanip>
#include "Pedido.h"
#include "Livro.h"
#include "CD.h"
#include <vector>
#include "Produto.h"
#include "ItemPedido.h"
using namespace std;

vector <Produto*> produtos;
vector <ItemPedido*> vecItemPed;

Pedido::Pedido(){

}

Pedido::~Pedido(){
}

/* metodo para adicionar produtos, via hardcode*/
void Pedido::adicionarProdutos(){
    /* Adicionando alguns produtos */
    cout << fixed << setprecision(2);    
    Produto *p1 = new Produto(10, "Agulha Toca Discos Vinil N44 Shure", 139.9);
    Livro   *l1 = new Livro(20, "Livro - PMP Use a Cabeça 4ª Ed", 89.50, "978-85-508-0740-9");
    CD      *c1 = new CD(30, "Cd Dope Lemon - Honey Bones", 17.20);
    Produto *p2 = new Produto(11, "Head Shell Completo Capsula E Agulha Audio Technica", 290.9);
    Livro   *l2 = new Livro(21, "Livro - Clube Da Luta - Chuck Palahniuk", 67.50, "978-85-8044-449-0");
    CD      *c2 = new CD(31, "Cd UB40 - Labour of Love", 21.0);

    produtos.push_back(p1);
    produtos.push_back(p2);
    produtos.push_back(c1);
    produtos.push_back(c2);
    produtos.push_back(l1);
    produtos.push_back(l2);
}

/* metodo para adicionar itens ao pedido */
void Pedido::adicionarItem(){

    string resposta;
    int codigo, quantidade;

    if(!vecItemPed.empty()){
        cout << endl << "*** OBS: Um Pedido já existe ***" << endl << endl;
        return;
                
    }
    maisProdutos: //label de salto
    cout << endl << "Digite 2 (para ver a lista de produtos disponiveis)\nou o codigo do produto que deseja adicionar:";
    cin >> codigo;
    
    Produto* produtoEncontrado = nullptr;
    for (auto& listaprodutos : produtos) {
      
        if (listaprodutos->getCodigo() == codigo) {
            cout << endl << "Codigo: " << codigo << " | " << listaprodutos->getDescricao() << " | " << listaprodutos->getValor() << endl;
            produtoEncontrado = listaprodutos;
            cout << "deseja adicionar? s/n :";
            cin >> resposta;
            
            if( resposta == "s") {
                cout << "digite a quantidade desejada:";
                cin >> quantidade;
                
                ItemPedido *it1 = new ItemPedido(quantidade, listaprodutos);
                vecItemPed.push_back(it1);
                cout << "---Pedido cadastrado com sucesso!!" << endl << endl;
                
            int opcao;
            cout << "Deseja adicionar mais produtos? (1 - Sim, 0 - Não): ";
            cin >> opcao;
            while (opcao == 1){
                goto maisProdutos; //salta para maisProdutos    
            }
                exit;
               
            } else if( resposta == "n") {
                cout << endl;
                break;
            }
        }
        else if (codigo == 2){
           cout << endl;
            cout << "Produtos disponiveis:" << endl;
            for (auto& listaprodutos : produtos) {
                cout << "Codigo: " << listaprodutos->getCodigo() << " | " << listaprodutos->getDescricao() << " | " << listaprodutos->getValor() << endl;
            }
            goto maisProdutos;
            
        }
    
     }
     if (produtoEncontrado == nullptr) {
                cout << endl << "*** Produto nao encontrado. ***" << std::endl;
                goto maisProdutos; //salta para maisProdutos 
                
     }
        
}


void Pedido::listarPedido(){
    cout << fixed << setprecision(2);
    cout << endl << "===== LISTA DE PEDIDO =====" << endl;
    
    if(vecItemPed.empty()){
        cout << endl << "*** OBS: Nenhum Pedido Cadastrado ***" << endl << endl;
        return;
    }
    int i=1;
    float subTotal, valTotal;
    for (auto& peditens : vecItemPed) {
        
        cout << i <<" - Produdo Codigo: " << peditens->getProdutoCod() << endl;
        cout << "Descrição: " << peditens->getProdutoDes() << endl;
        cout << "Quantidade: " << peditens->getQuantidade() << endl;
        cout << "Valor Unitario: " << peditens->getProdutoVal() << endl;
        
        subTotal = peditens->getProdutoVal() * peditens->getQuantidade();
        cout << "Valor x Qtd: " << subTotal << endl;
        cout << "-------------------------" << endl;
        i++;
        //valTotal += subTotal;
    }
    cout << "Valor Total do Pedido: " << valorTotal() << endl << endl; 
    
}

void Pedido::alterarPedido(){


}

void Pedido::deletarPedido(){
    if(vecItemPed.empty()){
        cout << endl << "*** OBS: Nenhum Pedido Cadastrado para Excluir ***" << endl << endl;
        return;
    }
    vecItemPed.clear();
    cout << endl << " *** Pedido excluído com sucesso! ***" << endl << endl;
    return;
    
}

float Pedido::valorTotal() {
    cout << fixed << setprecision(2);    
    float valorTotal, subTotal;
    for(const auto& item : vecItemPed){
        subTotal = item->getProdutoVal() * item->getQuantidade();
        valorTotal += subTotal;

    }
    return valorTotal;
}
