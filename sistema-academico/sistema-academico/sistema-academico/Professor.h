#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Professor : public Pessoa {
private:
    Universidade* pUniversidade;
    Departamento* pDepartamento;

public:
    Professor(const char* cNome, int dia, int mes, int ano, Universidade* universidade, Departamento* departamento);
    Professor();
    ~Professor();

    // M�todos para acessar pUniversidade e pDepartamento
    void setUniversidade(Universidade* universidade);
    char* getUniversidade();
    void setDepartamento(Departamento* departamento);
    char* getDepartamento();
    // Fun��es para obter sigla da universidade e nome do departamento
    const char* getSiglaUniversidade();
    const char* getNomeDepartamento();
    // informa
    void informaTrabalho();
};
