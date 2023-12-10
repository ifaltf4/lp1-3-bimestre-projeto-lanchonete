
#include <iostream>
#include "prato.hpp"

   Prato:: Prato(const std::string &nome, double preco){};
   Prato::  virtual ~Prato(){};
    
   Prato::  std::string getNome() const{};

    Prato:: void setNome(const std::string &novoNome){};
    Prato:: double getPreco() const{};
   Prato::  void setPreco(double novoPreco){};
   Prato:: void fazeracomida() override{};
