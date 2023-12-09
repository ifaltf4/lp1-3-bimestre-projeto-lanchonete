#include <iostream>
#include<fstream>
#include<string>

template bool compare<typename S , typename U>;
using namespace std;

fstream cardapio;


int main(){

 while(true){

  cou<<"bem vindo ao sistema unico "<<endl;
  cout<<"do restaurante  komyoku de kentalendo"<<endl;
  cout<<" escolha um dos perfis"
  cout<<"1 - perfil do cliente."<<endl;
  cout<<"2 - perfil do gerente."<<endl;
  cout<<"0 - sair ;"
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