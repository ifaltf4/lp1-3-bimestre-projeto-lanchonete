

#ifndef BEBIDA_HPP
#define BEBIDA_HPP

#include <iostream>
#include"menu.hpp"

class Bebida : public menu {

private:

    std::string nome;
    double preco;
public:

    Bebida(const std::string &nome, double preco);
    virtual ~Bebida();
    std::string getNome() const;
    void setNome(const std::string &novoNome);
    double getPreco() const;
    void setPreco(double novoPreco);
    void fazerabebida() override;
    
};



#endif