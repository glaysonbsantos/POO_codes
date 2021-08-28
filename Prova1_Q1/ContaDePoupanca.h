#include <iostream>
#define taxaDeJurosAnual 0.03 
#define taxaDeSaque 0.02
using namespace std;

class ContaDePoupanca
{
private:
    string nomeTitular;
    float saldo;
public:
    ContaDePoupanca(string n, float s);
    ContaDePoupanca();
    string getNomeTitular();
    void setNomeTitular(string n);
    float getSaldo();
    void setSaldo(float s);
    void calculeRendimentoMensal();
    void sacar(float s);
    void toString();
    
};

ContaDePoupanca::ContaDePoupanca(string n, float s)
{
    nomeTitular = n;
    if (s<0)
    {
        saldo = 0;
    }
    else
    {
        saldo = s;
    } 
}

ContaDePoupanca::ContaDePoupanca()
{
    nomeTitular = "Sem Nome";
    saldo = 0;
}

string ContaDePoupanca::getNomeTitular()
{
    return nomeTitular;
}

void ContaDePoupanca::setNomeTitular(string n)
{
    nomeTitular = n;
}

float ContaDePoupanca::getSaldo()
{
    return saldo;
}

void ContaDePoupanca::setSaldo(float s)
{
    if (s < 0)
    {
        saldo = 0;
    }
    else
    {
        saldo = s;
    }
    
}

void ContaDePoupanca::calculeRendimentoMensal()
{
    saldo = saldo + (saldo * taxaDeJurosAnual) / 12;
    cout << "Rendimento calculado com sucesso, seu saldo foi atualizado para: R$" << saldo << "." << endl;
}

void ContaDePoupanca::sacar(float s)
{
    float valorDebitado = s + (s * taxaDeSaque);
    if (valorDebitado > saldo)
    {
        cout << "Saldo insuficiente." << endl;
    }
    else
    {
        saldo = saldo - valorDebitado;
        cout << "Saque realizado com sucesso." << endl;
    }
}

void ContaDePoupanca::toString()
{
    cout << "Titular da conta: " << nomeTitular << ". Saldo: R$" << saldo << "." << endl;
}