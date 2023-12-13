#include <iostream>
#include <fstream>
#include <string>
#include "cliente.hpp"
#include "pedido.hpp"
#include "menu.hpp"
#include "bebida.hpp"
#include "prato.hpp"

using namespace std;
Cliente* pedir= new Cliente;
void produtos();
auto *cardapio = new Menu();


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

  

  cout << " ======================== " << endl;
  cout << " ||       Pratos       || " << endl;
  cout << " ======================== " << endl;
  cardapio->mostrarcardapio(1);

  cout << " =========================== " << endl;

  cardapio->mostrarcardapio(2);
  cout << " ======================== " << endl;
  cout << " ||      Bebidas       || " << endl;
  cout << " ======================== " << endl;

  cout << " =========================== " << endl;
}