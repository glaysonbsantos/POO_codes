#ifndef ALUNO_H_
#define ALUNO_H_
#include <iostream>
#include "Pessoa.h"
using namespace std;

class Aluno: virtual public Pessoa{
  public:
    Aluno(string nome, int rg, int num, string cep, float media, int matricula);
    Aluno();
    string toString();
    int getMatricula();
    void setMatricula(int matricula);

  private:
    float media;
    int matricula;
    Endereco endereco;
};

#endif