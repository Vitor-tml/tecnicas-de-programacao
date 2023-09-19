#include "departamento.h"
#include <string>
#include <iostream>
using namespace std;

Departamento::Departamento()
{
	inicializa("", "");
}

Departamento::Departamento(const char* siglaInicializacao, const char* nomeInicializacao)
{
	inicializa(siglaInicializacao, nomeInicializacao);
}
Departamento::~Departamento()
{

}
void Departamento::inicializa(const char* siglaInicializacao, const char* nomeInicializacao)
{
	strcpy_s(sigla, sizeof(sigla), siglaInicializacao);
	strcpy_s(nome, sizeof(nome), nomeInicializacao);
}

char* Departamento::getSigla()
{
	return sigla;
}

char* Departamento::getNome()
{
	return nome;
}