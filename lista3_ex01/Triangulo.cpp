#include <iostream>
#include "Triangulo.h"
using namespace std;

Triangulo::Triangulo(float comprimento, float altura) : tamanhos(comprimento, altura){
};

Triangulo::~Triangulo(){};

double Triangulo::area(){
  return ((tamanhos.getComprimento() * tamanhos.getAltura()) / 2);
}