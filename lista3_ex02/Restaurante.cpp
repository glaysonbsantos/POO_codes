#include <iostream>
#include "Restaurante.h"
using namespace std;

//criar uma função pra manipular o valor do preco_medio_prato e já passá-lo com precisão de 2 casas.
/*void manipula_valor(){
  this->preco_medio_prato = preco_medio_prato;
}*/

Restaurante::Restaurante(string nome, string endereco, string cidade, string estado, int cep, int telefone, string tipo_de_comida, float preco_medio_prato) : empresa(nome, endereco, cidade, estado, cep, telefone){
  this->tipo_de_comida = tipo_de_comida;
  this->preco_medio_prato = preco_medio_prato;
}

string Restaurante::getTipo_de_comida(){
  return tipo_de_comida;
}

void Restaurante::setTipo_de_comida(string tipo_de_comida){
  this->tipo_de_comida = tipo_de_comida;
}

float Restaurante::getPreco_medio_prato(){
  return preco_medio_prato;
}

void Restaurante::setPreco_medio_prato(float preco_medio_prato){
  this->preco_medio_prato = preco_medio_prato;
}

string Restaurante::toString(){
  return (empresa.toString() + "\n" +
          "Tipo de comida: " + this->tipo_de_comida + "\n" +
          "Preço médio do prato: " + to_string(this->preco_medio_prato));
}
