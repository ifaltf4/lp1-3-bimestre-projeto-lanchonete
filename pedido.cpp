#include "pedido.hpp"

Pedido ::Pedido(std::string item)
{
    mesa = -1;
}

Pedido::~Pedido()
{
    for (Menu *produto : escolha)
    {
        delete produto;
    }
}

void Pedido::adicionarproduto(Menu *produto)
{
    escolha.push_back(produto);
}

void Pedido::removerproduto(Menu *produto)
{
    for (auto it = escolha.begin(); it != escolha.end(); ++it)
    {
        if (*it == produto)
        {
            escolha.erase(it);
            break;
        }
    }
}

double Pedido::getPreco() const
{
    double total = 0;
    for (Menu *produto : escolha)
    {
        total += produto->getPreco();
    }
    return total;
}

int Pedido::getmesa()
{
    return mesa;
}

int Pedido::setmesa(int val)
{
    return mesa = val;
}