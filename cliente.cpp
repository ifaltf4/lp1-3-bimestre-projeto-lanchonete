#include "cliente.hpp"
Pedido *novoPedido= new Pedido;
Cliente :: Cliente()
{
   this->nomecliente = "fulano";
    
}


std::string Cliente::getNome() const
{
    return this->nomecliente;
}

void Cliente::setNome(const std::string &novoNome)
{
    this->nomecliente = novoNome;
}

void Cliente::adicionarpedido(const std::string &item)
{
    
    novoPedido->adicionarproduto(item);
     
    this->conta[nomecliente] = *novoPedido;
}

void Cliente::removerpedido(const std::string &item)
{
    novoPedido->removerproduto(item);
}

void Cliente::listarpedido() const
{   std::cout<< this->getNome()<<std::endl;
    for (const auto &pedido : conta)
    {
        std::cout << pedido.first << std::endl;
    }
}

double Cliente::calcularaconta() const
{
    return novoPedido->getPreco();
}
