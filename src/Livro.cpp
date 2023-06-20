#include "Livro.h"
#include <iostream>
using namespace std;

Livro::Livro(){
}

Livro::Livro(int cod, const string& des, float val, const string& is): Produto(cod, des, val) {
    this->isbn = is;
}

void Livro::setIsbn(const string &is) {
    isbn=is;
}

string Livro::getIsbn() const {
        return isbn;
}

CD::CD(){
}

Livro::~Livro(){
}
