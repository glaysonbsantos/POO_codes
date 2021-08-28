#include <iostream>
#include "Aluno.h"
using namespace std;

int main()
{
    Aluno aluno1("Pedro"), aluno2("Leandro"), aluno3("Zeca");
    
    // ALuno reprovado
    aluno1.addNota(1, 0);
    aluno1.addNota(2, 0);
    aluno1.addNota(3, 0);
    aluno1.calculoMedia();
    aluno1.toString();
      
    // Aluno vai pra final
    aluno2.addNota(1, 40);
    aluno2.addNota(2, 50);
    aluno2.addNota(3, 60);
    aluno2.calculoMedia();
    aluno2.toString();
      
    // Aluno aprovado
    aluno3.addNota(1, 100);
    aluno3.addNota(2, 95.50);
    aluno3.addNota(3, 90);
    aluno3.calculoMedia();
    aluno3.toString();
    
    //Unidade inválida
    aluno1.addNota(0, 100);

    //Nota inválida
    aluno1.addNota(1, 101); 
}