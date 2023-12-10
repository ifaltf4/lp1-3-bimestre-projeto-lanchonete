#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <vector>
#include "menu.hpp"
#include "cliente.hpp"


class Pedido {
private:
    std::vector<Menu*> escolha;
    int mesa;
public:
    Pedido();
    virtual ~Pedido();

    void adicionarproduto(Menu* produto);
    void removerproduto(Menu* produto);
    double getpreco() const;
    int getmesa();
    int setmesa(int val);
};

#endif