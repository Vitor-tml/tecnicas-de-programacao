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
	vDepartamento.push_back(novoDepartamento);
	vDepartamento.back()->setUniversidade(this);	
}

char* Universidade::getDepartamento(int i)
{
	return vDepartamento[i]->getSigla();
}

void Universidade::listaDepartamentos()
{
	int i;
	int tam = vDepartamento.size();
	for (i = 0; i < tam; i++)
		cout << vDepartamento[i]->getSigla() << " - " << vDepartamento[i]->getNome() << endl;
}