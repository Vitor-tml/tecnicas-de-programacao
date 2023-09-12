#include <iostream>

class Pessoa 
{
private:
    int dia;
    int mes;
    int ano;
    int idade;
    char nome[30];

public:
    Pessoa(int d, int m, int a, const char nomeInic[] = "");
    Pessoa();
    void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
    void informaIdade();
    void inicializa(int d, int m, int a, const char nomeInic[]);
}; 