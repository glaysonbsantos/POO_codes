#include<iostream>
#include "Poligono.h"
using namespace std;

Poligono::Poligono(float comprimento, float altura){
    this->comprimento = comprimento;
    this->altura = altura;
};

Poligono::~Poligono(){};

float Poligono::getComprimento(){
    return comprimento;
};

void Poligono::setComprimento(float comprimento){
    this->comprimento = comprimento;
};

float Poligono::getAltura(){
    return altura;
};

void Poligono::setAltura(float altura){
    this->altura = altura;
};