#ifndef BEBIDA_HPP
#define BEBIDA_HPP

#include <iostream>
#include"menu.hpp"

class Bebida : public Menu {
    
private:
  std::string  Name;
  std::string Copo;
  double preco;
    
public:

    Bebida(const std::string &nome, double preco);
    virtual ~Bebida();
    
    std::string getName();
    void setName(const std::string &novoNome);
    double getPreco();
    void setPreco(double novoPreco);

    std::string getCopo();
    void setCopo(std::string liquido);

   // void fazerabebida() override;
    
};



#endif