#include <iostream>
#include "Turma.h"
using namespace std;

Turma::Turma(string nome, int rg, int num, string cep, int cargaHr, float salario, string area): prof(nome, rg, num, cep, cargaHr, salario, area), alunos(){
  for(int i = 0; i < 10; i++){
    Aluno a("", 0, 0, "", 0, -1);
    alunos[i] = a;
  }
}

void Turma::imprimirTurma(){
  cout << "PROFESSOR DA TURMA\n"
       << prof.toString()
       << "ALUNOS DA TURMA\n";
       
  for (int i = 0; i < 10; i++){
    if (alunos[i].getMatricula() != -1){
      cout << alunos[i].toString() << "\n++++++++++++++++++++\n" << endl;
    }
  }
}

void Turma::addAluno(Aluno &a){
  bool check = false;
  int pos = 0;
  for (int i = 0; i < 10; i++){
    if (alunos[i].getMatricula() == -1){
      check = true;
      pos = i;
      break;}
    }

  if (check){
    alunos[pos] = a;
    cout << "Aluno adicionado com sucesso!";
  } else{
      cout << "Turma lotada!" << endl;};
}

bool Turma::removerAluno(int matricula){
  bool check=false;
  for (int i = 0; i < 10; i++){
    if (alunos[i].getMatricula() == matricula){
      alunos[i].setMatricula(-1);
      check=true;
    }
  }
  if (check)
     cout<< "Aluno removido com sucesso!"<<endl;
  else
     cout<< "Nome não encontrado, tente de novo!"<<endl;
    return false;
}

void Turma::imprimirAluno(int matricula){
  for (int i = 0; i < 10; i++){
    if (alunos[i].getMatricula() == matricula){
      cout << alunos[i].toString() << endl;
    }
  }
}

void Turma::imprimirAlunos(){
  for (int i = 0; i < 10; i++){
    if (alunos[i].getMatricula() == -1)
      continue;
    else
      cout << alunos[i].toString()
      << "\n------------------------\n" << endl;
  }
}

void Turma::imprimirProfessor(){
  cout << prof.toString() << endl;
}

void Turma::alterarProfessor(Professor &p){
  this->prof = p;
}
