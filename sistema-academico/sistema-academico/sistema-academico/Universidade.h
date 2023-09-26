#pragma once

class Departamento;

class Universidade
{
private:
	char sigla[10];
	char nome[50];
	Departamento* pDepartamento[50];
public:
	Universidade();
	Universidade(const char* csigla, const char* cnome);
	~Universidade();
	void inicializa(const char *isigla, const char *inome);
	char* getSigla();
	char* getNome();
	void setDepartamento(Departamento* novoDepartamento, int i);
	char* getDepartamento(int i);
	void listaDepartamentos();
};