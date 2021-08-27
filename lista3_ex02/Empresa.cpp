#include <iostream>
#include "Empresa.h"
using namespace std;

Empresa::Empresa(string nome, string endereco, string cidade, string estado, int cep, int telefone){
  this->nome = nome;
  this->endereco = endereco;
  this->cidade = cidade;
  this->estado = estado;
  this->cep = cep;
  this->telefone = telefone;
}

Empresa::Empresa(){
  this->nome = ' ';
  this->endereco = ' ';
  this->cidade = ' ';
  this->estado = ' ';
  this->cep = 0;
  this->telefone = 0;
}

Empresa::~Empresa(){};

string Empresa::getNome(){
  return nome;
}

void Empresa::setNome(string nome){
  this->nome = nome;
}

string Empresa::getEndereco(){
  return endereco;
}

void Empresa::setEndereco(string endereco){
  this->endereco = endereco;
}

string Empresa::getCidade(){
  return cidade;
}

void Empresa::setCidade(string cidade){
  this->cidade = cidade;
}

string Empresa::getEstado(){
  return estado;
}

void Empresa::setEstado(string estado){
  this->estado = estado;
}

int Empresa::getCep(){
  return cep;
}

void Empresa::setCep(int cep){
  this->cep = cep;
}

int Empresa::getTelefone(){
  return telefone;
}

void Empresa::setTelefone(int telefone){
  this->telefone = telefone;
}

string Empresa::toString(){
  return ("Nome: " + this->nome + "\n"
  + "Endereço: " + this->endereco + "\n"
  + "Cidade: " + this->cidade + "\n"
  + "Estado: " + this->estado + "\n"
  + "CEP: " + to_string(this->cep) + "\n"
  + "Telefone: " + to_string(this->telefone));
}
