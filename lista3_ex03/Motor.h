#ifndef MOTOR_H
#define MOTOR_H
#include <iostream>
using namespace std;

class Motor{
  public:
    Motor(int num_cilindros, int potencia);
    Motor();
    ~Motor();
    int getNum_cilindros();
    void setNum_cilindros(int num_cilindros);
    int getPotencia();
    void setPotencia(int potencia);
    string toString();

  private:
    int num_cilindros, potencia;
};

#endif