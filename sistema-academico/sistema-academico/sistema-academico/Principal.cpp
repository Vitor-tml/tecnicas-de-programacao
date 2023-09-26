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
    vitor.inicializa("Vitor Gabriel", 31, 8, 2004);
    simao.inicializa("Jean Sim�o", 1, 1, 1900);
    // Universidades
    utfpr.inicializa("UTFPR", "Universidade Tecnol�gica Federal do Paran�");
    cambridge.inicializa("Cambridge", "University of Cambridge");
    zurique.inicializa("UZH", "Universit�t Z�rich");
    //Departamentos
    dainf.inicializa("DAINF", "Departamento de Inform�tica - UTFPR");
    damat.inicializa("DAMAT", "Departamento de Materm�tica - UTFPR");
    piuz.inicializa("PIUZ", "Department of Physics - University of Cambridge");
    cavendish.inicializa("CVDL", "Departamento de F�sica - Universit�t Z�rich");

    // INICIALIZANDO RELA��ES
    // Universidades com pessoas
    simao.setUniversidade(&utfpr);
    vitor.setUniversidade(&utfpr);
    // Departamentos com pessoas
    simao.setDepartamento(&dainf);
    // Universidade com departamento
    utfpr.setDepartamento(&dainf, 0);
    utfpr.setDepartamento(&damat, 1);
    cambridge.setDepartamento(&piuz, 0);
    zurique.setDepartamento(&cavendish, 0);
}

Principal::~Principal()
{

}

void Principal::executar()
{
    utfpr.listaDepartamentos();
    simao.informaTrabalho();
}