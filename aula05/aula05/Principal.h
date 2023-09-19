#pragma once
#include "pessoa.h"
#include "universidade.h"

class Principal{
private:
	Pessoa einstein;
	Pessoa newton;
	Pessoa vitor;
	Universidade utfpr;
	Universidade princeton;
	Universidade cambridge;
public:
	Principal();
	~Principal();
	void executar();
};