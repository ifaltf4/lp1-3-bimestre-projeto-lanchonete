#include <iostream>
#include <string>
#include <vector>


#ifndef MENU_HPP
#define MENU_HPP



class Menu
{
protected:
    std::vector<std::string> comes;
    std::vector<std::string> bebes;

public:
    Menu(){};
    virtual ~Menu(){};

    virtual std::string getProduto(std::string escolha);
    
    virtual void mostrarcardapio(int num); 
   
};

#endif