#include <iostream>
#include "Funcionario.h"
using namespace std;

Funcionario::Funcionario(int cargaHr, float salario){
  this->cargaHr = cargaHr;
  this->salario = salario;
}

string Funcionario::toString(){
  return ("INFORMAÇÕES DO FUNCIONÁRIO\n"
          "Carga horária: " + to_string(this->cargaHr) + " horas\n" +
          "Salário: R$" + to_string(this->salario) + "\n\n------------------------\n");
}