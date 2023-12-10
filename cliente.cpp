#include "cliente.hpp"

Cliente::Cliente(const std::string &nome) : nomecliente(nome) {}

Cliente::~Cliente() {}

std::string Cliente::getNome() const {
    return nomecliente;
}

void Cliente::setNome(const std::string &novoNome) {
    nomecliente = novoNome;
}

void Cliente::adicionarpedido(const std::string &item) {
    Pedido pedido(item);
    conta[item] = pedido;
}

void Cliente::removerpedido(const std::string &item) {
    conta.erase(item);
}

void Cliente::listarpedido() const {
    for (auto const &p : conta) {
        std::cout << "Item: " << p.first << " | Preço: " << p.second.getPreco() << std::endl;
    }
}

double Cliente::calcularaconta() const {
    double total = 0;
    for (auto const &p : conta) {
        total += p.second.getPreco();
    }
    return total;
}