#include <iostream>
#include "ContaDePoupanca.h"
using namespace std;

int main()
{
    ContaDePoupanca poupador1("Leandro Almeida", 2000), poupador2("Any Caroliny", 300);
    poupador1.sacar(200);
    poupador2.sacar(300);
    poupador1.calculeRendimentoMensal();
    poupador2.calculeRendimentoMensal();
    poupador1.toString();
    poupador2.toString(); 
}