
#include <iostream>
#include "prato.hpp"

std::string Prato::getNome()
{

   return this->tamanho;
}
//////////////////////////////////////////////////////////
bool Prato::setNome(const std::string &novoNome)
{
   std::string linha = getProduto(novoNome);
   if (linha == "nao existe")
   {

      std::cout << "Falha na operaçao" << std::endl;
   }
   else
   {

      this->Nome = linha;
   }
}

double Prato::getPreco()
{
   return this->precos;
}
//////////////////////////////////////////////////////////
bool Prato::setPreco(std::string tam)
{
   int i = 0;
   std::vector<std::string>::iterator it;

   for (it = this->comes.begin(); it < this->comes.end(); it++)
   {
      std::string linha = *it;
      if (linha == this->Nome)
      {
         std::string linha = *it++;
         this->precos = std::stod(linha);
         setTamanho(tam);
         i++;
         break;
      }
   }
   
   if (i > 0)
   {
      if (getTamanho() == "P")
      {
         this->precos += 0;
      }
      else if (getTamanho() == "M")
      {
         this->precos += 1.75;
      }
      else if (getTamanho() == "G")
      {
         this->precos += 2.50;
      }
   }
   else
   {
 return false;
     
   }
   return true;
}

//////////////////////////////////////////////////////////
std::string Prato::getTamanho()
{

   return this->tamanho;
}
//////////////////////////////////////////////////////////
void Prato::setTamanho(std::string ch)
{

   if (ch == "P" || ch == "p")
   {
      this->tamanho = "P";
   }
   else if (ch == "M" || ch == "m")
   {
      this->tamanho = "M";
   }
   else if (ch == "G" || ch == "g")
   {
      this->tamanho = "G";
   }
   else
   {

      std::cout << " Tamanho invalido !!!!!" << std::endl;
   }
}


