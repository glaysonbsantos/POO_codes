#include <iostream>
#include <iomanip>
#define TAM 3
using namespace std;

class Aluno 
{
public:
    Aluno(string nome);
    void addNota(int unidade, float valor);
    bool alterarNota(int unidade, float valor);
    void calculoMedia(); // fazer os couts
    string toString();
    string getNome(); 
    void setNome(string nome);
private:
    string nome;
    float notas[3];
    float media;
};

Aluno::Aluno(string nome)
{
    this->nome = nome;
    for ( int i = 0; i < TAM; i++)
    {
        notas[i] = -1;
    };
}

void Aluno::addNota(int unidade, float valor)
{  
    if (unidade < 1 || unidade > 3)
    {
    cout << "Impossivel adicionar nota, escolha uma unidade valida. Ex: 1, 2 ou 3." << endl;
    }
    else
    {
        if (valor < 0 || valor > 100)
        {
            cout << "Insira uma nota de 0 a 100.";
        }
        else
        {
            notas[unidade - 1] = valor;
        }   
    }      
}

bool Aluno::alterarNota(int unidade, float valor)
{
    if (unidade < 1 || unidade > 3)
    {
        cout << "Impossivel adicionar nota, escolha uma unidade valida. Ex: 1, 2 ou 3." << endl;
    }
    else
    {
        if (valor < 0 || valor > 100)
        {
            cout << "Insira uma nota de 0 a 100.";
        }
        else
        {
            if (notas[unidade - 1] != -1)
            {
                notas[unidade - 1] = valor;
                return true;
            }
        } 
        
        cout << "Nao eh possivel alterar uma nota que ainda nao foi adicionada.";
        return false;
          
    } 
}

void Aluno::calculoMedia()
{
    float somaNotas;
    somaNotas = 0;
    for (int i = 0; i < TAM; i++)
    {    
        if (notas[i] == -1)
        {
            cout << "Nao eh possivel calcular a media sem que todas as notas sejam adicionadas." << endl;
            this->media = -1;
            return;
        }  
        somaNotas += notas[i];
    }
    float media = somaNotas / 3;
    this->media = media;
    if (media >= 70.0)
    {
        cout << "Aprovado" << endl;
        return;
    }
    if (media < 70.0 && media >= 40.0)
    {
        float mediaParaFinal;
        mediaParaFinal = 100 - media;
        cout << "Apto para o Exame Final. Precisa tirar: " << mediaParaFinal << endl;
        return;
    }
    if (media < 40.0)
    {
        cout << "Reprovado" << endl;
        return;
    } 
}

string Aluno::toString()
{ 
    if (media == -1)
    {
        cout << fixed << setprecision(2) << nome << " primeira nota: " << this->notas[0] << ". Segunda nota: " << this->notas[1]
        << ". Terceira nota: "<< this->notas[2] << ". Media: " << "-" << "." << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << nome << " primeira nota: " << this->notas[0] << ". Segunda nota: " << this->notas[1]
        << ". Terceira nota: "<< this->notas[2] << ". Media: " << this->media << "." << endl;
    }
    
}

string Aluno::getNome()
{
    return nome;
}

void Aluno::setNome(string nome)
{
    this->nome = nome;
}