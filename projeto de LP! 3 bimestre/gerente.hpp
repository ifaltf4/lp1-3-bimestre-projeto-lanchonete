#include <map>
#include <iostream>

#ifndef GERENTE_HPP
#define GERENTE_HPP

void chefia();
void listarsandwich();
void listarsuco();
void adicionarsandwich(std::string nome,float valor);
void adicionarsuco(std::string nome,float valor);
void removersandwich(std::string nome);
void removersuco(std::string nome);
void mudarvalorsandwich(std::string nome);
void mudarvalorsuco(std::string nome);
void save();
void formatar();
#endif