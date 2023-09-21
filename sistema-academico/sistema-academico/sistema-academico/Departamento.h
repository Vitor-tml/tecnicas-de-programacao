#pragma once
class Departamento
{
private:
	char sigla[6];
	char nome[50];
	int id;
public:
	Departamento();
	Departamento(const char* cSigla, const char* cNome);
	~Departamento();
	void inicializa(const char* iSigla, const char* iNome);
	char* getSigla();
};

