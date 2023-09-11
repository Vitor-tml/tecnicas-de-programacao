#include "pessoa.h"
#include <iostream>

Pessoa::Pessoa(int d, int m, int a)
{
    dia = d;
    mes = m;
    ano = a;
    idade = -1;
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
    printf("%d\n", idade);
}
