
#include <iostream>
#include "prato.hpp"

  // Prato:: Prato(){};
  // Prato:: ~Prato(){};
    
  std::string  Prato:: getNome(){
      return tamanho;

  };

   void  Prato:: setNome(const std::string &novoNome){
     std:: string linha =getProduto(novoNome);
     if (linha== "nao existe"){
      std::cout<<"fFalha na operaçao"<<std::endl;
     }
    else {
      Nome = linha;
    }
      

   };

   double Prato:: getPreco(){
      return precos;

   };
   void Prato:: setPreco(){
    int i=0;
      std::vector<std::string>::iterator it;

     for(it=comes.begin();it<comes.end();it++){
      std::string linha=*it;
      if(linha == Nome){
         std::string linha= *it++;
         precos=std::stod(linha);
         i++;
         break;
      }

     }
    if (i>0){
    if (getTamanho()=="P"){
     precos +=0;
    }
    else if (getTamanho()=="M"){
     precos += 1.75;
    }
    else if (getTamanho()=="G"){
       precos+= 4.50;
      }
     }
    else {
     std::cout<<"voce nao selecionou o tamanho"<<std::endl;
    }
    

   };


std::string Prato:: getTamanho(){
  
   return tamanho;
}

void Prato::setTamanho(std::string ch){

   if (ch=="P" || ch=="p" ){
     tamanho="P";
    }
    else if (ch=="M" || ch=="m" ){
     tamanho="M";
    }
    else if (ch=="G" || ch=="g" ) {
       tamanho="G";
    }
    else {

      std::cout<<" Tamanho invalido !!!!!"<<std::endl;
    }
    
    }

   //void Prato:: fazeracomida() override{};
