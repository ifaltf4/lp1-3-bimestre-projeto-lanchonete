
#ifndef PRATO_HPP
#define PRATO_HPP

#include <iostream>

#include"menu.hpp"

class Prato : public menu {
    
private:
    std::string nome;
    double preco;
public:
    Prato(const std::string &nome, double preco);
    virtual ~Prato();
    
    std::string getNome() const;

    void setNome(const std::string &novoNome);
    double getPreco() const;
    void setPreco(double novoPreco);
    void fazeracomida() override;
};



#endif