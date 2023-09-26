#include "Departamento.h"
#include "Universidade.h"
#include <string.h>

Departamento::Departamento()
{
	inicializa("", "");
}

Departamento::Departamento(const char* cSigla, const char* cNome)
{
	inicializa(cSigla, cNome);
}

Departamento::~Departamento()
{

}

void Departamento::inicializa(const char* iSigla, const char* iNome)
{
	strcpy_s(sigla, sizeof(sigla), iSigla);
	strcpy_s(nome, sizeof(nome), iNome);
	id = -1;
	pUniversidade = NULL;
}
char* Departamento::getSigla()
{
	return sigla;
}

char* Departamento::getNome()
{
	return nome;
}

void Departamento::setUniversidade(Universidade* pUni)
{
	pUniversidade = pUni;
}

char* Departamento::getUniversidade()
{
	return pUniversidade->getSigla();
}