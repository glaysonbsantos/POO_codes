#include <iostream>
#include "Endereco.h"
using namespace std;

Endereco::Endereco(int num, string cep){
  this->num = num;
  this-> cep = cep;
}

Endereco::Endereco(){
  this->num = 0;
  this-> cep = ' ';
}

string Endereco::toString(){
  return ("Número: " + to_string(this->num) + '\n' +
          "Cep: " + this->cep + '\n');
}