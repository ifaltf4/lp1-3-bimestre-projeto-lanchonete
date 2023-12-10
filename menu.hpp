#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>
#include <vector>

class Menu {
protected:
std:: vector<std::string>comes;
std:: vector<std::string>bebes;

public:
    Menu() {};
    virtual ~Menu() {};

    virtual std::string getProduto(std::string escolha){};
    

    virtual void vaiFazeradesgraca() = 0;
};

#endif