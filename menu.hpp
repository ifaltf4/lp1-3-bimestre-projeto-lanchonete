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
    virtual ~Menu()=0;

    virtual std::string getProduto(std::string escolha);
    
   
   
};

#endif