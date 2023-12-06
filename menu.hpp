

#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>

class menu {

protected:
 std::string produto;
 double valor;

public:

    menu(const std::string &produto, double valor);
    virtual ~menu();

    virtual std::string getProduto() const;
    virtual double getValor() const;
    virtual void vaifazeradesgraca() = 0;
};





#endif
