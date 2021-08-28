#ifndef PROFESSOR_H_
#define PROFESSOR_H_
#include <iostream>
#include "Pessoa.h"
#include "Funcionario.h"
using namespace std;

class Professor:virtual public Pessoa, public Funcionario{
  public:
    Professor(string nome, int rg, int num, string cep, int cargaHr, float salario, string area);
    string toString();

  private:
    string area;
    Endereco endereco;
};

#endif