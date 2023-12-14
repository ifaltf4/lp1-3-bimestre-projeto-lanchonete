#ifndef PEDIDO_HPP
#define PEDIDO_HPP
#include <iostream>
#include <map>
#include "menu.hpp"
#include "bebida.hpp"
#include "prato.hpp"

class Pedido
{
private:
    std::map<std::string,double>anotado;
    
    int mesa;

public:
    Pedido();

    virtual ~Pedido();

    void adicionarproduto(std::string produto);
    void removerproduto(std::string produto);
    double getPreco();
    int getmesa();
    int setmesa(int val);
    
};

#endif