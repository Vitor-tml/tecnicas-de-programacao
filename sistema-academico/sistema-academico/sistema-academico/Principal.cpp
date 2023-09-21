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
        // Lidar com erro ao obter a hora local, se necessário
        diaAtual = 0;
        mesAtual = 0;
        anoAtual = 0;
    }
    else
    {
        diaAtual = dataAtual.tm_mday;
        mesAtual = dataAtual.tm_mon + 1; // Adicionar 1, pois os meses começam em 0
        anoAtual = dataAtual.tm_year + 1900; // Adicionar 1900, pois tm_year é o ano desde 1900
    }
    // INICIALIZANDO OBJETOS
    // Pessoas
	vitor.inicializa("Vitor", 31, 8, 2004);
	newton.inicializa("Isaac Newton", 25, 12, 1642);
	einstein.inicializa("Albert Einstein", 14, 3, 1879);
    // Universidades
    utfpr.inicializa("UTFPR", "Universidade Tecnológica Federal do Paraná");
    cambridge.inicializa("Cambridge", "University of Cambridge");
    zurique.inicializa("UZH", "Universität Zürich");
    //Departamentos
    dainf.inicializa("DAINF", "Departamento de Informática - UTFPR");
    piuz.inicializa("PIUZ", "Department of Physics - University of Cambridge");
    cavendish.inicializa("CVDL", "Departamento de Física - Universität Zürich");

    // INICIALIZANDO RELAÇõES
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