#ifndef LIVRO_H
#define LIVRO_H
#include <string>
#include "Produto.h"
using std::string;

/*
class Livro
{
    public:
        Livro();
        virtual ~Livro();

    protected:

    private:
};*/
/* Herança */
class Livro: public Produto {

    public:
        Livro();
        virtual ~Livro();
        Livro(int codigo, const string& descricao, float valor, const string &);
        void setIsbn(const string &is);
        string getIsbn() const;

    protected:

    private:
        string isbn;
};

class CD: public Produto {

    public:
        CD();
};


#endif // LIVRO_H

