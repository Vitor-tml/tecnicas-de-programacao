#pragma once
class Pessoa
{
protected:
	char nome[30];
	int diaNascimento;
	int mesNascimento;
	int anoNascimento;
	int idade;
	int id;
public:
	Pessoa();
	Pessoa(const char* cNome, int dia, int mes, int ano);
	~Pessoa();
	void inicializa(const char* inicializaNome, int dia, int mes, int ano);
	int calculaIdade();
};

