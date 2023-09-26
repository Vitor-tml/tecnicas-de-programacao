#include "Universidade.h"
#include "Departamento.h"
#include <string.h>
#include <iostream>
using namespace std;

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
	int i;
	strcpy_s(sigla, sizeof(sigla), isigla);
	strcpy_s(nome, sizeof(nome), inome);
	
	for (i = 0;i  < 50; i++)
		pDepartamento[i] = NULL;
}

char* Universidade::getSigla()
{
	return sigla;
}

char* Universidade::getNome()
{
	return nome;
}

void Universidade::setDepartamento(Departamento* novoDepartamento, int i)
{
	// Define o departamento
	if (pDepartamento[i] == NULL)
	{
		pDepartamento[i] = novoDepartamento;
		pDepartamento[i]->setUniversidade(this);
	}
	else
		cout << "Departamento " << i << " ja' definido." << endl;
}

char* Universidade::getDepartamento(int i)
{
	return pDepartamento[i]->getSigla();
}

void Universidade::listaDepartamentos()
{
	int i;
	for (i = 0; i < 50; i++)
		if (pDepartamento[i] != NULL)
			cout << pDepartamento[i]->getSigla() << " - " << pDepartamento[i]->getNome() << endl;
}