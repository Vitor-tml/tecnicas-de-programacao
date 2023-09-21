#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Principal
{
private:
	// Atributos
	int diaAtual;
	int mesAtual;
	int anoAtual;
	// Obj: pessoas
	Pessoa vitor;
	Pessoa einstein;
	Pessoa newton;
	// Obj universidades
	Universidade utfpr;
	Universidade cambridge;
	Universidade zurique;
	// Obj departamentos
	Departamento dainf;
	Departamento cavendish;
	Departamento piuz;

public:
	Principal();
	~Principal();
	void executar();
};

