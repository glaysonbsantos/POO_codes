#include <iostream>
#include "Pessoa.h"
using namespace std;

Pessoa::Pessoa(string nome, int rg, int num, string cep): endereco(num, cep){
  this->nome = nome;
  this->rg = rg;
}

Pessoa::Pessoa(){
  this->nome = ' ';
  this->rg = 0;
}

string Pessoa::toString(){
  return ("INFORMAÇÕES DA PESSOA\n"
          "Nome: " + this->nome + "\n" +
          "RG: " + to_string(this->rg) + '\n' +
          "\nENDEREÇO\n" +
          endereco.toString());
}