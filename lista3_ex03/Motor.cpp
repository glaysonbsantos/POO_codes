#include <iostream>
#include "Motor.h"
using namespace std;

Motor::Motor(int num_cilindros, int potencia){
  this->num_cilindros = num_cilindros;
  this->potencia = potencia;
}

Motor::Motor(){
  this->num_cilindros = 0;
  this->potencia = 0;
}

Motor::~Motor(){}

int Motor::getNum_cilindros(){
  return num_cilindros;
}

void Motor::setNum_cilindros(int num_cilindros){
  this->num_cilindros = num_cilindros;
}

int Motor::getPotencia(){
  return potencia;
}

void Motor::setPotencia(int potencia){
  this->potencia = potencia;
}

string Motor::toString(){
  return ("Motor: \n"
          "Número de cilindros: " + to_string(this->num_cilindros) + '\n' +
          "Potência: " + to_string(this->potencia) + '\n' +
          "------------------------------\n");
}