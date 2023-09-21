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
	pDepartamento = nullptr;
}

char* Universidade::getSigla()
{
	return sigla;
}

char* Universidade::getNome()
{
	return nome;
}

void Universidade::setDepartamento(Departamento* novoDepartamento)
{
	// Define o departamento
	pDepartamento = novoDepartamento;
}

char* Universidade::getDepartamento()
{
	return pDepartamento->getSigla();
}