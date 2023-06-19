#include "Produto.h"
#include <iostream>
using namespace std;


/* Construtor padrão */
Produto::Produto(){
}

/* Construtor com argumentos */
Produto::Produto(int cod, const string& des, float val){
    this->codigo = cod;
    this->valor = val;
    this->descricao = des;
}

/* Destrutor */
Produto::~Produto(){
}

/* Getters e Setters */
void Produto::setCodigo(int cod){
    codigo=cod;
}

int Produto::getCodigo() const {
    return codigo;
}

void Produto::setValor(float val){
    valor=val;
}

float Produto::getValor() const{
    return valor;
}

void Produto::setDescricao(const string &des){
    descricao=des;
}

string Produto::getDescricao() const {
    return descricao;
}




