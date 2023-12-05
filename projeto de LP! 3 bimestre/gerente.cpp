#include <iostream>
#include "gerente.hpp"
#include <map>
#include <fstream>
#include <vector>

using namespace std;

// map e a variavel responsavel para armazenamento temporario dos dados escolhida

map <string,float> sandwich;
map <string,float> suco;


fstream arquivo;

void chefia (){
// formatar coloca todos os elementos dos arquivops txt num map deixando no "formato padrao"
formatar();
// nesse looping sempre vai repetir os comandos ate a tecla 0 ou outra serem precionados

 while (true) {

 
  

  cout<< "====== O que você deseja fazer ? ======"<<endl;
  cout<< "1-Listar todos os sanduíches cadastrados."<<endl;
  cout<< "2-Listar todos os sucos cadastrados."<<endl;
  cout<< "3-Adicionar um novo sanduíche."<<endl;
  cout<< "4-Adicionar um novo suco."<<endl;
  cout<< "5-Alterar o preço de um sanduíche."<<endl;
  cout<< "6-Alterar o preço de um suco."<<endl;
  cout<< "7-Excluir um sanduíche."<<endl;
  cout<< "8-Excluir um Suco."<<endl;
  cout<< "0-sair"<<endl;
  cout<<"* obs : as modificaçoes so seram salvas quando voce sair do perfil de gerente * "<<endl;
  cout<< "=======================================\n";

  int indice;
  cin>> indice;
  // mostra na tela o que tem no txt
  if (indice==1){

   listarsandwich();

   }

  else if (indice==2){

    listarsuco(); 

  }

// adiciona um novo lanche ao map

  else if (indice==3){
//eu iria colocar um looping pra voce poder adicionar varios sandwiches e sucos sem sair pro menu mas achei que o codigo ficaria mais poluido
   string nome;
   float valor;

   cout<<"digite o nome do seu novo sandwich :";
   cin>>nome;

   cout<<"digite o valor do seu novo sandwich :";
   cin>>valor;

   adicionarsandwich(nome,valor); 

  }

  else if (indice==4){

   string nome;
   float valor;

   cout<<"digite o nome do seu novo suco :";
   cin>>nome;

   cout<<"digite o valor do seu novo suco :";
   cin>>valor;

   adicionarsuco(nome,valor); 

  }
  //modifica os valores dom map eventualmente vão pro txt ao sair do perfil.

 else if (indice==5){
   cout<< "nome do sandwich :"; 

   string nome ;
   cin>> nome;
  
   mudarvalorsandwich(nome);  // ela so pega o nome antes de entrar na funçao dentro dela ela pega o novo valor
  }

 else if (indice==6){

   cout<< "nome do suco :"; 

   string nome ; 
   cin>> nome;

   mudarvalorsuco(nome);  
  }
// exclui do map o lanche desejado

else if (indice==7){

 cout<< "nome do sandwich :"; 
 string nome ;
 cin>>nome;

 removersandwich(nome); 

 }

else if (indice==8){

  cout<< "nome do suco :"; 
 
  string nome ;
  cin>>nome;

   removersuco(nome); 
     
 }


 else {
//salva no txt
 save();

 cout<<"===================================================================="<<endl;
 cout<<"===         Modificações concluídas e salvas! ╰(*°▽°*)╯         ==="<<endl;
 cout<<"===================================================================="<<endl;
 
  break;  
  }

 }
}


//****************************FUNÇÕES************************************************

// ///////////funçoes de listagem ////////////

void listarsandwich(){

 arquivo.open("sandwich.txt",ios::in);

 string linhas;
 string valor;

 cout<<"================================================================"<<endl;

 if(arquivo.is_open()){

   while(arquivo>>linhas>>valor){

    cout<<"Nome : "<< linhas <<endl;
    cout<<"Preço : R$ "<< valor <<endl;
     }
   }
  else{

   cout<<" nao foi possivel abrir o arquivo "<<endl;
  }

 cout<<"================================================================"<<endl;

  arquivo.close(); 

}
 
////////////////////////////////////////////////////////////////////

