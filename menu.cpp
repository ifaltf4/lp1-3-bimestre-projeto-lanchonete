#include "menu.hpp"

    Menu::Menu(const std::string &produto, double valor){
     

    }
    
    Menu::virtual ~Menu(){

    }


   Menu:: virtual std::string getProduto() const;{
   return produto;

   }

 Menu::virtual double getValor() const;{
    return valor;

 }

    


