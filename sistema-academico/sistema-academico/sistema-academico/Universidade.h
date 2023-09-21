#pragma once
class Universidade
{
private:
	char sigla[5];
	char nome[30];
public:
	Universidade();
	Universidade(const char* csigla, const char* cnome);
	~Universidade();
	void inicializa(const char *isigla, const char *inome);
	char* getSigla();
};