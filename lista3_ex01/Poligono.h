#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>
using namespace std;

class Poligono {
private:
    float comprimento, altura;
public:
    Poligono(float comprimento, float altura);
    ~Poligono();
    float getComprimento();
    void setComprimento(float comprimento);
    float getAltura();
    void setAltura(float altura);
};

#endif