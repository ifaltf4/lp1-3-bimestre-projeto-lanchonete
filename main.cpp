#include <iostream>
#include <fstream>
#include <string>
#include "cliente.hpp"
#include "pedido.hpp"


template bool compare<typename S , typename U>;
using namespace std;

void produtos();
fstream cardapio;


int main(){


 while(true){
  cout<<" ::::::::::::::::::::::::::::::::::::::::::::::::::::: "<<endl;
  cout<<" :: Bem vindo ao restaurante  Komyoku De Kentalendo :: "<<endl;
  cout<<" ::::::::::::::::::::::::::::::::::::::::::::::::::::: "<<endl;
  cout<<"\n";
  cout<<"  Escolha uma das opções caro cliente."<<endl;
  cout<<" ::::::::::::::::::::::::::::::::::::::::::::::::::::: "<<endl;
  cout<<"  1 - adicionar nome do cliente."<<endl;
  cout<<"  2 - Ver cardapio."<<endl;
  cout<<"  3 - Adicionar pedido."<<endl;
  cout<<"  4 - remover pedido."<<endl;
  cout<<"  5 - listar pedido."<<endl;
  cout<<"  6 - pedir conta."<<endl;
  cout<<"    0 - sair. "<<endl;


  int escolha;
  cin>>escolha;
  if(escolha==1){
   
  }


 else if(escolha==2){
    
  }

  else if(escolha==0){
    cout<< " muito obrigado por acessar nosso sistema "<<endl;
    break ;

  }


 }



    return 0;
}
/*virtual std::string getNome() const;
    virtual void setNome(const std::string &novoNome);
    virtual void adicionarpedido(const std::string &item);
    virtual void removerpedido(const std::string &item);
    virtual void listarpedido() const;
    virtual double calcularaconta() const;*/



template bool compare<typename S , typename U>{
S numero;
U option;
if(numero==1){
    option=1;
    return true;
}

else if(numero==2){
    option=2;
    return true;
}
else if(numero==3){
    option=3;
    return true;
}
else if(numero==4){
    option=4;
    return true;
}
else {
    return false;
}


};



void produtos(){

cardapio.open("bebidas.txt", ios::in);
cout<< " ------------------------ "<<endl;
cout<< " ||      bebidas      || "<<endl;
cout<< " ------------------------ "<<endl;
if(cardapio.is_open()){
string linha=abcd;
while(getline(cardapio,linha)){ 
 cout<< " ||   Nome: "<< linha << "     || "<<endl;
 getline(cardapio,linha);
 cout<< " ||   Preço: R$ "<< linha << "     || "<<endl;
}

}
else{
cout<< "o cardapio de comidas nao esta disponivel no momento"<<endl;

}

 cout<< " ------------------------ "<<endl;

cardapio.close()




}