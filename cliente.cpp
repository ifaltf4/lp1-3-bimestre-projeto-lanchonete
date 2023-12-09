  #include <iostream>
  
   cliente :: cliente(const std::string &nome){
      cliente * primeiro= new cliente;
      this->primeiro->setNome("comidas");
      this->primeiro->adicionarpedido(nullptr);


    }
   cliente :: virtual ~cliente();

    cliente :: virtual std::string getNome() const;{}

    
    cliente ::  virtual void setNome(const std::string &novoNome);{}

     cliente :: virtual void adicionarpedido(const std::string &item);

     cliente :: virtual void removerpedido(const std::string &item);

     cliente :: virtual void listarpedido() const;

     cliente :: virtual double calcularaconta() const;

};