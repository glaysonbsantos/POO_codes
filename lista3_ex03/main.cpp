#include <iostream>
#include "CarroPasseio.h"
#include "Caminhao.h"
using namespace std;

int main() {
  CarroPasseio meu_carro("HB20", "Branco", 800, 58000, 220, "Jess", 3313714, 3, 120);
  cout << meu_carro.toString() << endl;
  cout << '\n' << endl;

  Caminhao meu_caminhao(2.5, 15, 5000, 350000, 160, "Bê Santos", 3313714, 8, 500);
  cout << meu_caminhao.toString() << endl;
}
