#include <iostream> //biblioteca padrão I/O
//#include <iomanip>
#include <cstdlib> //biblioteca manipulação de memória, processos etc.
#include <locale.h> //biblioteca para acentuações de caracteres
#include "Produto.h"
#include "ItemPedido.h"
#include "Pedido.h"
#include <string>
#include <vector>
using std::string;
using namespace std;


vector<ItemPedido*> vecItem;
ItemPedido *item;


void Menu(){

    int menuEscolha = 0; // variável da escolha do menu
    do {
        cout << "Escolha uma das opções -----" << endl;
        cout << "1 - Criar pedido" << endl;
        cout << "2 - Alterar pedido" << endl;
        cout << "3 - Listar pedidos" << endl;
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
                cout << "===== LISTA DE PEDIDOS =====" << endl;
                for (const auto& peditens : vecItem) {
                        //ItemPedido->getItemPedido

                    cout << "ID: " << peditens->getQuantidade() << endl;
                    //cout << "Cliente: " << peditens->getDescricao() << endl;
                   cout << "-------------------------" << endl;
                }
                item->Imprimir();
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


/*
	Livro* liv = new Livro();
	liv->setIsbn("abc");
	cout << "ISBN :" << liv->getIsbn() << endl;

*
	ItemPedido *iiprod2 = new ItemPedido(3, 234,"descricao bbb", 420.0);
	
    vecItem.push_back(iiprod2);


   // cout << "Codigo :" << prod->getCodigo() << " Desc: " << prod->getDescricao() << " Valor: " << prod->getValor() << " Qtd: " << iiprod->getQuantidade() << endl;
   // cout << "Codigo :" << prod2->getCodigo() << " Desc: " << prod2->getDescricao() << " Valor: " << prod2->getValor() << " Qtd: " << iiprod2->getQuantidade() << endl;
    //cout << "Codigo :" << prod3->getCodigo() << " Desc: " << prod3->getDescricao() << " Valor: " << prod3->getValor() << " Qtd: " << iiprod3.getQuantidade() << endl;

*/
	cout << "- Seja Bem Vindo(a) ao sistema de Pedidos! -\n\n";
    Menu();

	return 0;
}
