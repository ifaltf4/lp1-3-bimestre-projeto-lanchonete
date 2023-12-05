#include <iostream>
#include "cliente.hpp"
#include <map>
#include <fstream>
#include <vector>

using namespace std;

// o carinho de compras 
map<string,float> carrinho;


fstream arquivos;

void fregues(){

 int indice;



 while (true) {


  cout<< "====== O que você deseja fazer ? ======"<<endl;
  cout<< "1-Listar todos os sanduíches cadastrados."<<endl;
  cout<< "2-Listar todos os sucos cadastrados."<<endl;
  cout<< "3-Escolher o lanche."<<endl;
  cout<< "4-calcular o valor do lanche."<<endl;
  cout<< "5-Ver elementos do carrinho."<<endl;
  cout<< "6-Excluir um item do carrinho."<<endl;
  cout<< "0-sair"<<endl;
  cout<< "======================================\n";

  cin>> indice;

  if (indice==1){

    listarsandwichs();
   }

  else if (indice==2){ 

   listarsucos(); 
  }

  else if (indice==3){
   cout<< "Nome do lanche escolhido :"; 

   string nome;
   cin>>nome;

   escolherlanche(nome);  
  }

  else if (indice==4){
 
   calcularvalor(); 
  }

  else if (indice==5){

   listarcarinho();   
  }

  else if (indice==6){
    cout<< "Nome do lanche escolhido :"; 

    string nome;
    cin>>nome;

    removerdocarrinho(nome);  

  }

  else {
    cout<<"======================================"<<endl;
    cout<<"== obrigado pela visita !! (●'◡'●) =="<<endl;
    cout<<"======================================"<<endl;
    break;  
  }

 }
 //fim do while
}

//////////Funçoes ///////////////////

void listarsandwichs(){

 arquivos.open("sandwich.txt",ios::in);

 int val=1;
 string linhas;

 cout<<"================================================================"<<endl;
 
 if(arquivos.is_open()){
 //val serve pro objetivo de se a linha for impar ela imprime como se fosse o nome se for par seria o preço daquele nome
  while(getline(arquivos,linhas)){
   if (val==1){
   
    cout<<"Nome: " << linhas <<endl;
    val=2;
    }
    else {
  cout<< "Valor: R$ " <<linhas <<endl;
    val=1;
    }
      }
  }

 else{
   cout<<" nao foi possivel abrir o arquivo  "<<endl;
  }

  cout<<"================================================================"<<endl;
  arquivos.close(); 

}
 

///////////////////////////////

void listarsucos(){
 
 arquivos.open("sucos.txt",ios::in);

 int val;
 string linhas;

 cout<<"================================================================"<<endl;

 if (arquivos.is_open()){

  while(getline(arquivos,linhas)){
   if (val==1){
   
    cout<<"Nome: " << linhas <<endl;
    val=2;
     }
   else {
    cout<< "Valor: R$ " <<linhas <<endl;
    val=1;
     }
   }
 }
 else {
   cout<<"nao foi possivel abrir o arquivo "<<endl;
 }

cout<<"================================================================"<<endl;
 arquivos.close(); 

}

 /// ///////////////////////////////

 void escolherlanche(string nome){
  string lanche;
  string valor ;

  arquivos.open("sandwich.txt",ios::in);

  if(arquivos.is_open()){
   
   while(arquivos>>lanche>>valor){

    if(lanche==nome){

      carrinho[nome]=stof(valor);
      cout<<"/////////////////////////////////////////////"<<endl;
      cout<<"///      item escolhido com sucesso !!    /// "<<endl;
      cout<<"/////////////////////////////////////////////"<<endl;}
    }
    
  }

  arquivos.close();
   
   arquivos.open("sucos.txt",ios::in);

  if(arquivos.is_open()){
   
   while(arquivos>>lanche>>valor){

    if(lanche==nome){

      carrinho[nome]=stof(valor);
      cout<<"/////////////////////////////////////////////"<<endl;
      cout<<"///      item escolhido com sucesso !!    /// "<<endl;
      cout<<"/////////////////////////////////////////////"<<endl;
     }
   }
  }
  arquivos.close();
}

////////////////////////////////////////////////////////////////

 void calcularvalor( ){
   float val=0;

   map<string,float>:: iterator it;

   for (it=carrinho.begin();it != carrinho.end();it++){
       val+= it->second;
     }
  cout<<"/////////////////////////////////////////////"<<endl;
  cout<<"    O valor total do carrinho é : R$ "<<val << endl;
  cout<<"/////////////////////////////////////////////"<<endl;
   }
/////////////////////////////////////////////////////////////////////

void listarcarinho(){

 map<string,float>:: iterator it;

 cout<<" os itens do seu carrinho são.... \n";
 cout<<"/////////////////////////////////////////////"<<endl;
 for (it=carrinho.begin();it != carrinho.end();it++){
  cout<<"Nome : " << it->first<<endl;
  cout<<"Valor : R$ " << it->second<<endl;
 }
 cout<<"////////////////////////////////////////////"<<endl; 
}

/////////////////////////////////////////////////

void removerdocarrinho (string nome){

 carrinho.erase(nome);

cout<<"/////////////////////////////////////////////"<<endl;
cout<<"        item removido com sucesso!!!!         "<<endl;
cout<<"/////////////////////////////////////////////"<<endl;

}