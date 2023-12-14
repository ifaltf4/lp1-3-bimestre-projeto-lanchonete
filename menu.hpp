#include <iostream>
#include <string>
#include <vector>
#include <fstream>
/**
 * @file menu.hpp 
 * @brief classe abstrata
 * @author Matheus levy silva do nascimento
 */


#ifndef MENU_HPP
#define MENU_HPP



class Menu
{
protected:

    std::vector<std::string> comes;
    std::vector<std::string> bebes;

public:
    Menu(){};
    virtual ~Menu();
    virtual std::string getProduto(std::string escolha);
    
   
   
};

#endif