#include "pedido.hpp"

Pedido ::Pedido()
{
    this->mesa = 0;
    this->anotado["item"] = 0.0;
}

Pedido::~Pedido()
{
}

void Pedido::adicionarproduto(std::string produto)
{
    Bebida *liquido;
    Prato *solido;

    if (liquido->setName(produto) == true)
    {
        std::string nome = liquido->getName();
        std::string aux;
        std::cout << "Qual o tamanho da sua bebida ?" << std::endl;
        std::cout << "tamanho e preço disponiveis:" << std::endl;
        std::cout << "250ml[padrao]" << std::endl;
        std::cout << "1l[+ R$ 1.25]" << std::endl;
        std::cout << "2l[+ R$ 2.00]" << std::endl;
        std::cin >> aux;
        liquido->setPreco(aux);
        double aux2 = liquido->getPreco();
        this->anotado[nome] = aux2;
    }

    else if (solido->setNome(produto) == true)
    {
        std::string nome = solido->getNome();
        std::string aux;
        std::cout << "Qual o tamanho da sua bebida ?" << std::endl;
        std::cout << "tamanho e preço disponiveis:" << std::endl;
        std::cout << "P[padrao]" << std::endl;
        std::cout << "M[+ R$ 1.75]" << std::endl;
        std::cout << "G[+ R$ 2.50]" << std::endl;
        std::cin >> aux;
        solido->setPreco(aux);
        double aux2 = solido->getPreco();
        this->anotado[nome] = aux2;
    }
    else
    {

        std::cout << "esse produto nao existe" << std::endl;
    }
}

void Pedido::removerproduto(std ::string produto)
{
    this->anotado.erase(produto);
}

double Pedido::getPreco()
{
    std::map<std::string, double>::iterator it;

    double total = 0;
    for (it = anotado.begin(); it != anotado.end(); it++)
    {
        total += (*it).second;
    }
    return total;
}

int Pedido::getmesa()
{
    return this->mesa;
}

int Pedido::setmesa(int val)
{   this->mesa=val;
    return this->mesa;
}

