#include <iostream>
#include "Retangulo.h"
using namespace std;

Retangulo::Retangulo(float comprimento, float altura) : tamanhos(comprimento, altura){};

Retangulo::~Retangulo(){};

double Retangulo::area(){
  return (tamanhos.getComprimento() * tamanhos.getAltura());
};