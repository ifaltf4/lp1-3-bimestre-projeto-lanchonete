

#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>
#include <map>

#include "pedido.hpp"
class Cliente {

 private:
    map<std::string,pedido >conta;
    std::string nomecliente;
 public:

    cliente(const std::string &nome);
   virtual ~cliente();

    virtual std::string getNome() const;
    virtual void setNome(const std::string &novoNome);
    virtual void adicionarpedido(const std::string &item);
    virtual void removerpedido(const std::string &item);
    virtual void listarpedido() const;
    virtual double calcularaconta() const;
};





#endif