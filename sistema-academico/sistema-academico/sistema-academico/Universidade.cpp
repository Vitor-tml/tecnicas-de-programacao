#include "Universidade.h"
#include <string.h>

Universidade::Universidade()
{
	inicializa("", "");
}

Universidade::Universidade(const char* csigla, const char* cnome)
{
	inicializa(csigla, cnome);
}

Universidade::~Universidade()
{

}

void Universidade::inicializa(const char* isigla, const char* inome)
{
	strcpy_s(sigla, sizeof(sigla), isigla);
	strcpy_s(nome, sizeof(nome), inome);
}

char* Universidade::getSigla()
{
	return sigla;
}