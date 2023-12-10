#include <iostream>
#include <fstream>
#include <string>
#include "cliente.hpp"

using namespace std;

void produtos();

fstream cardapio;


int main(){


 while(true){
  cout<<" ::::::::::::::::::::::::::::::::::::::::::::::::::::: "<<endl;
  cout<<" :: Bem vindo ao restaurante  Komyoku De Kentalendo :: "<<endl;
  cout<<" ::::::::::::::::::::::::::::::::::::::::::::::::::::: "<<endl;
  cout<<"\n";
  cout<<" ::::::::::::::::::::::::::::::::::::: "<<endl;
  cout<<"  Escolha uma das opções caro cliente."<<endl;
  cout<<" ::::::::::::::::::::::::::::::::::::: "<<endl;
  cout<<"  1 - Adicionar nome do cliente."<<endl;
  cout<<"  2 - Ver cardapio."<<endl;
  cout<<"  3 - Adicionar pedido."<<endl;
  cout<<"  4 - Remover pedido."<<endl;
  cout<<"  5 - Listar pedido."<<endl;
  cout<<"  6 - Pedir conta."<<endl;
  cout<<"  0 - Sair. "<<endl;


  int escolha;
  cin>>escolha;
  if(escolha==1){
   
   }
 else if(escolha==2){

    produtos();
   }
 else if(escolha==3){
   
   }
 else if(escolha==4){
 
   }
 else if(escolha==5){
   
   }
 else if(escolha==6){
  
   }
  else if(escolha==0){

    cout<< " ============================================== "<<endl;
    cout<< " == Muito obrigado por acessar nosso sistema == "<<endl;
    cout<< " ============================================== "<<endl;
    break ;

   }


 }



    return 0;
}
//comando a serem implementados no cliente
/*virtual std::string getNome() const;
    virtual void setNome(const std::string &novoNome);
    virtual void adicionarpedido(const std::string &item);
    virtual void removerpedido(const std::string &item);
    virtual void listarpedido() const;
    virtual double calcularaconta() const;*/


void produtos(){

 cardapio.open("pratos.txt", ios::in);

 cout<< " ======================== "<<endl;
 cout<< " ||       Pratos       || "<<endl;
 cout<< " ======================== "<<endl;
 if(cardapio.is_open()){

  string linha="abcd";
  while(getline(cardapio,linha)){

   cout<< " ||"<<" prato: " << linha <<endl;
   getline(cardapio,linha);
   cout<< " ||"<<" Preço: R$ "<< linha<<endl;
   cout<< " ||--------------------- "<<endl;
   }

  }
 else{

 cout<< " =========================================================== "<<endl;
 cout<< " || O cardapio de comidas não esta disponivel no momento  || "<<endl;
 cout<< " ===========================================================  "<<endl;

  }

 cout<< " =========================== "<<endl;

 cardapio.close();



 cardapio.open("bebidas.txt", ios::in);
 cout<< " ======================== "<<endl;
 cout<< " ||      Bebidas       || "<<endl;
 cout<< " ======================== "<<endl;

 if(cardapio.is_open()){

  string linha="abcd";
  while(getline(cardapio,linha)){ 

    cout<< " ||"<<" Bebida:" << linha <<endl;
    getline(cardapio,linha);
    cout<< " ||"<<" Preço: R$ "<< linha<<endl;
    cout<< " ||--------------------- "<<endl;
    }
  }
 else{

  cout<< " =========================================================== "<<endl;
  cout<< " || O cardapio de comidas não esta disponivel no momento  || "<<endl;
  cout<< " ===========================================================  "<<endl;

  }

 cout<< " =========================== "<<endl;

 cardapio.close();

}