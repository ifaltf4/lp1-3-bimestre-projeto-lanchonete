#include <iostream>
#include "bebida.hpp"

std::string Menu ::getProduto(std::string escolha)
{
   std::vector<std::string>::iterator it;
   for (it = bebes.begin(); it < bebes.end(); it + 2)
   {
      std::string linha = *it;
      if (linha == escolha)
         return linha;
   }
   return "nao existe";
}

std::string Bebida ::getName()
{
   return Name;
}

void Bebida ::setName(const std::string &novoNome)
{
   std::string linha = getProduto(novoNome);
   if (linha == "nao existe")
   {
      std::cout << "fFalha na operaçao" << std::endl;
   }
   else
   {
      Name = linha;
   }
}

double Bebida ::getPreco()
{
   return preco;
}

void Bebida ::setPreco(double novoPreco)
{
   int i = 0;
   std::vector<std::string>::iterator it;

   for (it = bebes.begin(); it < bebes.end(); it++)
   {
      std::string linha = *it;
      if (linha == Name)
      {
         std::string linha = *it++;
         preco = std::stod(linha);
         i++;
         break;
      }
   }
   if (i > 0)
   {
      if (getCopo() == "1l")
      {
         preco += 1.25;
      }
      else if (getCopo() == "2l")
      {
         preco += 2.00;
      }
      else if (getCopo() == "250ml")
      {
         preco += 0;
      }
   }
   else
   {
      std::cout << "você não selecionou o tamanho!!" << std::endl;
   }
}

std::string Bebida::getCopo()
{
   return Copo;
}

void Bebida::setCopo(std::string liquido)
{

   if (liquido == "1" || liquido == "1l " || liquido == "1L")
   {
      Copo = "1l";
   }

   else if (liquido == "2" || liquido == "2l " || liquido == "2L")
   {
      Copo = "2l";
   }
   else if (liquido == "250" || liquido == "250ml " || liquido == "250ML")
   {
      Copo = "250ml";
   }

   else
   {

      std::cout << " Tamanho do recipiente invalido !!!!!" << std::endl;
   }
}
