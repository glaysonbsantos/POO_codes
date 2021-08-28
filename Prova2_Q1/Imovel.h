#ifndef IMOVEL_H_
#define IMOVEL_H_
#include <iostream>
using namespace std;

class Imovel{
  public:
    Imovel(float preco, int id);
    string toString();

  private:
    float preco;
    int id;
};

#endif