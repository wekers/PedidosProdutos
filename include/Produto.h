#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
using std::string;

class Produto
{
    public:
        Produto();
        virtual ~Produto();
        void setCodigo(int cod);
        void setValor(float val);
        void setDescricao(const string &);
        int getCodigo() const;
        float getValor() const;
        string getDescricao() const;
        Produto(int codigo, const string& descricao, float valor);

    protected:

    private:
        int codigo;
        string descricao;
        float valor;
};

#endif // PRODUTO_H
