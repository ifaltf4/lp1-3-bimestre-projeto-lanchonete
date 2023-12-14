#include "cliente.hpp"


Cliente :: Cliente()
{Pedido *novoPedido= new Pedido;
 
   nomecliente = "fulano";
   conta[nomecliente]= *novoPedido;

}


Cliente :: ~Cliente(){
std::map<std::string,Pedido>::iterator it;
for(it=conta.begin(); it != conta.end();it++){
  conta.erase(it);

}


}




std::string Cliente:: getNome() 
{
    return nomecliente;
}

void Cliente::setNome( std::string novoNome)
{
    nomecliente = novoNome;
}

void Cliente::adicionarpedido( std::string item)
{Pedido *novoPedido= new Pedido;
    
    novoPedido->adicionarproduto(item);
     
    conta[nomecliente] = *novoPedido;
}

void Cliente::removerpedido( std::string item)
{Pedido *novoPedido= new Pedido;
    novoPedido->removerproduto(item);
}

void Cliente::listarpedido() 
{   std::cout<< this->getNome()<<std::endl;
    for (const auto &Pedido : conta)
    {
        std::cout << Pedido.first << std::endl;
    }
}

double Cliente::calcularaconta() 
{Pedido *novoPedido= new Pedido;
    return novoPedido->getPreco();
}
