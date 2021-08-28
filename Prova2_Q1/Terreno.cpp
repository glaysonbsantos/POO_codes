#include <iostream>
#include "Terreno.h"
using namespace std;

Terreno::Terreno(int id, float preco, float area):Imovel(id, preco){
  this->area = area;
}

string Terreno::toString(){
  return (Imovel::toString() + 
          "Área do terreno: " + to_string(this->area) + " m²\n");
}

float Terreno::getArea(){
  return area;
}