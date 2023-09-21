#pragma once
#include "Departamento.h"

class Universidade
{
private:
	char sigla[10];
	char nome[50];
	Departamento* pDepartamento;
public:
	Universidade();
	Universidade(const char* csigla, const char* cnome);
	~Universidade();
	void inicializa(const char *isigla, const char *inome);
	char* getSigla();
	char* getNome();
	void setDepartamento(Departamento* novoDepartamento);
	char* getDepartamento();

};