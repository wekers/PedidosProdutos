#include <iostream> //biblioteca padrão I/O
//#include <iomanip>
#include <cstdlib> //biblioteca manipulação de memória, processos etc.
#include <string>
#include <locale.h> //biblioteca para acentuações de caracteres
#include "Produto.h"
#include "Livro.h"
#include "ItemPedido.h"
#include "Pedido.h"
//#include <vector>


vector<ItemPedido*> vecItem;
using namespace std;

void Menu(){

    int menuEscolha = 0; // variável da escolha do menu
    do {
        cout << "Escolha uma das opções -----" << endl;
        cout << "1 - Criar pedido" << endl;
        cout << "2 - Alterar pedido" << endl;
        cout << "3 - Listar pedido" << endl;
        cout << "4 - Excluir pedido" << endl;
        cout << "5 - Sair"<< endl << endl;
        cout << "Digite a opção desejada: ";

        cin >> menuEscolha;

        switch (menuEscolha) {
            case 1:
                cout << "Criar pedido" << endl;
                break;
            case 2:
                cout << "Alterar" << endl;
                break;

            case 3:

                cout << "Listar" << endl;
                cout << "===== LISTA DO PEDIDO =====" << endl;
                for (const auto& peditens : vecItem) {
                        //ItemPedido->produto->getCodigo

                    cout << "ID: " << peditens->getQuantidade() << endl;
                    //cout << "Quant: " << this->quantidade<< endl;
                    cout << "Cod :" << peditens->getProdutoCod()<< endl;
                    cout << "Desc :" << peditens->getProdutoDescricao() << endl;
                    //cout << "Desc :" << peditens->produto->getDescricao() << endl;
                    cout << "-------------------------" << endl;
                }
                break;

            case 4:
                cout << "Opcao 4\n";
                break;
            case 5:
                cout << "Programa finalizado pelo usuário!" << endl;
                exit(0);
                break;
            default:
                cout << endl << "*** Opção Inválida! *** Escolha uma opção entre -> 1 à 5" << endl << endl ;
                break;
        }

    }while (menuEscolha != 5);

}

int main()
{
    setlocale(LC_ALL, "Portuguese"); //seta a língua em português

    /* Adicionar alguns produtos */
    Produto p1=Produto(12, "produto naval", 20.56);
    Livro l1=Livro(10, "livro bacana", 22.7, "isnb123");

    ItemPedido it1=ItemPedido(3, &p1);
    vecItem.push_back(&it1);

    ItemPedido it2=ItemPedido(2, &l1);
    vecItem.push_back(&it2);
    /*
	Livro* liv = new Livro();
	liv->setIsbn("abc");
	cout << "ISBN :" << liv->getIsbn() << endl;

*/
/*
Produto p1=Produto(12, "produto naval", 20.56);
ItemPedido it1=ItemPedido(3, &p1);
vecItem.push_back(&it1);
*/
//Produto *prod2 = new Produto(234,"descricao bbb", 420.0);
//ItemPedido *iiprod2 = new ItemPedido(4, prod2);
//vecItem.push_back(iiprod2);
/*    Produto *prod = new Produto(123,"descricao aaa", 20.0);
Produto *prod3 = new Produto(345,"descricao ccc", 720.0);
  //Produto *prod3 = new Produto;
  //  ItemPedido iProduto(7, prod3);
	//prod->setodigo(123);
ItemPedido *iiprod = new ItemPedido(2, prod);
	//ItemPedido iiprod3(5, prod3);
    cout << "Codigo :" << prod->getCodigo() << " Desc: " << prod->getDescricao() << " Valor: " << prod->getValor() << " Qtd: " << iiprod->getQuantidade() << endl;
    cout << "Codigo :" << prod2->getCodigo() << " Desc: " << prod2->getDescricao() << " Valor: " << prod2->getValor() << " Qtd: " << iiprod2->getQuantidade() << endl;
    //cout << "Codigo :" << prod3->getCodigo() << " Desc: " << prod3->getDescricao() << " Valor: " << prod3->getValor() << " Qtd: " << iiprod3.getQuantidade() << endl;
*/
	cout << "- Seja Bem Vindo(a) ao sistema de Pedidos! -\n\n";
    Menu();

	return 0;
}
