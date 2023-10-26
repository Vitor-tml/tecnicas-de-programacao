#pragma once
#include <vector>
using namespace std;

class Departamento;

class Universidade
{
private:
	char sigla[10];
	char nome[50];
	vector<Departamento*> vDepartamento;
public:
	Universidade();
	Universidade(const char* csigla, const char* cnome);
	~Universidade();
	void inicializa(const char *isigla, const char *inome);
	char* getSigla();
	char* getNome();
	void setDepartamento(Departamento* novoDepartamento);
	char* getDepartamento(int i);
	void listaDepartamentos();
};