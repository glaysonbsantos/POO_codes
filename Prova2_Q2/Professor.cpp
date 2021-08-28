#include <iostream>
#include "Professor.h"
#include "Pessoa.h"
#include "Funcionario.h"
using namespace std;

Professor::Professor(string nome, int rg, int num, string cep, int cargaHr, float salario, string area): Pessoa(nome, rg, num, cep), endereco(num, cep), Funcionario(cargaHr, salario){
  this->area = area;
}

string Professor::toString(){
  return ("INFORMAÇÕES DO PROFESSOR\n"
          "Área de atuação: " + this->area + "\n\n" +
          Pessoa::toString() + '\n' +
          Funcionario::toString() + '\n');
}

string toString();