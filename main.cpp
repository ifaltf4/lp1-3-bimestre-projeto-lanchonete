#include <iostream>
#include <fstream>
#include <string>
#include "cliente.hpp"

/**
 * @file main.cpp.
 * @brief Menu principal do projeto.
 * @author Matheus levy silva do nascimento , José victor valério da costa.
 * @version 0.2.4
 * @date 14/12/2023 . 
 */

/** @details O arquivo não esta compilando graças a algum bug
 * ocorrido nas declaraçoes do cliente .cpp num update futuro sera ajustado
*/


using namespace std;
Cliente *pedir;
void produtos(); /**< Lê os arquivos bebida.txt e pratos.txt e imprime na tela . */

int main()
{

  while (true)
  {
    cout << " ::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
    cout << " :: Bem vindo ao restaurante Komyoku De Kentalendo  :: " << endl;
    cout << " ::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
    cout << "\n";
    cout << " ::::::::::::::::::::::::::::::::::::: " << endl;
    cout << "  Escolha uma das opções caro cliente. " << endl;
    cout << " ::::::::::::::::::::::::::::::::::::: " << endl;
    cout << " 1 - Adicionar nome do cliente." << endl;
    cout << " 2 - Ver cardapio." << endl;
    cout << " 3 - Adicionar pedido." << endl;
    cout << " 4 - Remover pedido." << endl;
    cout << " 5 - Listar pedido." << endl;
    cout << " 6 - Pedir conta." << endl;
    cout << " 0 - Sair. " << endl;

    int escolha;
    cin >> escolha;
    if (escolha == 1)
    {
      string nome;
      cout << "Digite o seu nome meu caro: ";
      cin >> nome;
      pedir->setNome(nome);
    }
    else if (escolha == 2)
    {
      produtos();
    }
    else if (escolha == 3)
    {
      string item;
      cout << "Digite o nome do produto que deseja: ";
      cin >> item;
      pedir->adicionarpedido(item);
    }
    else if (escolha == 4)
    {
      string item;
      cout << "Digite o nome do produto que quer remover: ";
      cin >> item;
      pedir->removerpedido(item);
    }
    else if (escolha == 5)
    {
      pedir->listarpedido();
    }
    else if (escolha == 6)
    {
      double total = pedir->calcularaconta();
      cout << "Valor da conta: R$ " << total << endl;
    }
    else if (escolha == 0)
    {
      delete (pedir);
      cout << " ============================================== " << endl;
      cout << " == Muito obrigado por acessar nosso sistema == " << endl;
      cout << " ============================================== " << endl;
      break;
    }
  }

  return 0;
}

void produtos()
{
  fstream cardapio;

  cout << " ======================== " << endl;
  cout << " ||       Pratos       || " << endl;
  cout << " ======================== " << endl;
  cardapio.open("pratos.txt", ios::in);
  if (cardapio.is_open())
  {
    string linha = "abcd";
    while (getline(cardapio, linha))
    {
      cout << " ||   Nome: " << linha << "     || " << endl;
      getline(cardapio, linha);
      cout << " ||   Preço: R$ " << linha << "     || " << endl;
    }
  }
  else
  {
    cout << "o cardapio de comidas nao esta disponivel no momento" << endl;
  }

  cout << " =========================== " << endl;
  cardapio.close();

  cout << " ======================== " << endl;
  cout << " ||      Bebidas       || " << endl;
  cout << " ======================== " << endl;
  cardapio.open("bebidas.txt", ios::in);

  if (cardapio.is_open())
  {
    string linha = "abcd";
    while (getline(cardapio, linha))
    {
      cout << " ||   Nome: " << linha << "     || " << endl;
      getline(cardapio, linha);
      cout << " ||   Preço: R$ " << linha << "     || " << endl;
    }
  }
  else
  {
    cout << "o cardapio de comidas nao esta disponivel no momento" << endl;
  }
  cout << " =========================== " << endl;
  cardapio.close();
}