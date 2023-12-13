#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>
#include <map>
// cliente tera que ser reformulado 
#include "pedido.hpp"
class Cliente
{

private:
   std::map<std::string, Pedido> conta;
   std::string nomecliente;

public:
   Cliente();
   virtual ~Cliente();

   virtual std::string getNome() const;
   virtual void setNome(const std::string &novoNome);
   virtual void adicionarpedido(const std::string &item);
   virtual void removerpedido(const std::string &item);
   virtual void listarpedido() const;
   virtual double calcularaconta() const;
};

#endif