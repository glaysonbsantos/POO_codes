#ifndef ENDERECO_H_
#define ENDERECO_H_
#include <iostream>
using namespace std;

class Endereco{
  public:
    Endereco(int num, string cep);
    Endereco();
    string toString();
  private:
    int num;
    string cep;
};

#endif