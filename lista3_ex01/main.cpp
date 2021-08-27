#include <iostream>
#include "Triangulo.h"
#include "Retangulo.h"
using namespace std;

int main(){
    Triangulo triangulo(3.5, 2);
    cout << "A área do seu triângulo é: " << triangulo.area() << "." << endl;

    Retangulo retangulo(4, 2);
    cout << "A área do seu retângulo é: " <<  retangulo.area() <<  "." << endl;
    return 0;
};