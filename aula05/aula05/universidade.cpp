#include "universidade.h"
#include <string>

Universidade::Universidade(const char* nomeInicializa)
{
	inicializa(nomeInicializa);
}

Universidade::~Universidade()
{

}

void Universidade::inicializa(const char* nomeInicializa)
{
	strcpy_s(nome, sizeof(nome), nomeInicializa);
}

void Universidade::setNome(const char* novoNome)
{
	strcpy_s(nome, sizeof(nome), novoNome);
}

char* Universidade::getNome()
{
	return nome; 
}