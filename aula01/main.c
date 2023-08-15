#include <stdio.h>
#include <stdlib.h>
#include "pessoa.h"

int main()
{
	PESSOA niuton, aintein, idade, fulano;
	niuton = data(14,3,1879);
	aintein = data(4,1,1643);
	fulano = ler();
	idade = calcula(&fulano);
	exibe(idade);
	return 0;
}
