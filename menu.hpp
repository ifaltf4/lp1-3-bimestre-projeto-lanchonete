

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

    virtual std::string getProduto() const{};
    virtual double getValor() const{};
    
    virtual void vaiFazeradesgraca() = 0;
};





#endif
