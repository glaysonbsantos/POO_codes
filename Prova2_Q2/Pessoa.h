#ifndef PESSOA_H_
#define PESSOA_H_
#include <iostream>
#include "Endereco.h"
using namespace std;

class Pessoa{
  public:
    Pessoa(string nome, int rg, int num, string cep);
    Pessoa();
    string toString();
  protected:
    string nome;
    int rg;
    Endereco endereco;
};

#endif