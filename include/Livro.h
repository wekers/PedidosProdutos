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
        Livro(const string &);
        void setIsbn(const string &is);
        string getIsbn() const;

    private:
        string isbn;
};

class CD: public Produto {

    public:
        CD();
};


#endif // LIVRO_H

