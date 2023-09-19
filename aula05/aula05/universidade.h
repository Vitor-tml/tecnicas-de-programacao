// Novo ifndef
#pragma once
#include "departamento.h"
class Universidade
{
private:
	// Atributos
	char nome[10];
	// Métodos 
	void inicializa(const char *nomeInicializa);
public:
	Departamento matematica;
	Departamento informatica;
	// Contrutora com parâmetro default substituí a sem parâmetro
	Universidade(const char *nomeInicializa="");
	// Destrutor
	~Universidade();
	// Set && get
	void setNome(const char* novoNome);
	char* getNome();
};

