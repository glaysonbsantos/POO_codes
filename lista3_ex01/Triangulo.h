#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <iostream>
#include "Poligono.h"
using namespace std;

class Triangulo{
  public:
    Triangulo(float comprimento, float altura);
    ~Triangulo();
    double area();
  private:
    Poligono tamanhos;
};

#endif