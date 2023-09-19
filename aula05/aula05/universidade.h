// Novo ifndef
#pragma once
class Universidade
{
private:
	char nome[10];
	void inicializa(const char *nomeInicializa);
public:
	// Contrutora com parâmetro default substituí a sem parâmetro
	Universidade(const char *nomeInicializa="");
	// Destrutor
	~Universidade();
	// Set && get
	void setNome(const char* novoNome);
	char* getNome();
};

