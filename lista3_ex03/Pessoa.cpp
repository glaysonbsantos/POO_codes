#include <iostream>
#include "Pessoa.h"
using namespace std;

Pessoa::Pessoa(string nome, int rg){
  this->nome = nome;
  this->rg = rg;
}

Pessoa::Pessoa(){
  this->nome = ' ';
  this->rg = 0;
}

Pessoa::~Pessoa(){};

void Pessoa::setNome(string nome){
  this->nome = nome;
}

string Pessoa::getNome(){
  return nome;
}

void Pessoa::setRg(int rg){
  this->rg = rg;
}

int Pessoa::getRg(){
  return rg;
}

string Pessoa::toString(){
  return ("Dono: \n"
          "Nome: " + this->nome + "\n" +
          "RG: " + to_string(this->rg) + '\n'+
          "------------------------------\n");
};