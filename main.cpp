#include <iostream> //biblioteca padrão I/O
#include <cstdlib> //biblioteca manipulação de memória, processos etc.
#include <string>
#include <locale.h> //biblioteca para acentuações de caracteres
#include "Produto.h"
#include "Livro.h"
#include "ItemPedido.h"
#include "Pedido.h"
#include "CD.h"


Pedido *pedido;
vector<ItemPedido*> vecItem;
using namespace std;

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
                pedido->adicionarItem();
                break;
            case 2:
                cout << "Alterar" << endl;
                break;
            case 3:
                pedido->listarPedido();
                break;
            case 4:
                pedido->deletarPedido();
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
    
    pedido->adicionarProdutos();
    
	cout << "- Seja Bem Vindo(a) ao sistema de Pedidos! -\n\n";
    Menu();

	return 0;
}
