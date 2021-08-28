#include <iostream>
#include "CasaComTerreno.h"
using namespace std;

CasaComTerreno::CasaComTerreno(float preco, int id, int num_quartos, float area, float valorMQ) : Imovel(preco, id), Casa(id, preco, num_quartos), Terreno(id, preco, area){
  this->valorMQ = valorMQ;
}

float CasaComTerreno::calculoValor(){
  return (valorMQ * Casa::getNum_quartos() * Terreno::getArea());
}

string CasaComTerreno::toString(){
  return (Imovel::toString() +
          "Número de Quartos: " + to_string(Casa::getNum_quartos()) + '\n' + 
          "Área do Terreno: " + to_string(Terreno::getArea()) + " m²\n" +
          "Valor do Metro Quadrado: R$" + to_string(this->valorMQ) + '\n' +
          "Preço total da casa com terreno: R$" + to_string(calculoValor()) + '\n');
}