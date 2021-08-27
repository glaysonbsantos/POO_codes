#ifndef RETANGULO_H
#define RETANGULO_H
#include <iostream>
#include "Poligono.h"
using namespace std;

class Retangulo{
  public:
    Retangulo(float comprimento, float altura);
    ~Retangulo();
    double area();
  private:
    Poligono tamanhos;
};

#endif