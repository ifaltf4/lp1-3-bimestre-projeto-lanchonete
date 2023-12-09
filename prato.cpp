
#include <iostream>

   Prato(const std::string &nome, double preco);
    virtual ~Prato();
    
    std::string getNome() const;

    void setNome(const std::string &novoNome);
    double getPreco() const;
    void setPreco(double novoPreco);
    void fazeracomida() override;
};