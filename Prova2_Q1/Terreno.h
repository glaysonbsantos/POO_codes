#ifndef TERRENO_H_
#define TERRENO_H_
#include <iostream>
#include "Imovel.h"
using namespace std;

class Terreno:public virtual Imovel{
  public:
    Terreno(int id, float preco, float area);
    string toString();
    float getArea();
  private:
    float area;
};

#endif