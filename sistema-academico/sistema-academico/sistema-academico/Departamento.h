#pragma once

class Universidade;

class Departamento
{
private:
	char sigla[6];
	char nome[50];
	int id;
	Universidade* pUniversidade;
public:
	Departamento();
	Departamento(const char* cSigla, const char* cNome);
	~Departamento();
	void inicializa(const char* iSigla, const char* iNome);
	char* getSigla();
	char* getNome();
	void setUniversidade(Universidade* pUni);
	char* getUniversidade();
};

