// Novo ifndef
#pragma once
#include "departamento.h"
class Universidade
{
private:
	// Atributos
	char nome[10];
	// M�todos 
	void inicializa(const char *nomeInicializa);
public:
	Departamento matematica;
	Departamento informatica;
	// Contrutora com par�metro default substitu� a sem par�metro
	Universidade(const char *nomeInicializa="");
	// Destrutor
	~Universidade();
	// Set && get
	void setNome(const char* novoNome);
	char* getNome();
};

