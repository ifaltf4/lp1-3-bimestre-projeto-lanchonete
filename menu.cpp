#include "menu.hpp"
#include <fstream>

std::fstream arquivo;

Menu::Menu()
{
  arquivo.open("pratos.txt", std::ios::in);

  if (arquivo.is_open())
  {
    std::string linha = "abcd";
    while (getline(arquivo, linha))
    {
      this->comes.push_back(linha);
    }
  }
  else
  {

    std::cout << " ================================================ " << std::endl;
    std::cout << " || pratos.txt não esta disponivel no momento  || " << std::endl;
    std::cout << " ================================================ " << std::endl;
  }

  arquivo.close();

  arquivo.open("bebidas.txt", std::ios::in);

  if (arquivo.is_open())
  {

    std::string linha = "abcd";

    while (getline(arquivo, linha))
    {

      this->bebes.push_back(linha);
    }
  }
  else
  {

    std::cout << " ================================================ " << std::endl;
    std::cout << " || bebidas.txt não esta disponivel no momento || " << std::endl;
    std::cout << " ================================================ " << std::endl;
  }

  arquivo.close();
};
/////////////////////////////////////////////////

std::string Menu ::getProduto(std::string escolha)
{
  std::vector<std::string>::iterator it;
  for (it = comes.begin(); it < comes.end(); it + 2)
  {
    std::string linha = *it;
    if (linha == escolha)
      return linha;
  }
  return "nao existe";
};

