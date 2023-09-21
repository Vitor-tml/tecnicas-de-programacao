#include "Principal.h"
#include <ctime>
#include <iostream>
using namespace std;

Principal::Principal()
{
    std::tm dataAtual;
    std::time_t tempoAtual;
    std::time(&tempoAtual);

    if (localtime_s(&dataAtual, &tempoAtual) != 0)
    {
        // Lidar com erro ao obter a hora local, se necess�rio
        diaAtual = 0;
        mesAtual = 0;
        anoAtual = 0;
    }
    else
    {
        diaAtual = dataAtual.tm_mday;
        mesAtual = dataAtual.tm_mon + 1; // Adicionar 1, pois os meses come�am em 0
        anoAtual = dataAtual.tm_year + 1900; // Adicionar 1900, pois tm_year � o ano desde 1900
    }
    // INICIALIZANDO OBJETOS
    // Pessoas
	vitor.inicializa("Vitor", 31, 8, 2004);
	newton.inicializa("Isaac Newton", 25, 12, 1642);
	einstein.inicializa("Albert Einstein", 14, 3, 1879);
    // Universidades
    utfpr.inicializa("UTFPR", "Universidade Tecnol�gica Federal do Paran�");
    cambridge.inicializa("Cambridge", "University of Cambridge");
    zurique.inicializa("UZH", "Universit�t Z�rich");
    //Departamentos
    dainf.inicializa("DAINF", "Departamento de Inform�tica - UTFPR");
    piuz.inicializa("PIUZ", "Department of Physics - University of Cambridge");
    cavendish.inicializa("CVDL", "Departamento de F�sica - Universit�t Z�rich");

    // INICIALIZANDO RELA��ES
    // Universidades com pessoas
    vitor.setUniversidade(&utfpr);
    newton.setUniversidade(&cambridge);
    einstein.setUniversidade(&zurique);
    // Departamentos com pessoas
    vitor.setDepartamento(&dainf);
    newton.setDepartamento(&piuz);
    einstein.setDepartamento(&cavendish);
    // Universidade com departamento
    utfpr.setDepartamento(&dainf);
    cambridge.setDepartamento(&piuz);
    zurique.setDepartamento(&cavendish);
}

Principal::~Principal()
{

}

void Principal::executar()
{
    vitor.informaUniversidade();
    newton.informaUniversidade();
    einstein.informaUniversidade();
    cout << utfpr.getSigla() << " tem o " << utfpr.getDepartamento() << endl;
}