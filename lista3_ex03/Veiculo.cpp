#include <iostream>
#include "Veiculo.h"
using namespace std;

Veiculo::Veiculo(float peso, float preco, int vel_max, string nome, int rg): dono(nome, rg){
  this->peso = peso;
  this->preco = preco;
  this->vel_max = vel_max;
}

Veiculo::Veiculo():dono(){
  this->peso = 0;
  this->preco = 0;
  this->vel_max = 0;
}

Veiculo::~Veiculo(){}

float Veiculo::getPeso(){
  return peso;
}

void Veiculo::setPeso(float peso){
  this->peso = peso;
}

float Veiculo::getPreco(){
  return preco;
}

void Veiculo::setPreco(float preco){
  this->preco = preco;
}

int Veiculo::getVel_max(){
  return vel_max;
}

void Veiculo::setVel_max(int vel_max){
  this->vel_max = vel_max;
}

string Veiculo::toString(){
  return (dono.toString() +
          "Veículo: \n"
          "Peso: " + to_string(this->peso) + '\n' +
          "Preco: " + to_string(this->preco) + '\n' +
          "Velocidade Máxima: " + to_string(this->vel_max) + '\n' +
          "------------------------------\n");
}