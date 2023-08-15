#include "pessoa.h"
#include  <time.h>
#include <stdio.h>

PESSOA ler()
{
	PESSOA aux;
	printf("Entre com a idade de nascimento: dd/mm/aaaa\n");
	scanf("%d/%d/%d", &aux.dia, &aux.mes, &aux.ano);
	return aux;
}

PESSOA calcula(PESSOA *nascimento)
{
	nascimento->ano -= 1900;
	nascimento->mes -= 1;
	struct tm data_atual;
	time_t t;
	PESSOA idade;

	time(&t);
	data_atual = *localtime(&t);

	idade.ano = data_atual.tm_year - nascimento->ano;
	idade.mes = data_atual.tm_mon - nascimento->mes;
	idade.dia = data_atual.tm_mday - nascimento->dia;

	if(idade.dia < 0)
	{
		idade.dia = 0;
		idade.mes -= 1;
	}

	if(idade.mes < 0)
	{
		idade.mes = 0;
		idade.ano -= 1;
	}
	return idade;
}

void exibe(PESSOA idade)
{
	printf("Fulaninho tem %d anos %d meses e %d dias de vida!:)\n", idade.ano, idade.mes, idade.dia);
	return;
}

PESSOA data(int dia, int mes, int ano)
{
	PESSOA aux;
	aux.dia = dia;
	aux.mes = mes;
	aux.ano = ano;
}
