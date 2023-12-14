#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>
#include <map>
#include "pedido.hpp"

class Cliente
{

private:
   std::map<std::string, Pedido> conta;
   std::string nomecliente;

public:

    Cliente();
    ~Cliente();

   std::string getNome() ;
   void setNome(std::string novoNome);
   void adicionarpedido(std::string item);
   void removerpedido(std::string item);
   void listarpedido() ;
   double calcularaconta() ;
 
};

#endif