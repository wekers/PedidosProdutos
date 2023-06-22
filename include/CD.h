#ifndef CD_H
#define CD_H
#include <string>
#include "Produto.h"
using std::string;

/* Herança */
class CD : public Produto {
    public:
        CD();
        virtual ~CD();
        CD(int codigo, const string& descricao, float valor);

    protected:

    private:
};

#endif // CD_H
