#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include <iostream>
#include "Empresa.h"
using namespace std;

class Restaurante{
  public:
    Restaurante(string nome, string endereco, string cidade, string estado, int cep, int telefone, string tipo_de_comida, float preco_medio_prato);
    string getTipo_de_comida();
    void setTipo_de_comida(string tipo_de_comida);
    float getPreco_medio_prato();
    void setPreco_medio_prato(float preco_medio_prato);
    string toString();

  private:
    string tipo_de_comida;
    float preco_medio_prato;
    Empresa empresa;
};

#endif