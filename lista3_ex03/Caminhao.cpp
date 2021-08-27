#include <iostream>
#include "Caminhao.h"
using namespace std;

Caminhao::Caminhao(float altura, float comprimento, float peso, float preco, int vel_max, string nome, int rg, int num_cilindros, int potencia): Veiculo(peso, preco, vel_max, nome, rg), Motor(num_cilindros, potencia){
  this->altura = altura;
  this->comprimento =comprimento;
}

float Caminhao::getAltura(){
  return altura;
}

void Caminhao::setAltura(float altura){
  this->altura = altura;
}

float Caminhao::getComprimento(){
  return comprimento;
}

void Caminhao::setComprimento(float comprimento){
  this->comprimento = comprimento;
}

string Caminhao::toString(){
  return (Veiculo::toString() + Motor::toString() +
        "Detalhes do caminhão: \n"
        "Altura: " + to_string(this->altura) + '\n' +
        "Comprimento: " + to_string(this->comprimento) + '\n');
}