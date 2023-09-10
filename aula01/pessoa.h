typedef struct{
	int dia;
	int mes;
	int ano;
	int idade;
}PESSOA;

PESSOA ler();
PESSOA calcula(PESSOA *nascimento);
void exibe(PESSOA idade);
PESSOA data(int dia, int mes, int ano);
