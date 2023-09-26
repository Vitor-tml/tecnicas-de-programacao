#include "Aluno.h"

Aluno::Aluno(const char* cNome, int dia, int mes, int ano, int novoRA, float novoCR):
Pessoa(cNome, dia, mes, ano) // Chama o construtor da classe base
{
    RA = novoRA;
    CR = novoCR;
}

Aluno::Aluno()
{
    RA = -1;
    CR = -1;
}

Aluno::~Aluno()
{

}

void Aluno::setRA(int novoRA)
{
    RA = novoRA;
}

int Aluno::getRA()
{
    return RA;
}

void Aluno::setCR(float novoCR) {
    CR = novoCR;
}

float Aluno::getCR()
{
    return CR;
}

void Aluno::setUniversidade(Universidade* pUni)
{
    pUniversidade = pUni;
}

const char* Aluno::setUniversidade()
{
    return pUniversidade->getSigla();
}