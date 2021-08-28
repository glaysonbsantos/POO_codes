#include <iostream>
#include "Imovel.h"
using namespace std;

Imovel::Imovel(float preco, int id){
  this->preco = preco;
  this->id = id;
}

string Imovel::toString(){
  return ("Id do imóvel: " + to_string(this->id) + '\n' +
          "Preço do imóvel: R$" + to_string(this->preco) + '\n');
}