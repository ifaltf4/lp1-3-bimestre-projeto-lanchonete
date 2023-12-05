
#include <iostream>
#include "gerente.hpp"
#include "cliente.hpp"

 using namespace std;
 
// o main so serve para direcionar para o cliente ou gerente
int main(){
 int indice=0;

 while (true){
  cout<< "qual perfil deseja acessar ?" <<endl;
  cout<< "1-cliente"<<endl;
  cout<< "2-gerente"<<endl;
  cout<<"0-sair" <<endl;
  cout << "================================\n";

  cin >> indice;

  if(indice==1){
   //vai para o cliente .cpp
   fregues();
 }

 else if (indice==2){

  int senha;
  //while que serve pra inserir constantemente a senha ate acertar
  while (true){

   cout<<"digite a senha do ADM: ";
   cin >> senha;
   //vai para o gerente .cpp que so e acessado atravez da senha correta 
   if (senha==1234){

     chefia ();

     break;   
    }
  }

 }

 else {
  //encerra o while e manda uma mensagem final
  cout<<"=========================================="<<endl;
  cout<<"==        Volte sempre! (❁´◡`❁)       =="<<endl;
  cout<<"=========================================="<<endl;
  break;
    } 
 }

 return 0;
}