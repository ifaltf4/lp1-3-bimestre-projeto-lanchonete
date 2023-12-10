#ifndef BEBIDA_HPP
#define BEBIDA_HPP

#include <iostream>
#include"menu.hpp"

class Bebida : public Menu {
    enum copo{

       250ml,
       500ml,
       1L,
       2L,

    }
private:
   
    copo cheio;
    
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