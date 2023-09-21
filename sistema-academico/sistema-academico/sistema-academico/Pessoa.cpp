#include "Pessoa.h"
#include <ctime>
#include <string.h>
#include <iostream>
using namespace std;

Pessoa::Pessoa()
{
	inicializa("", 0, 0, 0);
}

Pessoa::Pessoa(const char* cNome, int dia, int mes, int ano)
{
	inicializa(cNome, dia, mes, ano);
}

Pessoa::~Pessoa()
{

}

void Pessoa::inicializa(const char* inicializaNome, int dia, int mes, int ano)
{
    diaNascimento = dia;
    mesNascimento = mes;
    anoNascimento = ano;
    strcpy_s(nome, sizeof(nome), inicializaNome);
    idade = calculaIdade();
    id = -1;
    pUniversidade = nullptr;
    pDepartamento = nullptr;
}

int Pessoa::calculaIdade()
{
    // Obtém a data atual
    std::tm dataAtual;
    std::time_t tempoAtual;
    std::time(&tempoAtual);

    if (localtime_s(&dataAtual, &tempoAtual) != 0)
    {
        // Lidar com erro ao obter a hora local, se necessário
        return -1; // Um valor de erro, se aplicável
    }

    // Calcula a idade com base na data de nascimento
    int idade = dataAtual.tm_year + 1900 - anoNascimento;

    if (dataAtual.tm_mon + 1 < mesNascimento)
        idade--;
    if (dataAtual.tm_mon + 1 == mesNascimento && dataAtual.tm_mday < diaNascimento)
        idade--;

    return idade;
}

void Pessoa::setUniversidade(Universidade* pUni)
{
    pUniversidade = pUni;
}

char* Pessoa::getUniversidade()
{
    return pUniversidade->getNome();
}

void Pessoa::setDepartamento(Departamento * pDepto)
{
    pDepartamento = pDepto;
}

char* Pessoa::getDepartamento()
{
    return pDepartamento->getSigla();
}

void Pessoa::informaUniversidade()
{
    cout << nome << " faz parte do " << getDepartamento() << " da " << getUniversidade() << endl;
}