#ifndef BEBIDA_HPP
#define BEBIDA_HPP

#include <iostream>
#include "menu.hpp"

class Bebida : public Menu
{

private:
  std::string Name;
  std::string Copo;
  double preco;

public:
  Bebida();
  virtual ~Bebida();

  std::string getName();
  bool setName(const std::string &novoNome);
  double getPreco();
  bool setPreco(std::string tam);

  std::string getCopo();
  void setCopo(std::string liquido);
  
};

#endif