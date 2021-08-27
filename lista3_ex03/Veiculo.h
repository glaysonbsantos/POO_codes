#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>
#include "Pessoa.h"
using namespace std;

class Veiculo{
  public:
    Veiculo(float peso, float preco, int vel_max, string nome, int rg);
    Veiculo();
    ~Veiculo();
    float getPeso();
    void setPeso(float peso);
    float getPreco();
    void setPreco(float preco);
    int getVel_max();
    void setVel_max(int vel_max);
    string toString();

  private:
    float peso, preco;
    int vel_max;
    Pessoa dono;
};

#endif