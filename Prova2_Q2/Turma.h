#ifndef TURMA_H_
#define TURMA_H_
#include <iostream>
#include "Professor.h"
#include "Aluno.h"
using namespace std;

class Turma{
  public:
    Turma(string nome, int rg, int num, string cep, int cargaHr, float salario, string area);
    void imprimirTurma(); // não tive tempo de implementar um toString adequado, professor.
    void addAluno(Aluno &a);
    bool removerAluno(int matricula);
    void imprimirAluno(int matricula);
    void imprimirAlunos();
    void imprimirProfessor();
    void alterarProfessor(Professor &p);

  private:
    Professor prof;
    Aluno alunos[10];
};

#endif