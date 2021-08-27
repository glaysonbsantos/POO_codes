#ifndef CAMINHAO_H
#define CAMINHAO_H
#include <iostream>
#include "Veiculo.h"
#include"Motor.h"
using namespace std;

class Caminhao: public Veiculo, Motor{
  public:
    Caminhao(float altura, float comprimento, float peso, float preco, int vel_max, string nome, int rg, int num_cilindros, int potencia);
    float getAltura();
    void setAltura(float altura);
    float getComprimento();
    void setComprimento(float comprimento);
    string toString();

  private:
    float altura, comprimento;
    Veiculo veiculo;
    Motor motor;
};


#endif