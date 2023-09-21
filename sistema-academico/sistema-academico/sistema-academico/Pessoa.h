#pragma once
#include "Universidade.h"
#include "Departamento.h"
class Pessoa
{
private:
	char nome[30];
	int diaNascimento;
	int mesNascimento;
	int anoNascimento;
	int idade;
	int id;
	Universidade* pUniversidade;
	Departamento* pDepartamento;
public:
	Pessoa();
	Pessoa(const char* cNome, int dia, int mes, int ano);
	~Pessoa();
	void inicializa(const char* inicializaNome, int dia, int mes, int ano);
	int calculaIdade();
	void setUniversidade(Universidade *pUni);
	char* getUniversidade();
	void setDepartamento(Departamento *pDepto);
	char* getDepartamento();
	void informaUniversidade();
};

