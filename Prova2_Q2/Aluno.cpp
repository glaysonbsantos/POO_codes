#include <iostream>
#include "Aluno.h"
using namespace std;

Aluno::Aluno(string nome, int rg, int num, string cep, float media, int matricula): Pessoa(nome, rg, num, cep), endereco(num, cep){
  this->media = media;
  this->matricula = matricula;
}

Aluno::Aluno():Pessoa(), endereco(){
  this->media = 0;
  this->matricula = -1;
}

string Aluno::toString(){
  return ("INFORMAÇÕES DO ALUNO\n"
          "Media: " + to_string(this->media) + '\n' +
          "Matrícula: " + to_string(this->matricula) + "\n\n"+
          Pessoa::toString());
}

int Aluno::getMatricula(){
  return this->matricula;
}

void Aluno::setMatricula(int matricula){
  this->matricula = matricula;
}