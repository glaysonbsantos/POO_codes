#ifndef CASACOMTERRENO_H_
#define CASACOMTERRENO_H_
#include <iostream>
#include "Casa.h"
#include "Terreno.h"
using namespace std;

class CasaComTerreno: public Casa, public Terreno{
  public:
    CasaComTerreno(float preco, int id, int num_quartos, float area, float valorMQ);
    float calculoValor();
    string toString();
  private:
    float valorMQ;
};

#endif