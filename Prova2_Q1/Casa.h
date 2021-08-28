#ifndef CASA_H_
#define CASA_H_
#include <iostream>
#include "Imovel.h"
using namespace std;

class Casa:public virtual Imovel{
  public:
    Casa(int id, float preco, int num_quartos);
    string toString();
    int getNum_quartos();
  private:
    int num_quartos;
};

#endif