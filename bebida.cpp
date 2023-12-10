#include <iostream>
#include "bebida.hpp"
   Bebida :: Bebida(const std::string &nome, double preco){};
     Bebida ::virtual ~Bebida(){};
    
     Bebida :: std::string getNome() const{};
     Bebida :: void setNome(const std::string &novoNome){};
     Bebida :: double getPreco() const{};
     Bebida :: void setPreco(double novoPreco){};
     Bebida :: void fazerabebida() override{};