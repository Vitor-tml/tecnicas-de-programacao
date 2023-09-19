#include "Principal.h"

Principal::Principal():
newton("Newton", 1, 1, 1643),
einstein("Einsten", 14, 3, 1879),
vitor("Vitor", 31, 8, 2004),
cambridge("Cambridge"),
princeton("Princeton"),
utfpr("UTFPR")
{
	utfpr.informatica.inicializa("DAINF", "Departamento de Informatica.");
	newton.setUniversidade(&cambridge);
	einstein.setUniversidade(&princeton);
	vitor.setUniversidade(&utfpr);
	vitor.setDepartamento(&utfpr.informatica);
}

Principal::~Principal()
{

}

void Principal::executar()
{
	newton.informaUniversidade();
	einstein.informaUniversidade();
	vitor.informaUniversidade();
	vitor.getDepartamento();
}