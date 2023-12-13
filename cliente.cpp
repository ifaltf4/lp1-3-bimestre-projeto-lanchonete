#include "cliente.hpp"

Cliente::Cliente()
{
    nomecliente = "fulano";
}

Cliente::~Cliente() {}

std::string Cliente::getNome() const
{
    return nomecliente;
}

void Cliente::setNome(const std::string &novoNome)
{
    nomecliente = novoNome;
}

void Cliente::adicionarpedido(const std::string &item)
{
    Pedido novoPedido(item);
    conta[item] = novoPedido;
}

void Cliente::removerpedido(const std::string &item)
{
    conta.erase(item);
}

void Cliente::listarpedido() const
{
    for (const auto &pedido : conta)
    {
        std::cout << pedido.first << std::endl;
    }
}

double Cliente::calcularaconta() const
{
    double total = 0;
    for (const auto &pedido : conta)
    {
        total += pedido.second.getPreco();
    }
    return total;
}