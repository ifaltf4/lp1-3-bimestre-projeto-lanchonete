#ifndef BEBIDA_HPP
#define BEBIDA_HPP
/**
 * @file bebida.hpp
 * @author Jose victor vaerio da costa
 * @brief classe bebida
 */

#include <iostream>
#include "menu.hpp"

class Bebida : public Menu
{

private:
  std::string Name;
  std::string Copo; /**< essa string serve como um tipo enum */
  double preco;

public:
  std::string getName();
  bool setName(const std::string &novoNome);
  double getPreco();
  bool setPreco(std::string tam);

  std::string getCopo();
  void setCopo(std::string liquido);
};

#endif