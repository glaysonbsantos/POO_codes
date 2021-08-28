#include <iostream>
#include "Casa.h"
using namespace std;

Casa::Casa(int id, float preco, int num_quartos): Imovel(id, preco){
  this->num_quartos = num_quartos;
}

string Casa::toString(){
  return (Imovel::toString() + '\n' +
          "Número de quartos: " + to_string(this->num_quartos) + '\n');
}

int Casa::getNum_quartos(){
  return num_quartos;
}