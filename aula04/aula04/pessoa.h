#include <iostream>

class Pessoa 
{
private:
    int dia;
    int mes;
    int ano;
    int idade;

public:
    Pessoa(int d, int m, int a);
    void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
    void informaIdade();
}; 