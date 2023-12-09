#include <iostream>

    Bebida(const std::string &nome, double preco);
    virtual ~Bebida();
    
    std::string getNome() const;
    void setNome(const std::string &novoNome);
    double getPreco() const;
    void setPreco(double novoPreco);
    void fazerabebida() override;