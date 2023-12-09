#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>
#include <vector>

class Menu {
protected:
    std::string Produto;
    double Valor;

public:
    virtual ~Menu() {}

    virtual std::string getProduto() const = 0;
    virtual double getValor() const = 0;

    virtual void vaiFazeradesgraca() = 0;
};

#endif