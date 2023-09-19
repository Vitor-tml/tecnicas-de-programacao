#include "pessoa.h"
#include <iostream>
#include <string.h>
using namespace std;
#include <ctime>

// Construtora sem parâmetro chamada explicitamente
Pessoa::Pessoa()
{
	inicializa("", 0, 0, 0);
}
Pessoa::Pessoa(const char* nomeContrutora, int diaConstrutora, int mesConstrutora, int anoConstrutora)
{
	inicializa(nomeContrutora, diaConstrutora, mesConstrutora, anoConstrutora);
}

Pessoa::~Pessoa()
{ 

}

void Pessoa::inicializa(const char* nomeContrutora, int diaConstrutora, int mesConstrutora, int anoConstrutora)
{
	diaNascimento = diaConstrutora;
	mesNascimento = mesConstrutora;
	anoNascimento = anoConstrutora;
	strcpy_s(nome, sizeof(nome), nomeContrutora);
	calculaIdade();
}

void Pessoa::calculaIdade()
{
	// Obtem o tempo atual em segundos desde 01/01/1970
	std::time_t tempoAtual = std::time(nullptr);
	// Converte o tempo de segundos para ano, mês e dia
	std:tm tempoLocal;
	localtime_s(&tempoLocal, &tempoAtual);
	// Calcula idade com base no nascimento e tempo atual
	idade = (tempoLocal.tm_year + 1900) - anoNascimento;
	if (anoNascimento < (tempoLocal.tm_mon + 1))
		idade--;
	if (anoNascimento == (tempoLocal.tm_mon + 1))
		if (diaNascimento < tempoLocal.tm_mday)
			idade--;
	if (anoNascimento == 0 && mesNascimento == 0 && diaNascimento == 0)
		inicializa("Jesus", 0, 0, (tempoLocal.tm_year + 1900) - 33);
}

void Pessoa::mostraIdade()
{
	cout << "A idade de " << nome << " e` " << idade << " anos." << endl;
}

void Pessoa::setUniversidade(Universidade* pUniversidade)
{
	universidadeFiliado = pUniversidade;
}

void Pessoa::informaUniversidade()
{
	cout << nome << " estuda na " << universidadeFiliado->getNome() << endl;
}

void Pessoa::setDepartamento(Departamento* pDepartamento)
{
	pDepatamentoFiliado = pDepartamento;
}

void Pessoa::getDepartamento()
{
	cout << nome << " faz parte do " << pDepatamentoFiliado->getSigla() << endl;
}