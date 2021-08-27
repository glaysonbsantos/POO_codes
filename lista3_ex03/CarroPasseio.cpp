#include <iostream>
#include "CarroPasseio.h"
using namespace std;

CarroPasseio::CarroPasseio(string modelo, string cor, float peso, float preco, int vel_max, string nome, int rg, int num_cilindros, int potencia) : Veiculo(peso, preco, vel_max, nome, rg), Motor(num_cilindros, potencia){
  this->modelo = modelo;
  this->cor = cor;
}

CarroPasseio::CarroPasseio(): Veiculo(), Motor (){
  this->modelo = '-';
  this-> cor = ' ';
}

string CarroPasseio::toString(){
  return (Veiculo::toString() + Motor::toString() +
          "Detalhes do veículo: \n"
          "Modelo: " + this->modelo + '\n' +
          "Cor: " + this->cor + '\n');
}
//CarroPasseio::~CarroPasseio(){}