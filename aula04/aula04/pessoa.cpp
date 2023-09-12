#include "pessoa.h"
#include <string.h>
#include <iostream>
using namespace std;

Pessoa::Pessoa(int d, int m, int a, const char nomeInic[])
{
    inicializa(d, m, a, nomeInic);
}

Pessoa::Pessoa()
{
    inicializa(0, 0, 0, "\0");
}

void Pessoa::inicializa(int d, int m, int a, const char nomeInic[])
{
    dia = d;
    mes = m;
    ano = a;
    idade = -1;
    strcpy_s(nome, nomeInic);
}
void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual)
{
    idade = anoAtual - ano;
    if (mes > mesAtual)
        idade--;

    if (mes == mesAtual && dia > diaAtual)
        idade--;
}

void Pessoa::informaIdade()
{
    cout << nome << " " << idade << endl;
}
