#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_

#include "universidade.h"
class Pessoa
{
private:
	char nome[20];
	int idade;
	int diaNascimento;
	int mesNascimento;
	int anoNascimento;
	Universidade *universidadeFiliado;
	Departamento *pDepatamentoFiliado;
	void inicializa(const char* nomeContrutora, int diaConstrutora, int mesConstrutora, int anoConstrutora);
	void calculaIdade();
public:
	Pessoa();
	Pessoa(const char* nomeContrutora, int diaConstrutora, int mesConstrutora, int anoConstrutora);
	~Pessoa();
	void mostraIdade();
	void setUniversidade(Universidade* pUniversidade);
	void informaUniversidade();
	void setDepartamento(Departamento *pDepartamento);
	void getDepartamento();
};

#endif