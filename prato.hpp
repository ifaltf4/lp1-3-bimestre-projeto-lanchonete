#ifndef PRATO_HPP
#define PRATO_HPP

#include <iostream>

#include"menu.hpp"

class Prato : public menu {
    enum tamanho{

       Pequeno,
       Medio,
       Grande,
       familia,

    }
private:

tamanho opcao;
    
public:
    Prato(const std::string &nome, double preco);
    virtual ~Prato();
    
    std::string setopcao(std::int tam);
    int getopcao();
    std::string getNome() const;

    void setNome(const std::string &novoNome);
    double getPreco() const;
    void setPreco(double novoPreco);
    void fazeracomida() override;
};



#endif
