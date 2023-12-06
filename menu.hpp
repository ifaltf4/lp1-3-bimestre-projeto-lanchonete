

#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>

class Menu {

protected:
 std::string Produto;
 double Valor;

public:

    Menu(const std::string &produto, double valor);
    virtual ~Menu();

    virtual std::string getProduto() const;
    virtual double getValor() const;
    virtual void vaiFazeradesgraca() = 0;
};





#endif
