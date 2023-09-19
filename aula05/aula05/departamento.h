#pragma once
class Departamento
{
private:
	// Atributos
	char sigla[6];
	char nome[30];
	// Métodos
public:
	Departamento();
	Departamento(const char* siglaInicializacao, const char* nomeInicializacao);
	~Departamento();
	void inicializa(const char *siglaInicializacao, const char *nomeInicializacao);
	char* getSigla();
	char* getNome();
};

