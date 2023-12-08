

#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <vector>
#include "menu.hpp"
#include "cliente.hpp"

class Pedido {
private:
    std::vector<menu*> produto;
    cliente* cliente;
    int mesa;
public:
    Pedido(cliente* cliente);
    virtual ~Pedido();

    void adicionarproduto(menu* produto);
    void removerproduto(menu* produto);
    double getpreco() const;
    int getmesa();
};

#endif