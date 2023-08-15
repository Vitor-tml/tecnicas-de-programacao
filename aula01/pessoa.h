typedef struct{
	int dia;
	int mes;
	int ano;
}PESSOA;

PESSOA ler();
PESSOA calcula(PESSOA *nascimento);
void exibe(PESSOA idade);
PESSOA data(int dia, int mes, int ano);
