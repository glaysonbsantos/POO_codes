#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_
#include <iostream>
using namespace std;

class Funcionario{
  public:
    Funcionario(int cargaHr, float salario);
    string toString();
  protected:
    int cargaHr;
    float salario;
};

#endif