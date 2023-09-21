#pragma once
class Departamento
{
private:
	char sigla[5];
	char nome[30];
	int id;
public:
	Departamento();
	Departamento(const char* cSigla, const char* cNome);
	~Departamento();
	void inicializa(const char* iSigla, const char* iNome);
	char* getSigla();
};

