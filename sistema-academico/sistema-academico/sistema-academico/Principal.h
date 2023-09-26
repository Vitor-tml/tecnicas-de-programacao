#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"
#include "Aluno.h"
#include "Professor.h"

class Principal
{
private:
	// Atributos
	int diaAtual;
	int mesAtual;
	int anoAtual;
	// Obj: pessoas
	Professor simao;
	Aluno vitor;
	// Obj universidades
	Universidade utfpr;
	Universidade cambridge;
	Universidade zurique;
	// Obj departamentos
	Departamento dainf;
	Departamento cavendish;
	Departamento piuz;
	Departamento damat;

public:
	Principal();
	~Principal();
	void executar();
};

