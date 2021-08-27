#ifndef CARROPASSEIO_H
#define CARROPASSEIO_H
#include <iostream>
#include "Veiculo.h"
#include "Motor.h"
using namespace std;

class CarroPasseio: public Veiculo, Motor{
  public:
    CarroPasseio(string modelo, string cor, float peso, float preco, int vel_max, string nome, int rg, int num_cilindros, int potencia);
    CarroPasseio();
    //~CarroPasseio; 
    string toString();
    /*void setModelo(string modelo);
    string getModelo();
    void setCor(string cor);
    string getCor();*/

  private:
    string modelo, cor;
    Veiculo veiculo;
    Motor motor;
};

#endif