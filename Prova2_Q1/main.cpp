#include <iostream>
#include "CasaComTerreno.h"
using namespace std;

int main() {
  CasaComTerreno casa_com_terreno(100000, 1, 2, 120, 1000);
  cout << casa_com_terreno.toString() << endl;
}