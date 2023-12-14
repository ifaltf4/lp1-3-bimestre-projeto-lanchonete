#include <iostream>
#include "bebida.hpp"

std::string Menu ::getProduto(std::string escolha)
{
   std::vector<std::string>::iterator it;
   for (it = this->bebes.begin(); it < this->bebes.end(); it + 2)
   {
      std::string linha = *it;
      if (linha == escolha){
         return linha;
         }
   }
   return "nao existe";
}

std::string Bebida ::getName()
{
   return Name;
}

bool Bebida ::setName(const std::string &novoNome)
{
   std::string linha = getProduto(novoNome);
   if (linha == "nao existe")
   {
      return false;
   }
   else
   {
      Name = linha;
      
      return true;
   }
}

double Bebida ::getPreco()
{
   return this->preco;
}

bool Bebida ::setPreco(std::string tam)
{
   int i = 0;
   std::vector<std::string>::iterator it;

   for (it = this->bebes.begin(); it < this->bebes.end(); it++)
   {
      std::string linha = *it;
      if (linha == this->Name)
      {
         std::string linha = *it++;
         this->preco = std::stod(linha);
         setCopo(tam);
         i++;
         break;
      }
   }

   if (i > 0)
   {
      if (getCopo() == "1l")
      {
         this->preco += 1.25;
      }
      else if (getCopo() == "2l")
      {
         this->preco += 2.00;
      }
      else if (getCopo() == "250ml")
      {
         this->preco += 0;
      }
      else{
         std::cout<<"tente novamente"<<std::endl;
      }
   }
   else
   {
      return false;
   }
}

std::string Bebida::getCopo()
{
   return this->Copo;
}

void Bebida::setCopo(std::string liquido)
{

   if (liquido == "1" || liquido == "1l " || liquido == "1L")
   {
      this->Copo = "1l";
   }

   else if (liquido == "2" || liquido == "2l " || liquido == "2L")
   {
      this->Copo = "2l";
   }
   else if (liquido == "250" || liquido == "250ml " || liquido == "250ML")
   {
      this->Copo = "250ml";
   }

   else
   {

      std::cout << " Tamanho do recipiente invalido !!!!!" << std::endl;
   }
}
