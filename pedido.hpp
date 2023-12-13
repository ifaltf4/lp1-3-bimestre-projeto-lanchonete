#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <vector>
#include "menu.hpp"

class Pedido
{
private:
    std::vector<Menu *> escolha;
    int mesa;

public:
    Pedido(std::string iten);

    virtual ~Pedido();

    void adicionarproduto(Menu *produto);
    void removerproduto(Menu *produto);
    double getPreco() const;
    int getmesa();
    int setmesa(int val);
};

#endif