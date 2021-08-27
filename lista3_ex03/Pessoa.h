#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
using namespace std;

class Pessoa{
  public:
    Pessoa(string nome, int rg);
    Pessoa();
    ~Pessoa();
    void setNome(string nome);
    string getNome();
    void setRg(int rg);
    int getRg();
    string toString();

  private:
    string nome;
    int rg;
};

#endif