void listarsuco(){
 
 arquivo.open("sucos.txt",ios::in);

 string linhas;
 string valor;

 cout<<"================================================================"<<endl;

 if (arquivo.is_open()){
   while(arquivo>>linhas>>valor){

    cout<<"Nome : "<< linhas <<endl;
    cout<<"Preço : R$ "<<  valor <<endl;

     }
  }
 else {
  
   cout<<" nao foi possivel abrir "<<endl;
  }

 cout<<"================================================================"<<endl;

 arquivo.close(); 

}

////////////////////funçoes de adição//////////////////////////////////

void adicionarsandwich(std::string nome,float valor){

 sandwich[nome]=valor;

 cout<<"================================================================"<<endl;
 cout<<"===           Sandwich cadastrado com sucesso !!             ==="<<endl;
 cout<<"================================================================"<<endl;

}

//////////////////////////////////////////////////////////////////////

void adicionarsuco(std::string nome,float valor){

 suco[nome]=valor;

 cout<<"================================================================"<<endl;
 cout<<"===              Suco cadastrado com sucesso !!              ==="<<endl;
 cout<<"================================================================"<<endl;

}

//////////////// mudança de valor //////////////////////////////

void mudarvalorsandwich(string nome){

  cout<<"Digite o novo valor : ";
  
  float valor;
  cin>>valor;

  sandwich[nome]=valor;

  cout<<"================================================================"<<endl;
  cout<<"===             Valor modificado com sucesso !!              ==="<<endl;
  cout<<"================================================================"<<endl;
   }

  ////////////////////////////////////////////////////////////////
  
void mudarvalorsuco(string nome){

 cout<<"digite o novo valor :";
  
 float valor;
 cin>>valor;

 suco[nome]=valor;

 cout<<"================================================================"<<endl;
 cout<<"===             Valor modificado com sucesso !!              ==="<<endl;
 cout<<"================================================================"<<endl;
  
}

//////////////////funcoes de remoção///////////////////////////////

void removersandwich(std::string nome){

 sandwich.erase(nome);

 cout<<"================================================================"<<endl;
 cout<<"===             sandwich removido com sucesso !!             ==="<<endl;
 cout<<"================================================================"<<endl;

}

//////////////////////////////////////////////////////////////////

void removersuco(std::string nome){
 
  suco.erase(nome);

  cout<<"================================================================"<<endl;
  cout<<"===              suco removido com sucesso !!                ==="<<endl;
  cout<<"================================================================"<<endl;
  
  }

   /////////////salvar as modificaçoes do txt/////////////////////////

  void save(){
    
  
   map <string,float>::iterator it;
   

   arquivo.open("sandwich.txt",ios::out);
  if(arquivo.is_open()){

   for(it=sandwich.begin();it != sandwich.end();it++){
    
     arquivo << it->first <<endl;
     arquivo << it->second <<endl;
    }
  }
  else{
    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" <<endl;
    cout<<"!!!!    OCORREU UM ERRO AO SALVAR O ARQUIVO 'sandwich.txt'    !!!!"<<endl;
    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" <<endl;
  }

   arquivo.close();

   arquivo.open("sucos.txt",ios::out);
   if (arquivo.is_open()){

    for(it=suco.begin();it != suco.end();it++){
  
     arquivo << it->first <<endl;
     arquivo << it->second <<endl;
     }
   }
   else {

    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" <<endl;
    cout<<"!!!!     OCORREU UM ERRO AO SALVAR O ARQUIVO 'sucos.txt'      !!!!"<<endl;
    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" <<endl;
   }

   arquivo.close();

   }

 //////////////////////// coloca os elementos da lista no map/////////

void formatar(){
    
  string valor;
  string linha;

  arquivo.open("sandwich.txt",ios::in);

  if(arquivo.is_open()){
   while(arquivo>>linha>>valor){

    sandwich[linha]=stof(valor);

      }
    }

  arquivo.close();


  arquivo.open("sucos.txt",ios::in);

  if(arquivo.is_open()){
   while(arquivo>>linha>>valor){

    suco[linha]=stof(valor);

     }
    }

    arquivo.close();

}
