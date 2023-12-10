
#ifndef PRATO_HPP
#define PRATO_HPP

#include <iostream>

#include"menu.hpp"

class Prato : public Menu {

 private:
  std::string  Nome;
  std::string tamanho;
 double precos;
 
public:
    //Prato();
    virtual ~Prato();
    
    std::string setopcao(int tam);
    int getopcao();
    std::string getNome();

    std::string getTamanho();
    void setTamanho(std::string ch);

    void setNome(const std::string &novoNome);
    double getPreco() ;
    void setPreco();
    //void fazeracomida() override;
};



#endif
