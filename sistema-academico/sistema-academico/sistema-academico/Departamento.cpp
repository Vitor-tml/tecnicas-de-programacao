#include "Departamento.h"
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

}
char* Departamento::getSigla()
{
	return sigla;
}