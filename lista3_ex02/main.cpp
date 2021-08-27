#include <iostream>
#include <iomanip>
#include "Empresa.h"
#include "Restaurante.h"

using namespace std;

int main() {
  Restaurante restaurante("Spolleto", "Catolé", "CG", "PB", 58400100, 988000088, "Italiana", 30);
  cout << restaurante.toString() << endl;
  return 0;
};