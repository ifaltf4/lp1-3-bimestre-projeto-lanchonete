
#ifndef PRATO_HPP
#define PRATO_HPP

#include <iostream>

#include "menu.hpp"

class Prato : public Menu
{

private:
    std::string Nome;
    std::string tamanho;
    double precos;

public:
    
    virtual ~Prato();


    std::string getNome();
    std::string getTamanho();
    void setTamanho(std::string ch);

    bool setNome(const std::string &novoNome);
    double getPreco();
    bool setPreco(std::string tam);

    };
    

#endif
