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
      comes.push_back(linha);
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

      bebes.push_back(linha);
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

void Menu::mostrarcardapio(int num)
{

  if (num == 1)
  {
    std::string linha;
    std::vector<std::string>::iterator it;
    for (it = comes.begin(); it < comes.end(); it + 2)
    {
      std::string linha = *it;
      std::cout << " ||"<< " prato: " << linha << std::endl;
      std::string linha = *it++;
      std::cout << " ||"<< " Preço: R$ " << linha << std::endl;
      std::cout << " ||--------------------- " << std::endl;
    }
  }
  else if (num == 2)
  {
    std::string linha;
    std::vector<std::string>::iterator it;
    for (it = bebes.begin(); it < bebes.end(); it + 2)
    {
      std::string linha = *it;
      std::cout << " ||"<< " Bebida: " << linha << std::endl;
      std::string linha = *it++;
      std::cout << " ||"<< " Preço: R$ " << linha << std::endl;
      std::cout << " ||--------------------- " << std::endl;
    }
  }
}