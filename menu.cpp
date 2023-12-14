#include "menu.hpp"
/**
 * @file Menu.cpp
 * @brief Classe que serve de cardapio do restaurante
 * @author Jose victor valerio da costa. 
 */
 

/** @brief Essa funçao pega os pratos e bebidas servidos no restaurante e os passa pra um vector */
Menu::Menu()
{
  std::fstream arquivo;
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

Menu:: ~Menu(){
 std::vector<std::string>::iterator it;
 for(it=comes.begin();it<comes.end();it++){
    comes.erase(it);
 }
  for(it=bebes.begin();it<bebes.end();it++){
    bebes.erase(it);
 }

}

/////////////////////////////////////////////////////////////

/**
 * @brief verifica se e um produto que esta no cardapio
 * @param o nome do produto a ser comparado
 * @return uma validaçao se ele esta ou nao no vector
*/

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

