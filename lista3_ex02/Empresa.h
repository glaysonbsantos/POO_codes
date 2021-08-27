#ifndef EMPRESA_H
#define EMPRESA_H
#include <iostream>
using namespace std;

class Empresa{
  public:
    Empresa(string nome, string endereco, string cidade, string estado, int cep, int telefone);
    Empresa();
    ~Empresa();
    string getNome();
    void setNome(string nome);
    string getEndereco();
    void setEndereco(string endereco);
    string getCidade();
    void setCidade(string cidade);
    string getEstado();
    void setEstado(string estado);
    int getCep();
    void setCep(int cep);
    int getTelefone();
    void setTelefone(int telefone);
    string toString();

  private:
    string nome, endereco, cidade, estado;
    int cep, telefone;
};

#endif