  #include <iostream>
  #include "cliente.hpp"
  
   Cliente :: Cliente(const std::string &nome){
      cliente * primeiro= new cliente;
      this->primeiro->setNome("comidas");
      this->primeiro->adicionarpedido(nullptr);


    }
   Cliente :: virtual ~cliente();

    Cliente :: virtual std::string getNome() const;{}

    
    Cliente ::  virtual void setNome(const std::string &novoNome);{}

     Cliente :: virtual void adicionarpedido(const std::string &item){};

     Cliente :: virtual void removerpedido(const std::string &item){};

     Cliente :: virtual void listarpedido() const{};

     Cliente :: virtual double calcularaconta() const{};

