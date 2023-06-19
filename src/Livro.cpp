#include "Livro.h"
#include <iostream>
using namespace std;

Livro::Livro(){
}

void Livro::setIsbn(const string &is){
    isbn=is;
}

string Livro::getIsbn() const {
        return isbn;
}

CD::CD(){
}

Livro::~Livro(){
}
